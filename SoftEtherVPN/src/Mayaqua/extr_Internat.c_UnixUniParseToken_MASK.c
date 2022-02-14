
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_4__ {void* Token; } ;
typedef TYPE_1__ UNI_TOKEN_LIST ;
typedef int TOKEN_LIST ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 TYPE_1__* FUNC_4 (int *) ;
 void* FUNC_5 (int) ;

UNI_TOKEN_LIST *FUNC_6(wchar_t *VAR_0, wchar_t *VAR_1)
{
 UNI_TOKEN_LIST *VAR_2;
 TOKEN_LIST *VAR_3;
 char *VAR_4;
 char *VAR_5;


 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  VAR_2 = FUNC_5(sizeof(UNI_TOKEN_LIST));
  VAR_2->Token = FUNC_5(0);
  return VAR_2;
 }

 VAR_4 = FUNC_0(VAR_0);
 VAR_5 = FUNC_0(VAR_1);

 VAR_3 = FUNC_3(VAR_4, VAR_5);

 VAR_2 = FUNC_4(VAR_3);
 FUNC_2(VAR_3);

 FUNC_1(VAR_4);
 FUNC_1(VAR_5);

 return VAR_2;
}
