
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_2__ {void* bcn_len; void* bcn_addr; void* mode; void* vif_id; } ;
struct carl9170_cmd {TYPE_1__ bcn_ctrl; } ;
struct carl9170_bcn_ctrl_cmd {int dummy; } ;
struct ar9170 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ar9170*,struct carl9170_cmd*,int) ;
 struct carl9170_cmd* FUNC_1 (struct ar9170*,int ,int) ;
 void* FUNC_2 (unsigned int const) ;

int FUNC_3(struct ar9170 *VAR_2, const unsigned int VAR_3,
         const u32 VAR_4, const u32 VAR_5, const u32 VAR_6)
{
 struct carl9170_cmd *VAR_7;

 VAR_7 = FUNC_1(VAR_2, VAR_0,
          sizeof(struct carl9170_bcn_ctrl_cmd));
 if (!VAR_7)
  return -VAR_1;

 VAR_7->bcn_ctrl.vif_id = FUNC_2(VAR_3);
 VAR_7->bcn_ctrl.mode = FUNC_2(VAR_4);
 VAR_7->bcn_ctrl.bcn_addr = FUNC_2(VAR_5);
 VAR_7->bcn_ctrl.bcn_len = FUNC_2(VAR_6);

 return FUNC_0(VAR_2, VAR_7, 1);
}
