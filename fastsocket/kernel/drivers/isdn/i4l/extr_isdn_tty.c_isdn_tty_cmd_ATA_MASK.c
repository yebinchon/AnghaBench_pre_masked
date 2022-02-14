
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int* mdmreg; scalar_t__ carrierwait; } ;
struct TYPE_12__ {int msr; size_t drv_index; int last_l2; int dialing; TYPE_5__ emu; scalar_t__ isdn_channel; int isdn_driver; TYPE_2__* fax; int last_num; scalar_t__ last_dir; } ;
typedef TYPE_3__ modem_info ;
struct TYPE_10__ {TYPE_2__* fax; } ;
struct TYPE_13__ {int command; scalar_t__ arg; int driver; TYPE_1__ parm; } ;
typedef TYPE_4__ isdn_ctrl ;
typedef TYPE_5__ atemu ;
struct TYPE_15__ {int * num; } ;
struct TYPE_11__ {int direction; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_9__* VAR_16 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(modem_info * VAR_17)
{
 atemu *VAR_18 = &VAR_17->emu;
 isdn_ctrl VAR_19;
 int VAR_20;

 if (VAR_17->msr & VAR_15) {

  VAR_17->last_dir = 0;
  FUNC_3(VAR_17->last_num, VAR_16->num[VAR_17->drv_index]);
  VAR_18->mdmreg[VAR_11] = 0;
  VAR_17->msr &= ~VAR_15;
  VAR_20 = VAR_18->mdmreg[VAR_9];
  VAR_19.driver = VAR_17->isdn_driver;
  VAR_19.command = VAR_1;
  VAR_19.arg = VAR_17->isdn_channel + (VAR_20 << 8);
  VAR_17->last_l2 = VAR_20;
  FUNC_0(&VAR_19);
  VAR_19.driver = VAR_17->isdn_driver;
  VAR_19.command = VAR_2;
  VAR_19.arg = VAR_17->isdn_channel + (VAR_18->mdmreg[VAR_10] << 8);






  FUNC_0(&VAR_19);
  VAR_19.driver = VAR_17->isdn_driver;
  VAR_19.arg = VAR_17->isdn_channel;
  VAR_19.command = VAR_0;
  VAR_17->dialing = 16;
  VAR_17->emu.carrierwait = 0;
  FUNC_0(&VAR_19);
  FUNC_1(VAR_7, 1);
 } else
  FUNC_2(VAR_14, VAR_17);
}
