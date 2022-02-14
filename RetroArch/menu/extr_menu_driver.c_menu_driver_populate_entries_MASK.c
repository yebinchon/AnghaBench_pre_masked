
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; int label; int path; } ;
typedef TYPE_1__ menu_displaylist_info_t ;
struct TYPE_5__ {int (* populate_entries ) (int ,int ,int ,int ) ;} ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;

void FUNC_1(menu_displaylist_info_t *VAR_2)
{
   if (VAR_0 && VAR_0->populate_entries)
      VAR_0->populate_entries(
            VAR_1, VAR_2->path,
            VAR_2->label, VAR_2->type);
}
