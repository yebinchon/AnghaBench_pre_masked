
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct cmd_ds_802_11_ps_mode {void* multipledtim; int nullpktinterval; int locallisteninterval; void* action; } ;
struct TYPE_2__ {struct cmd_ds_802_11_ps_mode psmode; } ;
struct cmd_ds_command {void* size; void* command; TYPE_1__ params; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct cmd_ds_command *VAR_4,
       u16 VAR_5)
{
 struct cmd_ds_802_11_ps_mode *VAR_6 = &VAR_4->params.psmode;

 FUNC_2(VAR_1);

 VAR_4->command = FUNC_0(VAR_0);
 VAR_4->size = FUNC_0(sizeof(struct cmd_ds_802_11_ps_mode) +
    VAR_3);
 VAR_6->action = FUNC_0(VAR_5);
 VAR_6->multipledtim = 0;
 switch (VAR_5) {
 case 130:
  FUNC_1("PS command:" "SubCode- Enter PS\n");

  VAR_6->locallisteninterval = 0;
  VAR_6->nullpktinterval = 0;
  VAR_6->multipledtim =
      FUNC_0(VAR_2);
  break;

 case 129:
  FUNC_1("PS command:" "SubCode- Exit PS\n");
  break;

 case 128:
  FUNC_1("PS command: SubCode- sleep confirm\n");
  break;

 default:
  break;
 }

 FUNC_3(VAR_1);
 return 0;
}
