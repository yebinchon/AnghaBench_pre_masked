
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_subdevice {TYPE_3__* async; } ;
struct comedi_device {short minor; scalar_t__ iobase; struct comedi_subdevice* subdevices; } ;
struct TYPE_6__ {int events; size_t cur_chan; int buf_user_ptr; int buf_user_count; int buf_int_ptr; int buf_int_count; } ;
struct TYPE_5__ {short* act_chanlist; size_t ai_n_chan; scalar_t__ ai_act_scan; scalar_t__ ai_scans; int neverending_ai; } ;
struct TYPE_4__ {scalar_t__ cardtype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 TYPE_2__* VAR_8 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_6 (char*,short,int) ;
 TYPE_1__* VAR_9 ;

__attribute__((used)) static void FUNC_7(void *VAR_10)
{
 struct comedi_device *VAR_11 = VAR_10;
 struct comedi_subdevice *VAR_12 = VAR_11->subdevices + 0;
 int VAR_13;




 FUNC_0("adv_pci1710 EDBG: BGN: interrupt_pci1710_every_sample(...)\n");
 VAR_13 = FUNC_3(VAR_11->iobase + VAR_4);
 if (VAR_13 & VAR_5) {
  FUNC_6("comedi%d: A/D FIFO empty (%4x)\n", VAR_11->minor, VAR_13);
  FUNC_5(VAR_11, VAR_12);
  VAR_12->async->events |= VAR_0 | VAR_1;
  FUNC_2(VAR_11, VAR_12);
  return;
 }
 if (VAR_13 & VAR_6) {
  FUNC_6
      ("comedi%d: A/D FIFO Full status (Fatal Error!) (%4x)\n",
       VAR_11->minor, VAR_13);
  FUNC_5(VAR_11, VAR_12);
  VAR_12->async->events |= VAR_0 | VAR_1;
  FUNC_2(VAR_11, VAR_12);
  return;
 }

 FUNC_4(0, VAR_11->iobase + VAR_3);

 FUNC_0("FOR ");
 for (; !(FUNC_3(VAR_11->iobase + VAR_4) & VAR_5);) {
  FUNC_1(VAR_12->async,
          FUNC_3(VAR_11->iobase + VAR_2) & 0x0fff);

  ++VAR_12->async->cur_chan;

  if (VAR_12->async->cur_chan >= VAR_8->ai_n_chan) {
   VAR_12->async->cur_chan = 0;
  }

  if (VAR_12->async->cur_chan == 0) {
   VAR_8->ai_act_scan++;
   FUNC_0
       ("adv_pci1710 EDBG: EOS1 bic %d bip %d buc %d bup %d\n",
        VAR_12->async->buf_int_count, VAR_12->async->buf_int_ptr,
        VAR_12->async->buf_user_count, VAR_12->async->buf_user_ptr);
   FUNC_0("adv_pci1710 EDBG: EOS2\n");
   if ((!VAR_8->neverending_ai) && (VAR_8->ai_act_scan >= VAR_8->ai_scans)) {
    FUNC_5(VAR_11, VAR_12);
    VAR_12->async->events |= VAR_0;
    FUNC_2(VAR_11, VAR_12);
    return;
   }
  }
 }

 FUNC_4(0, VAR_11->iobase + VAR_3);
 FUNC_0("adv_pci1710 EDBG: END: interrupt_pci1710_every_sample(...)\n");

 FUNC_2(VAR_11, VAR_12);
}
