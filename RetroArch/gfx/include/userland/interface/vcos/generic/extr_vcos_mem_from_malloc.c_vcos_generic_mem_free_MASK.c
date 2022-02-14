
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ guardword; int ptr; } ;
typedef TYPE_1__ MALLOC_HEADER_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

void FUNC_2(void *VAR_1)
{
   MALLOC_HEADER_T *VAR_2;
   if (! VAR_1) return;

   VAR_2 = ((MALLOC_HEADER_T *)VAR_1)-1;
   FUNC_1(VAR_2->guardword == VAR_0);
   FUNC_0(VAR_2->ptr);
}
