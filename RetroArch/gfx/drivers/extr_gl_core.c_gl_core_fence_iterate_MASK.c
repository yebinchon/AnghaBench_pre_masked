
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int fence_count; int * fences; } ;
typedef TYPE_1__ gl_core_t ;
typedef int GLsync ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int,int) ;
 int FUNC_8 (int *,int *,int) ;

__attribute__((used)) static void FUNC_9(gl_core_t *VAR_6, unsigned VAR_7)
{
   if (VAR_6->fence_count < VAR_1)
   {




      FUNC_5(VAR_2);
      FUNC_7(0, 0, 1, 1);
      FUNC_2(VAR_5, VAR_5, VAR_5, VAR_5);
      FUNC_0(VAR_0);
      FUNC_4(VAR_2);

      VAR_6->fences[VAR_6->fence_count++] = FUNC_6(VAR_4, 0);
   }

   while (VAR_6->fence_count > VAR_7)
   {
      FUNC_1(VAR_6->fences[0], VAR_3, 1000000000);
      FUNC_3(VAR_6->fences[0]);
      VAR_6->fence_count--;
      FUNC_8(VAR_6->fences, VAR_6->fences + 1, VAR_6->fence_count * sizeof(GLsync));
   }
}
