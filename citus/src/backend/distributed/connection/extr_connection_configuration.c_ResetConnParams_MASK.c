
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t size; int ** values; scalar_t__* keywords; } ;
typedef size_t Index ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (void*) ;

void
FUNC_3()
{
 Index VAR_2 = 0;
 for (VAR_2 = 0; VAR_2 < VAR_1.size; VAR_2++)
 {
  FUNC_2((void *) VAR_1.keywords[VAR_2]);
  FUNC_2((void *) VAR_1.values[VAR_2]);

  VAR_1.keywords[VAR_2] = VAR_1.values[VAR_2] = ((void*)0);
 }

 VAR_1.size = 0;

 FUNC_1();

 FUNC_0("fallback_application_name", VAR_0);
}
