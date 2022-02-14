
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int constellation; int hierarchy_information; int code_rate_HP; } ;
struct TYPE_4__ {TYPE_1__ ofdm; } ;
struct dvb_frontend_parameters {TYPE_2__ u; } ;


 int VAR_0 ;
__attribute__((used)) static int FUNC_0 (struct dvb_frontend_parameters *VAR_1, u16 *VAR_2)
{
 int VAR_3 = 1;

 *VAR_2 = 0x000;

 switch (VAR_1->u.ofdm.constellation) {
 case 128:
  break;
 case 131:
  *VAR_2 |= (1 << 10);
  break;
 case 130:
  *VAR_2 |= (2 << 10);
  break;
 case 129:
  VAR_3 = 0;
  break;
 default:
  return -VAR_0;
 };

 switch (VAR_1->u.ofdm.hierarchy_information) {
 case 132:
  break;
 case 136:
  *VAR_2 |= (1 << 7);
  break;
 case 135:
  *VAR_2 |= (2 << 7);
  break;
 case 134:
  *VAR_2 |= (3 << 7);
  break;
 case 133:
  VAR_3 = 0;
  break;
 default:
  return -VAR_0;
 };

 switch (VAR_1->u.ofdm.code_rate_HP) {
 case 142:
  break;
 case 141:
  *VAR_2 |= (1 << 3);
  break;
 case 140:
  *VAR_2 |= (2 << 3);
  break;
 case 139:
  *VAR_2 |= (3 << 3);
  break;
 case 138:
  *VAR_2 |= (4 << 3);
  break;
 case 137:
  VAR_3 = 0;
  break;
 default:
  return -VAR_0;
 };

 if (VAR_3)
  *VAR_2 |= (2 << 1);
 else
  *VAR_2 |= (1 << 1);

 return 0;
}
