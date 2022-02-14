
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int port; int device; } ;
typedef TYPE_1__ retro_ctx_controller_info_t ;
struct TYPE_7__ {unsigned int index_offset; } ;
typedef TYPE_2__ rarch_setting_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (unsigned int,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(rarch_setting_t *VAR_1)
{
   retro_ctx_controller_info_t VAR_2;
   unsigned VAR_3 = 0;

   if (!VAR_1 || FUNC_2(VAR_1) != 0)
      return -1;

   VAR_3 = VAR_1->index_offset;

   FUNC_1(VAR_3, VAR_0);

   VAR_2.port = VAR_3;
   VAR_2.device = VAR_0;

   FUNC_0(&VAR_2);

   return 0;
}
