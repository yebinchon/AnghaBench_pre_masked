
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__* vertex_buf; scalar_t__* tex; } ;
struct TYPE_11__ {TYPE_3__* luts; TYPE_1__ prev; } ;
struct TYPE_12__ {TYPE_4__ chain; } ;
typedef TYPE_5__ hlsl_renderchain_t ;
struct TYPE_10__ {unsigned int count; TYPE_2__* data; } ;
struct TYPE_9__ {scalar_t__ tex; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int *) ;

__attribute__((used)) static void FUNC_3(hlsl_renderchain_t *VAR_1)
{
   unsigned VAR_2;

   for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
   {
      if (VAR_1->chain.prev.tex[VAR_2])
         FUNC_1(VAR_1->chain.prev.tex[VAR_2]);
      if (VAR_1->chain.prev.vertex_buf[VAR_2])
         FUNC_2(VAR_1->chain.prev.vertex_buf[VAR_2], ((void*)0));
   }

   FUNC_0(VAR_1);

   for (VAR_2 = 0; VAR_2 < VAR_1->chain.luts->count; VAR_2++)
   {
      if (VAR_1->chain.luts->data[VAR_2].tex)
         FUNC_1(VAR_1->chain.luts->data[VAR_2].tex);
   }
}
