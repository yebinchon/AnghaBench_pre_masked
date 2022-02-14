
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ font_data; TYPE_1__* font_driver; } ;
typedef TYPE_2__ switch_font_t ;
struct TYPE_4__ {int (* free ) (scalar_t__) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, bool VAR_1)
{
      switch_font_t *VAR_2 = (switch_font_t *)VAR_0;

      if (!VAR_2)
            return;

      if (VAR_2->font_driver && VAR_2->font_data)
            VAR_2->font_driver->free(VAR_2->font_data);

      FUNC_0(VAR_2);
}
