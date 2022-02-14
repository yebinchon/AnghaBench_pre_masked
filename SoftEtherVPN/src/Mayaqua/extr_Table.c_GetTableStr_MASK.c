
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {char* str; } ;
typedef TYPE_1__ TABLE ;


 TYPE_1__* FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;

char *FUNC_6(char *VAR_0)
{
 TABLE *VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return "";
 }
 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 == ((void*)0))
 {

  return "";
 }

 return VAR_1->str;
}
