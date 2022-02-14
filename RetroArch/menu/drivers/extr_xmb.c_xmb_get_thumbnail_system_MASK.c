
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int thumbnail_path_data; } ;
typedef TYPE_1__ xmb_handle_t ;


 scalar_t__ FUNC_0 (int ,char const**) ;
 int FUNC_1 (char*,char const*,size_t) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, char*VAR_1, size_t VAR_2)
{
   xmb_handle_t *VAR_3 = (xmb_handle_t*)VAR_0;
   const char *VAR_4 = ((void*)0);
   if (!VAR_3)
      return;

   if (FUNC_0(VAR_3->thumbnail_path_data, &VAR_4))
      FUNC_1(VAR_1, VAR_4, VAR_2);
}
