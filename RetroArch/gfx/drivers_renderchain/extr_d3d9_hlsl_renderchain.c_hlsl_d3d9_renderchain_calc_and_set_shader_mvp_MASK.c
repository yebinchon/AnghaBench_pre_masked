
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct shader_pass {int vtable; } ;
struct d3d_matrix {int dummy; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_5__ {TYPE_1__ chain; } ;
typedef TYPE_2__ hlsl_renderchain_t ;


 double VAR_0 ;
 int FUNC_0 (int ,int ,char*,void const*) ;
 int FUNC_1 (struct d3d_matrix*) ;
 int FUNC_2 (struct d3d_matrix*,struct d3d_matrix*,struct d3d_matrix*) ;
 int FUNC_3 (struct d3d_matrix*,int ,unsigned int,int ,unsigned int,int ,int) ;
 int FUNC_4 (struct d3d_matrix*,unsigned int) ;
 int FUNC_5 (struct d3d_matrix*,struct d3d_matrix*) ;

__attribute__((used)) static void FUNC_6(
      hlsl_renderchain_t *VAR_1,
      struct shader_pass *VAR_2,
      unsigned VAR_3, unsigned VAR_4,
      unsigned VAR_5)
{
   struct d3d_matrix VAR_6, VAR_7, VAR_8, VAR_9;

   FUNC_3(&VAR_7, 0, VAR_3, 0, VAR_4, 0, 1);
   FUNC_1(&VAR_8);
   FUNC_4(&VAR_8, VAR_5 * (VAR_0 / 2.0));

   FUNC_2(&VAR_6, &VAR_7, &VAR_8);
   FUNC_5(&VAR_9, &VAR_6);

   FUNC_0(VAR_2->vtable,
         VAR_1->chain.dev, "modelViewProj", (const void*)&VAR_9);
}
