
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct lbs_private {scalar_t__ beacon_period; scalar_t__ beacon_enable; } ;
struct cmd_ds_802_11_beacon_control {void* beacon_period; void* beacon_enable; void* action; } ;
struct TYPE_2__ {struct cmd_ds_802_11_beacon_control bcn_ctrl; } ;
struct cmd_ds_command {void* command; void* size; TYPE_1__ params; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct lbs_private * VAR_3,
    struct cmd_ds_command *VAR_4,
    u16 VAR_5)
{
 struct cmd_ds_802_11_beacon_control
  *VAR_6 = &VAR_4->params.bcn_ctrl;

 FUNC_1(VAR_1);
 VAR_4->size =
     FUNC_0(sizeof(struct cmd_ds_802_11_beacon_control)
        + VAR_2);
 VAR_4->command = FUNC_0(VAR_0);

 VAR_6->action = FUNC_0(VAR_5);
 VAR_6->beacon_enable = FUNC_0(VAR_3->beacon_enable);
 VAR_6->beacon_period = FUNC_0(VAR_3->beacon_period);

 FUNC_2(VAR_1);
 return 0;
}
