
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int on_value; int on_field; } ;
struct TYPE_12__ {int on_name; } ;
struct TYPE_9__ {size_t len; char* parsed; void* body; void* resource; int name; scalar_t__ cursor; void* context; TYPE_2__ const* param_map; void* state; TYPE_3__ query_string_parser; TYPE_7__ form_data_parser; } ;
typedef TYPE_1__ param_parser_t ;
struct TYPE_10__ {int type; int offset; } ;
typedef TYPE_2__ param_dispatch_t ;




 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_7__*,TYPE_1__*) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_3__*,TYPE_1__*) ;
 void* VAR_3 ;

void FUNC_4(param_parser_t* VAR_4, const param_dispatch_t* VAR_5, size_t VAR_6, void* VAR_7, void* VAR_8)
{
 FUNC_1(&VAR_4->form_data_parser, VAR_4);
 FUNC_3(&VAR_4->query_string_parser, VAR_4);
 VAR_4->form_data_parser.on_name = VAR_0;
 VAR_4->query_string_parser.on_field = VAR_1;
 VAR_4->query_string_parser.on_value = VAR_2;
 VAR_4->state = VAR_3;
 VAR_4->param_map = VAR_5;
 VAR_4->len = VAR_6;
 VAR_4->parsed = (char*)VAR_7;
 VAR_4->context = VAR_8;
 VAR_4->cursor = 0;
 FUNC_2(VAR_4->name, 0, sizeof(VAR_4->name));

 VAR_4->body = VAR_4->resource = VAR_3;
 int VAR_9;
 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
  switch (VAR_5[VAR_9].type)
  {
   default:
    break;
   case 128:
    FUNC_0(VAR_4->resource == VAR_3);
    *(int*)(VAR_4->parsed + VAR_5[VAR_9].offset) = -1;
    VAR_4->resource = VAR_9;
    break;
   case 129:
    FUNC_0(VAR_4->body == VAR_3);
    VAR_4->body = VAR_9;
    break;
  }
}
