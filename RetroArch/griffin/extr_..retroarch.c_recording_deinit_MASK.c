
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* free ) (int *) ;int (* finalize ) (int *) ;} ;


 int * VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;

__attribute__((used)) static bool FUNC_3(void)
{
   if (!VAR_0 || !VAR_1)
      return 0;

   if (VAR_1->finalize)
      VAR_1->finalize(VAR_0);

   if (VAR_1->free)
      VAR_1->free(VAR_0);

   VAR_0 = ((void*)0);
   VAR_1 = ((void*)0);

   FUNC_2();

   return 1;
}
