
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int thumbnail_content; } ;
typedef TYPE_1__ stripes_handle_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, char *VAR_1, size_t VAR_2)
{
   stripes_handle_t *VAR_3 = (stripes_handle_t*)VAR_0;
   if (!VAR_3)
      return;
   if (!FUNC_2(VAR_3->thumbnail_content))
      FUNC_0(VAR_3->thumbnail_content);
   VAR_3->thumbnail_content = FUNC_1(VAR_1);
}
