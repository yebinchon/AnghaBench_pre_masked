
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t state; int blob_parser; int string_parser; int coord_parser; int bool_parser; int numeric_parser; TYPE_1__* param_map; } ;
typedef TYPE_2__ param_parser_t ;
struct TYPE_4__ {int type; } ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(param_parser_t* VAR_0)
{
 FUNC_0(VAR_0->state >= 0);
 switch (VAR_0->param_map[VAR_0->state].type)
 {
  case 131:
  case 132:
  case 133:
  case 134:
   FUNC_4(&VAR_0->numeric_parser);
   break;
  case 135:
   FUNC_2(&VAR_0->bool_parser);
   break;
  case 129:
  case 130:
   FUNC_3(&VAR_0->coord_parser);
   break;
  case 128:
   FUNC_5(&VAR_0->string_parser);
   break;
  case 137:
  case 136:
   FUNC_1(&VAR_0->blob_parser);
   break;
 }
}
