
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* s; } ;
struct TYPE_8__ {TYPE_2__* fielddef; TYPE_1__ data; } ;
typedef TYPE_3__ network_mysqld_proto_field ;
typedef int guchar ;
struct TYPE_7__ {int type; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(network_mysqld_proto_field *VAR_1) {
 if (!VAR_1) return;

 switch ((guchar)VAR_1->fielddef->type) {
 case 133:
 case 150:
 case 149:
 case 134:
 case 128:

 case 132:
 case 136:
 case 143:
 case 142:
 case 141:

 case 148:
 case 138:

 case 146:
 case 137:

 case 147:
 case 145:
  break;
 case 152:
 case 144:
 case 131:
 case 151:
 case 139:
 case 140:
 case 130:
 case 129:
 case 135:
  if (VAR_1->data.s) FUNC_0(VAR_1->data.s);
  break;
 default:
  FUNC_1("%s: unknown field_type '%s' (%d) to free()",
    VAR_0,
    FUNC_2(VAR_1->fielddef->type),
    VAR_1->fielddef->type);
  break;
 }

 FUNC_0(VAR_1);
}
