
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* path; char* label; char* sublabel; char* rich_label; char* value; char* password_value; int path_enabled; int label_enabled; int rich_label_enabled; int value_enabled; int sublabel_enabled; scalar_t__ spacing; scalar_t__ type; scalar_t__ idx; scalar_t__ entry_idx; int enum_idx; } ;
typedef TYPE_1__ menu_entry_t ;


 int VAR_0 ;

void FUNC_0(menu_entry_t *VAR_1)
{
   VAR_1->path[0] = '\0';
   VAR_1->label[0] = '\0';
   VAR_1->sublabel[0] = '\0';
   VAR_1->rich_label[0] = '\0';
   VAR_1->value[0] = '\0';
   VAR_1->password_value[0] = '\0';
   VAR_1->enum_idx = VAR_0;
   VAR_1->entry_idx = 0;
   VAR_1->idx = 0;
   VAR_1->type = 0;
   VAR_1->spacing = 0;
   VAR_1->path_enabled = 1;
   VAR_1->label_enabled = 1;
   VAR_1->rich_label_enabled = 1;
   VAR_1->value_enabled = 1;
   VAR_1->sublabel_enabled = 1;
}
