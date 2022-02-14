
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int header_index; scalar_t__ on_value; scalar_t__ on_field; void* context; int state; } ;
typedef TYPE_1__ query_string_parser_t ;


 int VAR_0 ;

void FUNC_0(query_string_parser_t* VAR_1, void* VAR_2)
{
 VAR_1->state = VAR_0;
 VAR_1->context = VAR_2;
 VAR_1->header_index = -1;
 VAR_1->on_field = 0;
 VAR_1->on_value = 0;
}
