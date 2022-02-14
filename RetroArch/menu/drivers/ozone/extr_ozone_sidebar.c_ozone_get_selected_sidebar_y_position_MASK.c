
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sidebar_entry_height; int sidebar_entry_padding_vertical; int sidebar_padding_vertical; } ;
struct TYPE_5__ {int categories_selection_ptr; int system_tab_end; TYPE_1__ dimensions; } ;
typedef TYPE_2__ ozone_handle_t ;



unsigned FUNC_0(ozone_handle_t *VAR_0)
{
   return VAR_0->categories_selection_ptr * VAR_0->dimensions.sidebar_entry_height +
         (VAR_0->categories_selection_ptr - 1) * VAR_0->dimensions.sidebar_entry_padding_vertical + VAR_0->dimensions.sidebar_padding_vertical +
         (VAR_0->categories_selection_ptr > VAR_0->system_tab_end ? VAR_0->dimensions.sidebar_entry_padding_vertical + 1 : 0);
}
