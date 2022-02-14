
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; int minor; struct comedi_subdevice* subdevices; } ;
struct TYPE_6__ {int ai_data_len; scalar_t__ ai_act_scan; scalar_t__ ai_scans; int neverending_ai; } ;
struct TYPE_5__ {int fifo_half_size; } ;
struct TYPE_4__ {int events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 TYPE_3__* VAR_6 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct comedi_device*,struct comedi_subdevice*,int,int) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_6 (char*,int ,int) ;
 TYPE_2__* VAR_7 ;

__attribute__((used)) static void FUNC_7(void *VAR_8)
{
 struct comedi_device *VAR_9 = VAR_8;
 struct comedi_subdevice *VAR_10 = VAR_9->subdevices + 0;
 int VAR_11, VAR_12;

 FUNC_0("adv_pci1710 EDBG: BGN: interrupt_pci1710_half_fifo(...)\n");
 VAR_11 = FUNC_2(VAR_9->iobase + VAR_3);
 if (!(VAR_11 & VAR_5)) {
  FUNC_6("comedi%d: A/D FIFO not half full! (%4x)\n",
         VAR_9->minor, VAR_11);
  FUNC_5(VAR_9, VAR_10);
  VAR_10->async->events |= VAR_0 | VAR_1;
  FUNC_1(VAR_9, VAR_10);
  return;
 }
 if (VAR_11 & VAR_4) {
  FUNC_6
      ("comedi%d: A/D FIFO Full status (Fatal Error!) (%4x)\n",
       VAR_9->minor, VAR_11);
  FUNC_5(VAR_9, VAR_10);
  VAR_10->async->events |= VAR_0 | VAR_1;
  FUNC_1(VAR_9, VAR_10);
  return;
 }

 VAR_12 = VAR_7->fifo_half_size;
 if (VAR_12 * sizeof(short) >= VAR_6->ai_data_len) {
  VAR_11 = VAR_6->ai_data_len / sizeof(short);
  if (FUNC_3(VAR_9, VAR_10, VAR_11, 0))
   return;
  VAR_12 -= VAR_11;
 }

 if (VAR_12) {
  if (FUNC_3(VAR_9, VAR_10, VAR_12, 1))
   return;
 }

 if (!VAR_6->neverending_ai)
  if (VAR_6->ai_act_scan >= VAR_6->ai_scans) {
   FUNC_5(VAR_9, VAR_10);
   VAR_10->async->events |= VAR_0;
   FUNC_1(VAR_9, VAR_10);
   return;
  }
 FUNC_4(0, VAR_9->iobase + VAR_2);
 FUNC_0("adv_pci1710 EDBG: END: interrupt_pci1710_half_fifo(...)\n");

 FUNC_1(VAR_9, VAR_10);
}
