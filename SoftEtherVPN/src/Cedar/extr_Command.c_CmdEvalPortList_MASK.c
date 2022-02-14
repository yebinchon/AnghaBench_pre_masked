
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_4__ {int (* Write ) (TYPE_1__*,int ) ;} ;
typedef int LIST ;
typedef TYPE_1__ CONSOLE ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*,int ) ;

bool FUNC_6(CONSOLE *VAR_0, wchar_t *VAR_1, void *VAR_2)
{
 char *VAR_3;
 bool VAR_4 = 0;
 LIST *VAR_5;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 VAR_3 = FUNC_0(VAR_1);

 VAR_5 = FUNC_3(VAR_3);

 if (VAR_5 != ((void*)0))
 {
  VAR_4 = 1;
 }

 FUNC_2(VAR_5);

 FUNC_1(VAR_3);

 if (VAR_4 == 0)
 {
  VAR_0->Write(VAR_0, FUNC_4("CMD_PORTLIST_EVAL_FAILED"));
 }

 return VAR_4;
}
