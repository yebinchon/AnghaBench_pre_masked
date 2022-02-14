
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int (*) (int ,int ),int ,char*,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;

int FUNC_7(void)
{
 int VAR_3;
 FUNC_3("smd_core_init()\n");

 VAR_3 = FUNC_4(VAR_0, FUNC_5,
   VAR_2, "smd_dev", 0);
 if (VAR_3 < 0)
  return VAR_3;
 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3 < 0)
  FUNC_2("smd_core_init: enable_irq_wake failed for A9_M2A_0\n");

 VAR_3 = FUNC_4(VAR_1, FUNC_6,
   VAR_2, "smsm_dev", 0);
 if (VAR_3 < 0) {
  FUNC_1(VAR_0, 0);
  return VAR_3;
 }
 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 < 0)
  FUNC_2("smd_core_init: enable_irq_wake failed for A9_M2A_5\n");





 FUNC_6(0, 0);

 FUNC_3("smd_core_init() done\n");

 return 0;
}
