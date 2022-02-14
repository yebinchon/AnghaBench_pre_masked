
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int state; } ;
struct TYPE_12__ {int state; } ;
struct TYPE_13__ {int state; } ;
struct TYPE_11__ {int state; } ;
struct TYPE_9__ {size_t state; int blob_parser; TYPE_3__ string_parser; TYPE_6__ coord_parser; TYPE_7__ bool_parser; TYPE_5__ numeric_parser; TYPE_1__* param_map; } ;
typedef TYPE_2__ param_parser_t ;
struct TYPE_8__ {int type; } ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char const*,size_t) ;
 int FUNC_2 (TYPE_7__*,char const*,size_t) ;
 int FUNC_3 (TYPE_6__*,char const*,size_t) ;
 int FUNC_4 (TYPE_5__*,char const*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (TYPE_3__*,char const*,size_t) ;

__attribute__((used)) static void FUNC_6(param_parser_t* VAR_5, const char* VAR_6, size_t VAR_7)
{
 FUNC_0(VAR_5->state >= 0);
 switch (VAR_5->param_map[VAR_5->state].type)
 {
  case 131:
  case 132:
  case 133:
  case 134:
   FUNC_4(&VAR_5->numeric_parser, VAR_6, VAR_7);
   if (VAR_5->numeric_parser.state == VAR_2)
    VAR_5->state = VAR_3;
   break;
  case 135:
   FUNC_2(&VAR_5->bool_parser, VAR_6, VAR_7);
   if (VAR_5->bool_parser.state == VAR_0)
    VAR_5->state = VAR_3;
   break;
  case 129:
  case 130:
   FUNC_3(&VAR_5->coord_parser, VAR_6, VAR_7);
   if (VAR_5->coord_parser.state == VAR_1)
    VAR_5->state = VAR_3;
   break;
  case 128:
   FUNC_5(&VAR_5->string_parser, VAR_6, VAR_7);
   if (VAR_5->string_parser.state == VAR_4)
    VAR_5->state = VAR_3;
   break;
  case 137:
  case 136:
   FUNC_1(&VAR_5->blob_parser, VAR_6, VAR_7);
   break;
 }
}
