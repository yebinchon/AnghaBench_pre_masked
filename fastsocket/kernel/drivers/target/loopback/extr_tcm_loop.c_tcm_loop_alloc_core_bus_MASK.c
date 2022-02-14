
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_9(void)
{
 int VAR_3;

 VAR_2 = FUNC_7("tcm_loop_0");
 if (FUNC_0(VAR_2)) {
  FUNC_6("Unable to allocate tcm_loop_primary\n");
  return FUNC_1(VAR_2);
 }

 VAR_3 = FUNC_2(&VAR_1);
 if (VAR_3) {
  FUNC_6("bus_register() failed for tcm_loop_lld_bus\n");
  goto dev_unreg;
 }

 VAR_3 = FUNC_4(&VAR_0);
 if (VAR_3) {
  FUNC_6("driver_register() failed for"
    "tcm_loop_driverfs\n");
  goto bus_unreg;
 }

 FUNC_5("Initialized TCM Loop Core Bus\n");
 return VAR_3;

bus_unreg:
 FUNC_3(&VAR_1);
dev_unreg:
 FUNC_8(VAR_2);
 return VAR_3;
}
