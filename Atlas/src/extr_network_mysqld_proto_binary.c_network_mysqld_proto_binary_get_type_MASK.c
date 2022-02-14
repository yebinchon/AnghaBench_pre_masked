
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int network_packet ;
struct TYPE_9__ {int type; } ;
typedef TYPE_1__ network_mysqld_type_t ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,TYPE_1__*) ;

int FUNC_6(network_packet *VAR_0, network_mysqld_type_t *VAR_1) {
 switch (VAR_1->type) {
 case 130:
 case 134:
 case 139:
 case 140:
 case 138:
  return FUNC_3(VAR_0, VAR_1);
 case 144:
 case 143:
 case 131:
  return FUNC_0(VAR_0, VAR_1);
 case 132:
  return FUNC_5(VAR_0, VAR_1);
 case 141:
  return FUNC_2(VAR_0, VAR_1);
 case 142:
  return FUNC_1(VAR_0, VAR_1);
 case 146:
 case 135:
 case 145:
 case 129:
 case 136:
 case 137:
 case 133:
 case 128:

  return FUNC_4(VAR_0, VAR_1);
 default:
  break;
 }

 return -1;
}
