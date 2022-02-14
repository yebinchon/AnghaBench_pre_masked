
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int system; } ;
struct TYPE_5__ {TYPE_1__ directory; int path; } ;
typedef TYPE_2__ core_info_ctx_firmware_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int*) ;

bool FUNC_1(core_info_ctx_firmware_t *VAR_1,
      bool *VAR_2)
{
   if (!VAR_1)
      return 0;
   return FUNC_0(
         VAR_0,
         VAR_1->path, VAR_1->directory.system,
         VAR_2);
}
