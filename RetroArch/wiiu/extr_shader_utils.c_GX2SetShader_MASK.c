
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ program; } ;
struct TYPE_4__ {TYPE_3__ gs; int fs; int ps; int vs; } ;
typedef TYPE_1__ GX2Shader ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(GX2Shader *VAR_0)
{
   FUNC_3(&VAR_0->vs);
   FUNC_2(&VAR_0->ps);
   FUNC_0(&VAR_0->fs);

   if (VAR_0->gs.program)
      FUNC_1(&VAR_0->gs);
}
