
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uri_parse_state_t ;
struct TYPE_9__ {size_t body; size_t state; size_t resource; TYPE_1__* param_map; scalar_t__ parsed; int name; int form_data_parser; int query_string_parser; } ;
typedef TYPE_2__ param_parser_t ;
struct TYPE_8__ {scalar_t__ offset; } ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int *,char const*,size_t,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,char const*,size_t) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *,char const*,size_t) ;
 size_t VAR_0 ;
 size_t VAR_1 ;

void FUNC_7(param_parser_t* VAR_2, int VAR_3, const char* VAR_4, size_t VAR_5, uri_parse_state_t VAR_6, int VAR_7)
{
 switch (VAR_6)
 {
  default:
   break;
  case 128:
   FUNC_6(&VAR_2->query_string_parser, VAR_4, VAR_5);
   break;
  case 133:
   if (VAR_2->body == VAR_0)
    break;
   if (VAR_2->state != VAR_1 && VAR_2->state != VAR_2->body)
    FUNC_3(VAR_2);
   if (VAR_2->state == VAR_1)
   {
    VAR_2->state = VAR_2->body;
    FUNC_5(VAR_2);
   }
   FUNC_4(VAR_2, VAR_4, VAR_5);
   break;
  case 129:
   if (VAR_2->state != VAR_1)
    FUNC_3(VAR_2);
   break;
  case 131:
  case 130:
   if (VAR_2->state != VAR_1)
    FUNC_3(VAR_2);
   FUNC_0(VAR_7 >= 0);
   FUNC_2(&VAR_2->form_data_parser, VAR_4, VAR_5, VAR_7);
   break;
  case 132:
   if (VAR_2->state == VAR_1)
   {
    VAR_2->state = FUNC_1(VAR_2, VAR_2->name);
    if (VAR_2->state >= 0)
     FUNC_5(VAR_2);
   }
   if (VAR_2->state >= 0)
    FUNC_4(VAR_2, VAR_4, VAR_5);
   break;
 }
 if (VAR_3 >= 0 && VAR_2->resource != VAR_1)
  *(int*)(VAR_2->parsed + VAR_2->param_map[VAR_2->resource].offset) = VAR_3;
}
