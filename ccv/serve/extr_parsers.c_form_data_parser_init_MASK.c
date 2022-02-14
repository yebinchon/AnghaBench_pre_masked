
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int disposition_index; scalar_t__ on_name; void* context; scalar_t__ cursor; int state; } ;
typedef TYPE_1__ form_data_parser_t ;


 int VAR_0 ;

void FUNC_0(form_data_parser_t* VAR_1, void* VAR_2)
{
 VAR_1->state = VAR_0;
 VAR_1->cursor = 0;
 VAR_1->disposition_index = -1;
 VAR_1->context = VAR_2;
 VAR_1->on_name = 0;
}
