
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sysdir ;


 scalar_t__ FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (char*,char*,int *,int *) ;
 scalar_t__ FUNC_4 (char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*,char*,...) ;
 int FUNC_7 (char*) ;

void FUNC_8(char *VAR_3)
{
 char VAR_4[VAR_1];
 char VAR_5[VAR_1];
 char VAR_6[VAR_1];
 char VAR_7[VAR_1];
 char VAR_8[VAR_1];
 char VAR_9[VAR_1];
 char VAR_10[VAR_1];
 if (VAR_3 == ((void*)0))
 {
  return;
 }
 if (FUNC_7(VAR_3) == 0 || FUNC_7(VAR_3) >= 5)
 {
  return;
 }

 FUNC_2(VAR_4, sizeof(VAR_4));

 FUNC_1(VAR_5, VAR_4);

 FUNC_6(VAR_6, "%s\\inf", VAR_5);

 FUNC_6(VAR_7, "%s\\other", VAR_6);

 FUNC_6(VAR_8, "%s\\Neo_%s.inf", VAR_6, VAR_3);

 FUNC_6(VAR_10, "%s\\Neo_%s.sys", VAR_4, VAR_3);

 FUNC_6(VAR_9, "NeoAdapter_%s", VAR_3);

 if (FUNC_4(VAR_8) == VAR_0)
 {
  FUNC_5("Failed to open %s.", VAR_8);
  return;
 }
 if (FUNC_4(VAR_10) == VAR_0)
 {
  FUNC_5("Failed to open %s.", VAR_10);
  return;
 }

 if (FUNC_0(VAR_8, 0) != VAR_2)
 {
  FUNC_5("Failed to register %s.\n", VAR_8);
  return;
 }

 if (FUNC_3("Net", VAR_9, ((void*)0), ((void*)0)) != VAR_2)
 {
  return;
 }
}
