
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct comedi_subdevice* subdevices; } ;
struct TYPE_4__ {int (* stc_readw ) (struct comedi_device*,int ) ;int mite; } ;
struct TYPE_3__ {int events; } ;


 unsigned short VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (char*,unsigned short,int ) ;
 int VAR_21 ;
 TYPE_2__* VAR_22 ;
 int FUNC_1 (int ,struct comedi_device*) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_4 (unsigned short) ;
 int FUNC_5 (struct comedi_device*,int ,int,int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct comedi_device*,int ) ;
 int FUNC_8 (struct comedi_device*,int ) ;

__attribute__((used)) static void FUNC_9(struct comedi_device *VAR_23,
          unsigned short VAR_24, unsigned VAR_25)
{
 struct comedi_subdevice *VAR_26 = VAR_23->subdevices + VAR_21;
 if (VAR_24 == 0xffff)
  return;
 if (VAR_24 & VAR_4) {
  FUNC_6
      ("ni_mio_common: AO FIFO underrun status=0x%04x status2=0x%04x\n",
       VAR_24, VAR_22->stc_readw(VAR_23, VAR_5));
  VAR_26->async->events |= VAR_19;
 }

 if (VAR_24 & VAR_0) {
  FUNC_0
      ("ni_mio_common: AO BC_TC status=0x%04x status2=0x%04x\n",
       VAR_24, VAR_22->stc_readw(VAR_23, VAR_5));
  VAR_26->async->events |= VAR_17;
 }

 if (VAR_24 & VAR_3) {
  int VAR_27;

  VAR_27 = FUNC_2(VAR_23, VAR_26);
  if (!VAR_27) {
   FUNC_6("ni_mio_common: AO buffer underrun\n");
   FUNC_5(VAR_23, VAR_20,
        VAR_2 |
        VAR_1, 0);
   VAR_26->async->events |= VAR_19;
  }
 }


 FUNC_3(VAR_23, VAR_26);
}
