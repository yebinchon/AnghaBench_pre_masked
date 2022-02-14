
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct config_size_setting {int dummy; } ;
struct TYPE_4__ {int rewind_buffer_size; } ;
struct TYPE_5__ {TYPE_1__ sizes; } ;
typedef TYPE_2__ settings_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int *,int,int ,int) ;
 scalar_t__ FUNC_1 (int,int) ;

__attribute__((used)) static struct config_size_setting *FUNC_2(settings_t *VAR_1, int *VAR_2)
{
   unsigned VAR_3 = 0;
   struct config_size_setting *VAR_4 = (struct config_size_setting*)FUNC_1((*VAR_2 + 1), sizeof(struct config_size_setting));

   if (!VAR_4)
      return ((void*)0);

   FUNC_0("rewind_buffer_size", &VAR_1->sizes.rewind_buffer_size, 1, VAR_0, 0);

   *VAR_2 = VAR_3;

   return VAR_4;
}
