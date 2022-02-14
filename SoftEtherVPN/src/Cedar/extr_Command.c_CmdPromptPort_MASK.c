
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_4__ {int * (* ReadLine ) (TYPE_1__*,int *,int) ;} ;
typedef TYPE_1__ CONSOLE ;


 int * FUNC_0 (char*) ;
 int * FUNC_1 (TYPE_1__*,int *,int) ;

wchar_t *FUNC_2(CONSOLE *VAR_0, void *VAR_1)
{
 wchar_t *VAR_2;

 if (VAR_1 != ((void*)0))
 {
  VAR_2 = (wchar_t *)VAR_1;
 }
 else
 {
  VAR_2 = FUNC_0("CMD_PROMPT_PORT");
 }

 return VAR_0->ReadLine(VAR_0, VAR_2, 1);
}
