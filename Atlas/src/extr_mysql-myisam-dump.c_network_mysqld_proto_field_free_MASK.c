
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
 int FUNC_1 (char*,int ,int ) ;

void FUNC_2(network_mysqld_proto_field *VAR_1) {
 if (!VAR_1) return;

 switch ((guchar)VAR_1->fielddef->type) {
 case 131:
 case 140:
 case 139:

 case 130:
 case 133:
 case 136:
 case 135:

 case 138:
 case 134:

 case 137:
  break;
 case 141:
 case 129:
 case 128:
 case 132:
  if (VAR_1->data.s) FUNC_0(VAR_1->data.s);
  break;
 default:
  FUNC_1("%s: unknown field_type to free: %d",
    VAR_0,
    VAR_1->fielddef->type);
  break;
 }

 FUNC_0(VAR_1);
}
