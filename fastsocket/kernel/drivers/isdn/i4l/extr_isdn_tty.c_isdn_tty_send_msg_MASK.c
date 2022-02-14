
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef int ulong ;
struct TYPE_16__ {int drv_index; int last_dir; int last_l2; int isdn_driver; scalar_t__ isdn_channel; int line; } ;
typedef TYPE_4__ modem_info ;
struct TYPE_13__ {scalar_t__ Controller; } ;
struct TYPE_14__ {int Length; int* para; TYPE_1__ adr; int Subcommand; int Command; } ;
struct TYPE_15__ {TYPE_2__ cmsg; int num; } ;
struct TYPE_17__ {int command; TYPE_3__ parm; scalar_t__ arg; int driver; } ;
typedef TYPE_5__ isdn_ctrl ;
struct TYPE_18__ {int* mdmreg; int msn; } ;
typedef TYPE_6__ atemu ;
struct TYPE_12__ {int lock; int * usage; int * m_idx; scalar_t__* chanmap; int * drvmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int* VAR_19 ;
 TYPE_11__* VAR_20 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int,int,int,int,int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,TYPE_4__*) ;
 int* VAR_21 ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int*,char*,int) ;

__attribute__((used)) static void
FUNC_11(modem_info * VAR_22, atemu * VAR_23, char *VAR_24)
{
 int VAR_25 = VAR_10;
 int VAR_26 = 7;
 int VAR_27 = VAR_23->mdmreg[VAR_13];
 isdn_ctrl VAR_28;
 ulong VAR_29;
 int VAR_30;
 int VAR_31;
 int VAR_32;

 VAR_32 = FUNC_9(VAR_24);
 if (!VAR_32) {
  FUNC_5(VAR_17, VAR_22);
  return;
 }
 for (VAR_31 = 7; VAR_31 >= 0; VAR_31--)
  if (VAR_23->mdmreg[VAR_15] & (1 << VAR_31)) {
   VAR_26 = VAR_19[VAR_31];
   break;
  }
 VAR_25 = FUNC_0(VAR_26, VAR_27);
 VAR_23->mdmreg[VAR_16] = VAR_21[VAR_26];
 FUNC_6(&VAR_20->lock, VAR_29);
 VAR_30 = FUNC_2(VAR_25, VAR_27, VAR_23->mdmreg[VAR_14], -1, -1, VAR_23->msn);
 if (VAR_30 < 0) {
  FUNC_7(&VAR_20->lock, VAR_29);
  FUNC_5(VAR_18, VAR_22);
 } else {
  VAR_22->isdn_driver = VAR_20->drvmap[VAR_30];
  VAR_22->isdn_channel = VAR_20->chanmap[VAR_30];
  VAR_22->drv_index = VAR_30;
  VAR_20->m_idx[VAR_30] = VAR_22->line;
  VAR_20->usage[VAR_30] |= VAR_11;
  VAR_22->last_dir = 1;
  FUNC_3();
  FUNC_7(&VAR_20->lock, VAR_29);
  VAR_28.driver = VAR_22->isdn_driver;
  VAR_28.arg = VAR_22->isdn_channel;
  VAR_28.command = VAR_3;
  FUNC_1(&VAR_28);
  FUNC_8(VAR_28.parm.num, FUNC_4(VAR_23->msn, VAR_22->isdn_driver));
  VAR_28.driver = VAR_22->isdn_driver;
  VAR_28.command = VAR_4;
  FUNC_1(&VAR_28);
  VAR_28.driver = VAR_22->isdn_driver;
  VAR_28.command = VAR_5;
  VAR_22->last_l2 = VAR_27;
  VAR_28.arg = VAR_22->isdn_channel + (VAR_27 << 8);
  FUNC_1(&VAR_28);
  VAR_28.driver = VAR_22->isdn_driver;
  VAR_28.command = VAR_6;
  VAR_28.arg = VAR_22->isdn_channel + (VAR_23->mdmreg[VAR_14] << 8);
  FUNC_1(&VAR_28);
  VAR_28.driver = VAR_22->isdn_driver;
  VAR_28.arg = VAR_22->isdn_channel;
  VAR_28.parm.cmsg.Length = VAR_32+14;
  VAR_28.parm.cmsg.Command = VAR_0;
  VAR_28.parm.cmsg.Subcommand = VAR_2;
  VAR_28.parm.cmsg.adr.Controller = VAR_22->isdn_driver + 1;
  VAR_28.parm.cmsg.para[0] = VAR_32+1;
  FUNC_10(&VAR_28.parm.cmsg.para[1], VAR_24, VAR_32);
  VAR_28.parm.cmsg.para[VAR_32+1] = 0xd;
  VAR_28.command =VAR_1;




  FUNC_1(&VAR_28);
 }
}
