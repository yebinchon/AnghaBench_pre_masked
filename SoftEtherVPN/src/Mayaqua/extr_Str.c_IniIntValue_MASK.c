
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int Value; } ;
typedef int LIST ;
typedef TYPE_1__ INI_ENTRY ;


 TYPE_1__* FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;

UINT FUNC_2(LIST *VAR_0, char *VAR_1)
{
 INI_ENTRY *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0))
 {
  return 0;
 }

 return FUNC_1(VAR_2->Value);
}
