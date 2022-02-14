
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_3__ {int len; } ;
struct mrvl_ie_domain_param_set {TYPE_1__ header; } ;
struct ieee_subbandset {int dummy; } ;
struct cmd_ds_802_11d_domain_info {int action; struct mrvl_ie_domain_param_set domain; } ;
struct TYPE_4__ {struct cmd_ds_802_11d_domain_info domaininforesp; } ;
struct cmd_ds_command {int size; TYPE_2__ params; } ;
typedef int s16 ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int*,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int) ;

int FUNC_5(struct cmd_ds_command *VAR_3)
{
 struct cmd_ds_802_11d_domain_info *VAR_4 = &VAR_3->params.domaininforesp;
 struct mrvl_ie_domain_param_set *VAR_5 = &VAR_4->domain;
 u16 VAR_6 = FUNC_4(VAR_4->action);
 s16 VAR_7 = 0;
 u8 VAR_8 = 0;

 FUNC_1(VAR_1);

 FUNC_2(VAR_1, "domain info resp", (u8 *) VAR_3,
  (int)FUNC_4(VAR_3->size));

 VAR_8 = (FUNC_4(VAR_5->header.len) - VAR_0) /
        sizeof(struct ieee_subbandset);

 FUNC_0("domain info resp: nr_subband %d\n", VAR_8);

 if (VAR_8 > VAR_2) {
  FUNC_0("Invalid Numrer of Subband returned!!\n");
  return -1;
 }

 switch (VAR_6) {
 case 128:
  break;

 case 129:
  break;
 default:
  FUNC_0("Invalid action:%d\n", VAR_4->action);
  VAR_7 = -1;
  break;
 }

 FUNC_3(VAR_1, "ret %d", VAR_7);
 return VAR_7;
}
