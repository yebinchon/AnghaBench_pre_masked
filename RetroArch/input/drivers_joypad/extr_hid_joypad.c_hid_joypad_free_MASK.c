
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* free ) (void*) ;} ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(void)
{
   if (!VAR_0)
       return;

   if (VAR_0->free)
      VAR_0->free((void*)FUNC_0());

   VAR_0 = ((void*)0);
}
