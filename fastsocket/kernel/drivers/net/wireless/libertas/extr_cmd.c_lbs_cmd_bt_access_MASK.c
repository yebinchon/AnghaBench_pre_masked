
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct cmd_ds_bt_access {void* id; int addr1; void* action; } ;
struct TYPE_2__ {struct cmd_ds_bt_access bt; } ;
struct cmd_ds_command {scalar_t__ result; void* size; void* command; TYPE_1__ params; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,void*,int) ;

__attribute__((used)) static int FUNC_6(struct cmd_ds_command *VAR_5,
          u16 VAR_6, void *VAR_7)
{
 struct cmd_ds_bt_access *VAR_8 = &VAR_5->params.bt;
 FUNC_2(VAR_2, "action %d", VAR_6);

 VAR_5->command = FUNC_0(VAR_0);
 VAR_5->size = FUNC_0(sizeof(struct cmd_ds_bt_access) + VAR_4);
 VAR_5->result = 0;
 VAR_8->action = FUNC_0(VAR_6);

 switch (VAR_6) {
 case 133:
  FUNC_5(VAR_8->addr1, VAR_7, 2 * VAR_1);
  FUNC_3(VAR_3, "BT_ADD: blinded MAC addr", VAR_8->addr1, 6);
  break;
 case 132:
  FUNC_5(VAR_8->addr1, VAR_7, 1 * VAR_1);
  FUNC_3(VAR_3, "BT_DEL: blinded MAC addr", VAR_8->addr1, 6);
  break;
 case 130:
  VAR_8->id = FUNC_1(*(u32 *) VAR_7);
  break;
 case 129:
  break;
 case 128:
  VAR_8->id = FUNC_1(*(u32 *) VAR_7);
  break;
 case 131:
  break;
 default:
  break;
 }
 FUNC_4(VAR_2);
 return 0;
}
