
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * thumbnail_content; } ;
typedef TYPE_1__ stripes_handle_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
   stripes_handle_t *VAR_1 = (stripes_handle_t*)VAR_0;
   if (!VAR_1)
      return;
   if (!FUNC_1(VAR_1->thumbnail_content))
      FUNC_0(VAR_1->thumbnail_content);
   VAR_1->thumbnail_content = ((void*)0);
}
