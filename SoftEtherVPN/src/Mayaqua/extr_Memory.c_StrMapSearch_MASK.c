
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* Name; void* Value; } ;
typedef TYPE_1__ STRMAP_ENTRY ;
typedef int LIST ;


 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;

void *FUNC_1(LIST *VAR_0, char *VAR_1)
{
 STRMAP_ENTRY VAR_2, *VAR_3;
 VAR_2.Name = VAR_1;
 VAR_3 = (STRMAP_ENTRY*)FUNC_0(VAR_0, &VAR_2);
 if(VAR_3 != ((void*)0))
 {
  return VAR_3->Value;
 }
 return ((void*)0);
}
