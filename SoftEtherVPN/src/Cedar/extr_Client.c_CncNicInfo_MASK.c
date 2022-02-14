
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* NicName; int AccountName; } ;
typedef TYPE_1__ UI_NICINFO ;
typedef int SOCK ;
typedef int PACK ;


 int * FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,char*,char*) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,int *) ;

SOCK *FUNC_6(UI_NICINFO *VAR_0)
{
 SOCK *VAR_1;
 PACK *VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_1 = FUNC_0(200);
 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_2();
 FUNC_3(VAR_2, "function", "nicinfo");
 FUNC_3(VAR_2, "NicName", VAR_0->NicName);
 FUNC_4(VAR_2, "AccountName", VAR_0->AccountName);

 FUNC_5(VAR_1, VAR_2);
 FUNC_1(VAR_2);

 return VAR_1;
}
