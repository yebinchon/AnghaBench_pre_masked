
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_subdevice {TYPE_3__* async; } ;
struct comedi_device {scalar_t__ iobase; int minor; } ;
struct TYPE_6__ {int cur_chan; int events; } ;
struct TYPE_5__ {int* act_chanlist; int ai_n_chan; int ai_act_scan; } ;
struct TYPE_4__ {scalar_t__ cardtype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 TYPE_2__* VAR_4 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_5 (char*,int ,int,int,int,int,int ,int,int,int) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_6,
    struct comedi_subdevice *VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10, VAR_11;



 FUNC_0("adv_pci1710 EDBG: BGN: move_block_from_fifo(...,%d,%d)\n", VAR_8,
  VAR_9);
 VAR_11 = VAR_7->async->cur_chan;
 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
  FUNC_1(VAR_7->async,
          FUNC_3(VAR_6->iobase + VAR_2) & 0x0fff);

  VAR_11++;
  if (VAR_11 >= VAR_4->ai_n_chan) {
   VAR_11 = 0;
   VAR_4->ai_act_scan++;
  }
 }
 FUNC_0("adv_pci1710 EDBG: END: move_block_from_fifo(...)\n");
 return 0;
}
