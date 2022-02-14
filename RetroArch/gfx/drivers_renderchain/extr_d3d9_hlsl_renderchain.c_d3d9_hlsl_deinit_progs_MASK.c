
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* passes; } ;
struct TYPE_9__ {TYPE_3__ chain; } ;
typedef TYPE_4__ hlsl_renderchain_t ;
struct TYPE_7__ {int count; TYPE_1__* data; } ;
struct TYPE_6__ {int vertex_decl; int * vertex_buf; int * tex; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(hlsl_renderchain_t *VAR_0)
{
   FUNC_0("[D3D9 HLSL]: Destroying programs.\n");

   if (VAR_0->chain.passes->count >= 1)
   {
      unsigned VAR_1;

      FUNC_2(((void*)0), VAR_0->chain.passes->data[0].vertex_decl);

      for (VAR_1 = 1; VAR_1 < VAR_0->chain.passes->count; VAR_1++)
      {
         if (VAR_0->chain.passes->data[VAR_1].tex)
            FUNC_1(VAR_0->chain.passes->data[VAR_1].tex);
         VAR_0->chain.passes->data[VAR_1].tex = ((void*)0);
         FUNC_2(
               VAR_0->chain.passes->data[VAR_1].vertex_buf,
               VAR_0->chain.passes->data[VAR_1].vertex_decl);
      }
   }
}
