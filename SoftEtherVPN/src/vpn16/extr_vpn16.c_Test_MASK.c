
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (char*,char*,int *,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*) ;

void FUNC_3()
{
 char *VAR_1 = "c:\\windows\\inf\\other\\Neo_TEST.inf";

 if (FUNC_0(VAR_1, 0) == VAR_0)
 {
  FUNC_2("DiInstallClass Ok.");
  if (FUNC_1("Net", "NeoAdapter_TEST", ((void*)0), ((void*)0)) == VAR_0)
  {
   FUNC_2("InstallNDIDevice Ok.\n");
  }
  else
  {
   FUNC_2("InstallNDIDevice Failed.\n");
  }
 }
 else
 {
  FUNC_2("DiInstallClass Failed. ");
 }
}
