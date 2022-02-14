
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int data; } ;
struct TYPE_12__ {int string; } ;
struct TYPE_11__ {int y; int x; } ;
struct TYPE_10__ {int result; } ;
struct TYPE_9__ {double result; } ;
struct TYPE_14__ {scalar_t__ state; scalar_t__ cursor; int name; TYPE_5__ blob_parser; int context; TYPE_4__ string_parser; TYPE_3__ coord_parser; scalar_t__ parsed; TYPE_2__ bool_parser; TYPE_1__ numeric_parser; TYPE_7__* param_map; } ;
typedef TYPE_6__ param_parser_t ;
struct TYPE_15__ {int type; int (* on_blob ) (int ,int ) ;int (* on_string ) (int ,int ) ;scalar_t__ offset; } ;
typedef TYPE_7__ param_dispatch_t ;
typedef int ccv_size_t ;
typedef int ccv_point_t ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

void FUNC_5(param_parser_t* VAR_1)
{
 if (VAR_1->state >= 0)
 {
  const param_dispatch_t* VAR_2 = VAR_1->param_map + VAR_1->state;
  switch (VAR_2->type)
  {
   case 131:
    *(int*)(VAR_1->parsed + VAR_2->offset) = (int)(VAR_1->numeric_parser.result + 0.5);
    break;
   case 132:
    if (*(int*)(VAR_1->parsed + VAR_2->offset) < 0)
     *(int*)(VAR_1->parsed + VAR_2->offset) = (int)(VAR_1->numeric_parser.result + 0.5);
    break;
   case 133:
    *(float*)(VAR_1->parsed + VAR_2->offset) = (float)VAR_1->numeric_parser.result;
    break;
   case 134:
    *(double*)(VAR_1->parsed + VAR_2->offset) = VAR_1->numeric_parser.result;
    break;
   case 135:
    *(int*)(VAR_1->parsed + VAR_2->offset) = VAR_1->bool_parser.result;
    break;
   case 129:
    *(ccv_size_t*)(VAR_1->parsed + VAR_2->offset) = FUNC_1((int)(VAR_1->coord_parser.x + 0.5), (int)(VAR_1->coord_parser.y + 0.5));
    break;
   case 130:
    *(ccv_point_t*)(VAR_1->parsed + VAR_2->offset) = FUNC_0((int)(VAR_1->coord_parser.x + 0.5), (int)(VAR_1->coord_parser.y + 0.5));
    break;
   case 128:
    if (VAR_2->on_string)
     VAR_2->on_string(VAR_1->context, VAR_1->string_parser.string);
    break;
   case 137:
   case 136:
    if (VAR_2->on_blob)
     VAR_2->on_blob(VAR_1->context, VAR_1->blob_parser.data);
    break;
  }
 }
 if (VAR_1->state != VAR_0)
 {
  VAR_1->state = VAR_0;
  FUNC_2(VAR_1->name, 0, sizeof(VAR_1->name));
  VAR_1->cursor = 0;
 }
}
