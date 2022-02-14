
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_trans {TYPE_2__* cfg; } ;
struct TYPE_4__ {TYPE_1__* base_params; } ;
struct TYPE_3__ {scalar_t__ shadow_ram_support; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct iwl_trans*,char*) ;
 int FUNC_1 (struct iwl_trans*,int ,int ) ;
 int FUNC_2 (struct iwl_trans*,int ,int ,int ,int) ;
 int FUNC_3 (struct iwl_trans*,int ) ;
 int FUNC_4 (struct iwl_trans*,int ,int ) ;
 int FUNC_5 (struct iwl_trans*,int ,int ) ;
 int FUNC_6 (struct iwl_trans*,int ,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct iwl_trans *VAR_7)
{
 int VAR_8;


 FUNC_6(VAR_7, VAR_3,
      FUNC_3(VAR_7, VAR_3) |
      VAR_4);


 VAR_8 = FUNC_2(VAR_7, VAR_3,
      VAR_5,
      VAR_5,
      25000);
 if (VAR_8 < 0) {
  FUNC_0(VAR_7, "Time out access OTP\n");
 } else {
  FUNC_5(VAR_7, VAR_0,
      VAR_1);
  FUNC_7(5);
  FUNC_1(VAR_7, VAR_0,
        VAR_1);





  if (VAR_7->cfg->base_params->shadow_ram_support)
   FUNC_4(VAR_7, VAR_2,
        VAR_6);
 }
 return VAR_8;
}
