
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* quit; int* resize; unsigned int* width; unsigned int* height; } ;
typedef TYPE_1__ gfx_ctx_size_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (unsigned int*,unsigned int*) ;
 int FUNC_2 (unsigned int*,unsigned int*) ;

__attribute__((used)) static bool FUNC_3(void *VAR_0)
{
   gfx_ctx_size_t VAR_1;
   unsigned VAR_2 = 0;
   unsigned VAR_3 = 0;
   bool VAR_4 = 0;
   bool VAR_5 = 0;


   FUNC_1(&VAR_2, &VAR_3);

   VAR_1.quit = &VAR_4;
   VAR_1.resize = &VAR_5;
   VAR_1.width = &VAR_2;
   VAR_1.height = &VAR_3;

   FUNC_0(&VAR_1);

   if (VAR_2 != 0 && VAR_3 != 0)
      FUNC_2(&VAR_2, &VAR_3);

   return 1;
}
