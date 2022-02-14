
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_subdevice {TYPE_2__* async; } ;
struct comedi_device {scalar_t__ iobase; int irq; struct comedi_subdevice* subdevices; int attached; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {int adbits; } ;
struct TYPE_5__ {int events; } ;
struct TYPE_4__ {scalar_t__ dma_dir; scalar_t__ nread; scalar_t__ ad_2scomp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int) ;
 TYPE_3__ VAR_15 ;
 int FUNC_1 (TYPE_2__*,short) ;
 int FUNC_2 (struct comedi_device*,char*) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*) ;
 TYPE_1__* VAR_16 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_6 (struct comedi_device*) ;
 int FUNC_7 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_8 (struct comedi_device*) ;
 unsigned int FUNC_9 (scalar_t__) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_12(int VAR_17, void *VAR_18)
{
 struct comedi_device *VAR_19 = VAR_18;
 struct comedi_subdevice *VAR_20;
 struct comedi_subdevice *VAR_21;
 unsigned int VAR_22, VAR_23, VAR_24;
 int VAR_25 = 0;

 if (!VAR_19->attached) {
  FUNC_2(VAR_19, "spurious interrupt");
  return VAR_14;
 }

 VAR_20 = VAR_19->subdevices + 0;
 VAR_21 = VAR_19->subdevices + 1;
 VAR_23 = FUNC_9(VAR_19->iobase + VAR_4);
 VAR_24 = FUNC_9(VAR_19->iobase + VAR_8);
 VAR_22 = FUNC_9(VAR_19->iobase + VAR_13);
 if (VAR_22 & VAR_10) {
  if (VAR_16->dma_dir == VAR_3)
   FUNC_6(VAR_19);
  else
   FUNC_8(VAR_19);
  VAR_25 = 1;
 }
 if (VAR_23 & VAR_7) {
  if (VAR_16->nread != 0) {
   FUNC_2(VAR_19, "A/D error");
   FUNC_5(VAR_19, VAR_20);
   VAR_20->async->events |= VAR_1;
  }
  VAR_25 = 1;
 }
 if (VAR_24 & VAR_9) {







  FUNC_2(VAR_19, "D/A error");
  FUNC_7(VAR_19, VAR_21);
  VAR_20->async->events |= VAR_1;
  VAR_25 = 1;
 }
 FUNC_3(VAR_19, VAR_20);

 return FUNC_0(VAR_25);
}
