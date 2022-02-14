
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sidebar_entry_height; int sidebar_entry_padding_vertical; int sidebar_padding_vertical; } ;
struct TYPE_7__ {TYPE_1__ dimensions; TYPE_2__* horizontal_list; scalar_t__ system_tab_end; } ;
typedef TYPE_3__ ozone_handle_t ;
struct TYPE_6__ {scalar_t__ size; } ;



unsigned FUNC_0(ozone_handle_t *VAR_0)
{
   int VAR_1 = (int)(VAR_0->system_tab_end + 1 + (VAR_0->horizontal_list ? VAR_0->horizontal_list->size : 0));
   return VAR_1 * VAR_0->dimensions.sidebar_entry_height + (VAR_1 - 1) * VAR_0->dimensions.sidebar_entry_padding_vertical + VAR_0->dimensions.sidebar_padding_vertical +
         (VAR_0->horizontal_list && VAR_0->horizontal_list->size > 0 ? VAR_0->dimensions.sidebar_entry_padding_vertical + 1 : 0);
}
