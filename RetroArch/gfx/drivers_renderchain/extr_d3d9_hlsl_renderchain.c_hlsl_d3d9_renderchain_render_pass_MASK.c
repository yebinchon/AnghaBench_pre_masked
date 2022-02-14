
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* pass; } ;
struct shader_pass {int vprg; int fprg; int vertex_buf; int vertex_decl; TYPE_2__ info; int tex; } ;
struct D3D9Vertex {int dummy; } ;
struct TYPE_17__ {int dev; } ;
struct TYPE_16__ {TYPE_7__ chain; TYPE_4__* luts; int dev; } ;
typedef TYPE_5__ hlsl_renderchain_t ;
struct TYPE_15__ {unsigned int count; TYPE_3__* data; } ;
struct TYPE_14__ {int id; } ;
struct TYPE_12__ {int filter; } ;
typedef scalar_t__ CGparameter ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (struct shader_pass*,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_5__*,int ,struct shader_pass*) ;
 int FUNC_5 (TYPE_5__*,int ,struct shader_pass*,unsigned int) ;
 int FUNC_6 (TYPE_5__*,int ,struct shader_pass*) ;
 int FUNC_7 (TYPE_5__*,unsigned int,unsigned int) ;
 int FUNC_8 (TYPE_7__*) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,unsigned int,int ,int ,int) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static void FUNC_15(
      hlsl_renderchain_t *VAR_2,
      struct shader_pass *VAR_3,
      unsigned VAR_4)
{
   unsigned VAR_5;

   FUNC_2(VAR_3, VAR_2->chain.dev);

   FUNC_12(VAR_2->chain.dev, 0, VAR_3->tex);
   FUNC_10(VAR_2->chain.dev, 0,
         FUNC_14(VAR_3->info.pass->filter));
   FUNC_9(VAR_2->chain.dev, 0,
         FUNC_14(VAR_3->info.pass->filter));

   FUNC_13(VAR_2->chain.dev, VAR_3->vertex_decl);
   for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
      FUNC_11(VAR_2->chain.dev, VAR_5,
            VAR_3->vertex_buf, 0,
            sizeof(struct D3D9Vertex));
   FUNC_1(VAR_2->chain.dev, VAR_0, 0, 2);



   FUNC_10(VAR_2->chain.dev, 0, VAR_1);
   FUNC_9(VAR_2->chain.dev, 0, VAR_1);

   FUNC_8(&VAR_2->chain);
}
