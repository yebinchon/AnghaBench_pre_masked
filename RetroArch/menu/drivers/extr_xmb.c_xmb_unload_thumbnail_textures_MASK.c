
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ left_thumbnail; scalar_t__ thumbnail; } ;
typedef TYPE_1__ xmb_handle_t ;


 int FUNC_0 (scalar_t__*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
   xmb_handle_t *VAR_1 = (xmb_handle_t*)VAR_0;
   if (!VAR_1)
      return;

   if (VAR_1->thumbnail)
      FUNC_0(&VAR_1->thumbnail);
   if (VAR_1->left_thumbnail)
      FUNC_0(&VAR_1->left_thumbnail);
}
