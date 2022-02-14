
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int quit; int mutex; } ;
typedef TYPE_1__ VIDTEX_T ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(VIDTEX_T *VAR_0, bool VAR_1)
{
   FUNC_0(&VAR_0->mutex);
   bool VAR_2 = VAR_0->quit;
   VAR_0->quit = VAR_1;
   FUNC_1(&VAR_0->mutex);

   return VAR_2;
}
