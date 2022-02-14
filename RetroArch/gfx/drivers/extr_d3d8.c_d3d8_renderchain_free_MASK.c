
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vertex_decl; int vertex_buf; scalar_t__ tex; } ;
typedef TYPE_1__ d3d8_renderchain_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
   d3d8_renderchain_t *VAR_1 = (d3d8_renderchain_t*)VAR_0;

   if (!VAR_1)
      return;

   if (VAR_1->tex)
      FUNC_0(VAR_1->tex);
   FUNC_1(VAR_1->vertex_buf, VAR_1->vertex_decl);

   FUNC_2(VAR_1);
}
