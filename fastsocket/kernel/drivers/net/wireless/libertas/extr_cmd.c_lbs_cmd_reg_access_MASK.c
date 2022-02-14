
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef void* u16 ;
struct lbs_offset_value {int value; int offset; } ;
struct cmd_ds_rf_reg_access {void* value; void* offset; void* action; } ;
struct cmd_ds_mac_reg_access {int value; void* offset; void* action; } ;
struct TYPE_2__ {int rfreg; int bbpreg; int macreg; } ;
struct cmd_ds_command {TYPE_1__ params; void* size; int command; } ;
struct cmd_ds_bbp_reg_access {void* value; void* offset; void* action; } ;





 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct cmd_ds_command *VAR_2,
          u8 VAR_3, void *VAR_4)
{
 struct lbs_offset_value *VAR_5;

 FUNC_2(VAR_0);

 VAR_5 = (struct lbs_offset_value *)VAR_4;

 switch (FUNC_4(VAR_2->command)) {
 case 129:
  {
   struct cmd_ds_mac_reg_access *VAR_6;

   VAR_2->size =
       FUNC_0(sizeof (struct cmd_ds_mac_reg_access)
     + VAR_1);
   VAR_6 =
       (struct cmd_ds_mac_reg_access *)&VAR_2->params.
       macreg;

   VAR_6->action = FUNC_0(VAR_3);
   VAR_6->offset = FUNC_0((u16) VAR_5->offset);
   VAR_6->value = FUNC_1(VAR_5->value);

   break;
  }

 case 130:
  {
   struct cmd_ds_bbp_reg_access *VAR_7;

   VAR_2->size =
       FUNC_0(sizeof
          (struct cmd_ds_bbp_reg_access)
          + VAR_1);
   VAR_7 =
       (struct cmd_ds_bbp_reg_access *)&VAR_2->params.
       bbpreg;

   VAR_7->action = FUNC_0(VAR_3);
   VAR_7->offset = FUNC_0((u16) VAR_5->offset);
   VAR_7->value = (u8) VAR_5->value;

   break;
  }

 case 128:
  {
   struct cmd_ds_rf_reg_access *VAR_8;

   VAR_2->size =
       FUNC_0(sizeof
          (struct cmd_ds_rf_reg_access) +
          VAR_1);
   VAR_8 =
       (struct cmd_ds_rf_reg_access *)&VAR_2->params.
       rfreg;

   VAR_8->action = FUNC_0(VAR_3);
   VAR_8->offset = FUNC_0((u16) VAR_5->offset);
   VAR_8->value = (u8) VAR_5->value;

   break;
  }

 default:
  break;
 }

 FUNC_3(VAR_0);
 return 0;
}
