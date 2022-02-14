
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int data; } ;
struct TYPE_7__ {TYPE_2__ texture; scalar_t__ font_data; TYPE_1__* font_driver; } ;
typedef TYPE_3__ ctr_font_t ;
struct TYPE_5__ {int (* free ) (scalar_t__) ;} ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void* VAR_0, bool VAR_1)
{
   ctr_font_t* VAR_2 = (ctr_font_t*)VAR_0;

   if (!VAR_2)
      return;

   if (VAR_2->font_driver && VAR_2->font_data)
      VAR_2->font_driver->free(VAR_2->font_data);




   FUNC_1(VAR_2->texture.data);

   FUNC_0(VAR_2);
}
