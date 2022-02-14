
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* buffer; } ;
struct TYPE_5__ {TYPE_1__ atlas; } ;
typedef TYPE_2__ bm_renderer_t ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
   bm_renderer_t *VAR_1 = (bm_renderer_t*)VAR_0;
   if (!VAR_1)
      return;
   FUNC_0(VAR_1->atlas.buffer);
   FUNC_0(VAR_1);
}
