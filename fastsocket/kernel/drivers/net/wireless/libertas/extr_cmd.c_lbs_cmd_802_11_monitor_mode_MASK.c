
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct cmd_ds_802_11_monitor_mode {void* mode; void* action; } ;
struct TYPE_2__ {struct cmd_ds_802_11_monitor_mode monitor; } ;
struct cmd_ds_command {void* size; void* command; TYPE_1__ params; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct cmd_ds_command *VAR_3,
          u16 VAR_4, void *VAR_5)
{
 struct cmd_ds_802_11_monitor_mode *VAR_6 = &VAR_3->params.monitor;

 VAR_3->command = FUNC_0(VAR_0);
 VAR_3->size =
     FUNC_0(sizeof(struct cmd_ds_802_11_monitor_mode) +
        VAR_2);

 VAR_6->action = FUNC_0(VAR_4);
 if (VAR_4 == VAR_1) {
  VAR_6->mode =
      FUNC_0((u16) (*(u32 *) VAR_5));
 }

 return 0;
}
