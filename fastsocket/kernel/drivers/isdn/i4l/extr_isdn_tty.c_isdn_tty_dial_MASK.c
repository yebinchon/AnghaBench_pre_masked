
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef int u_long ;
struct TYPE_17__ {scalar_t__ carrierwait; } ;
struct TYPE_18__ {int drv_index; int last_dir; int last_l2; int dialing; TYPE_4__ emu; int isdn_driver; scalar_t__ isdn_channel; TYPE_1__* fax; int last_num; int line; } ;
typedef TYPE_5__ modem_info ;
struct TYPE_15__ {int si1; int si2; int eazmsn; int phone; } ;
struct TYPE_16__ {TYPE_2__ setup; TYPE_1__* fax; int num; } ;
struct TYPE_19__ {int command; TYPE_3__ parm; scalar_t__ arg; int driver; } ;
typedef TYPE_6__ isdn_ctrl ;
struct TYPE_20__ {int* mdmreg; int msn; } ;
typedef TYPE_7__ atemu ;
struct TYPE_14__ {int direction; } ;
struct TYPE_13__ {int * num; int lock; int * usage; int * m_idx; scalar_t__* chanmap; int * drvmap; } ;


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
 size_t VAR_17 ;
 int VAR_18 ;
 int* VAR_19 ;
 TYPE_12__* VAR_20 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int,int,int,int,int,int ) ;
 int FUNC_3 () ;
 char* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,TYPE_5__*) ;
 int* VAR_21 ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int ,char*,char*) ;
 int FUNC_10 (int ,char*) ;

__attribute__((used)) static void
FUNC_11(char *VAR_22, modem_info * VAR_23, atemu * VAR_24)
{
 int VAR_25 = VAR_10;
 int VAR_26 = 7;
 int VAR_27 = VAR_24->mdmreg[VAR_13];
 u_long VAR_28;
 isdn_ctrl VAR_29;
 int VAR_30;
 int VAR_31;

 for (VAR_31 = 7; VAR_31 >= 0; VAR_31--)
  if (VAR_24->mdmreg[VAR_15] & (1 << VAR_31)) {
   VAR_26 = VAR_19[VAR_31];
   break;
  }
 VAR_25 = FUNC_0(VAR_26, VAR_27);
 VAR_24->mdmreg[VAR_16] = VAR_21[VAR_26];
 FUNC_7(&VAR_20->lock, VAR_28);
 VAR_30 = FUNC_2(VAR_25, VAR_27, VAR_24->mdmreg[VAR_14], -1, -1, VAR_24->msn);
 if (VAR_30 < 0) {
  FUNC_8(&VAR_20->lock, VAR_28);
  FUNC_6(VAR_18, VAR_23);
 } else {
  VAR_23->isdn_driver = VAR_20->drvmap[VAR_30];
  VAR_23->isdn_channel = VAR_20->chanmap[VAR_30];
  VAR_23->drv_index = VAR_30;
  VAR_20->m_idx[VAR_30] = VAR_23->line;
  VAR_20->usage[VAR_30] |= VAR_11;
  VAR_23->last_dir = 1;
  FUNC_10(VAR_23->last_num, VAR_22);
  FUNC_3();
  FUNC_8(&VAR_20->lock, VAR_28);
  VAR_29.driver = VAR_23->isdn_driver;
  VAR_29.arg = VAR_23->isdn_channel;
  VAR_29.command = VAR_0;
  FUNC_1(&VAR_29);
  FUNC_10(VAR_29.parm.num, FUNC_4(VAR_24->msn, VAR_23->isdn_driver));
  VAR_29.driver = VAR_23->isdn_driver;
  VAR_29.command = VAR_2;
  FUNC_1(&VAR_29);
  VAR_29.driver = VAR_23->isdn_driver;
  VAR_29.command = VAR_3;
  VAR_23->last_l2 = VAR_27;
  VAR_29.arg = VAR_23->isdn_channel + (VAR_27 << 8);
  FUNC_1(&VAR_29);
  VAR_29.driver = VAR_23->isdn_driver;
  VAR_29.command = VAR_4;
  VAR_29.arg = VAR_23->isdn_channel + (VAR_24->mdmreg[VAR_14] << 8);






  FUNC_1(&VAR_29);
  VAR_29.driver = VAR_23->isdn_driver;
  VAR_29.arg = VAR_23->isdn_channel;
  FUNC_9(VAR_29.parm.setup.phone, "%s", VAR_22);
  FUNC_9(VAR_29.parm.setup.eazmsn, "%s",
   FUNC_4(VAR_24->msn, VAR_23->isdn_driver));
  VAR_29.parm.setup.si1 = VAR_26;
  VAR_29.parm.setup.si2 = VAR_24->mdmreg[VAR_17];
  VAR_29.command = VAR_1;
  VAR_23->dialing = 1;
  VAR_23->emu.carrierwait = 0;
  FUNC_10(VAR_20->num[VAR_30], VAR_22);
  FUNC_3();
  FUNC_1(&VAR_29);
  FUNC_5(VAR_8, 1);
 }
}
