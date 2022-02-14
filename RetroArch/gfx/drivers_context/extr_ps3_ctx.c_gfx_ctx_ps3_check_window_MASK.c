
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ should_resize; } ;
typedef TYPE_1__ gl_t ;



__attribute__((used)) static void FUNC_0(void *VAR_0, bool *VAR_1,
      bool *VAR_2, unsigned *VAR_3, unsigned *VAR_4,
      bool VAR_5)
{
   gl_t *VAR_6 = VAR_0;

   *VAR_1 = 0;
   *VAR_2 = 0;

   if (VAR_6->should_resize)
      *VAR_2 = 1;
}
