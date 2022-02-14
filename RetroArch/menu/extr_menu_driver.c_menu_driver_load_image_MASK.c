
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; int data; } ;
typedef TYPE_1__ menu_ctx_load_image_t ;
struct TYPE_5__ {int (* load_image ) (int ,int ,int ) ;} ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static bool FUNC_1(menu_ctx_load_image_t *VAR_2)
{
   if (VAR_0 && VAR_0->load_image)
      return VAR_0->load_image(VAR_1,
            VAR_2->data, VAR_2->type);
   return 0;
}
