
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_6__ {scalar_t__ neverending_ai; scalar_t__ ai_buf_ptr; scalar_t__ ai_act_scan; scalar_t__ ai_do; int CntrlReg; } ;
struct TYPE_5__ {int cardtype; } ;
struct TYPE_4__ {scalar_t__ cur_chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct comedi_device*,int,int ,int ) ;
 TYPE_2__* VAR_6 ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_7,
        struct comedi_subdevice *VAR_8)
{
 FUNC_0("adv_pci1710 EDBG: BGN: pci171x_ai_cancel(...)\n");

 switch (VAR_6->cardtype) {
 default:
  VAR_5->CntrlReg &= VAR_0;
  VAR_5->CntrlReg |= VAR_1;

  FUNC_2(VAR_5->CntrlReg, VAR_7->iobase + VAR_4);
  FUNC_3(VAR_7, -1, 0, 0);
  FUNC_1(0, VAR_7->iobase + VAR_2);
  FUNC_1(0, VAR_7->iobase + VAR_3);
  break;
 }

 VAR_5->ai_do = 0;
 VAR_5->ai_act_scan = 0;
 VAR_8->async->cur_chan = 0;
 VAR_5->ai_buf_ptr = 0;
 VAR_5->neverending_ai = 0;

 FUNC_0("adv_pci1710 EDBG: END: pci171x_ai_cancel(...)\n");
 return 0;
}
