
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char wchar_t ;
struct TYPE_3__ {char* unistr; } ;
typedef TYPE_1__ TABLE ;


 TYPE_1__* FUNC_0 (char*) ;

wchar_t *FUNC_1(char *VAR_0)
{
 TABLE *VAR_1;

 if (VAR_0 == ((void*)0))
 {

  return L"";
 }


 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 == ((void*)0))
 {

  return L"";
 }

 return VAR_1->unistr;
}
