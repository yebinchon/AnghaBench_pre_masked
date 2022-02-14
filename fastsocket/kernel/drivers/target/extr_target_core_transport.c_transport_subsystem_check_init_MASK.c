
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;

void FUNC_2(void)
{
 int VAR_0;
 static int VAR_1;

 if (VAR_1)
  return;

 VAR_0 = FUNC_1("target_core_iblock");
 if (VAR_0 != 0)
  FUNC_0("Unable to load target_core_iblock\n");

 VAR_0 = FUNC_1("target_core_file");
 if (VAR_0 != 0)
  FUNC_0("Unable to load target_core_file\n");

 VAR_0 = FUNC_1("target_core_pscsi");
 if (VAR_0 != 0)
  FUNC_0("Unable to load target_core_pscsi\n");

 VAR_1 = 1;
}
