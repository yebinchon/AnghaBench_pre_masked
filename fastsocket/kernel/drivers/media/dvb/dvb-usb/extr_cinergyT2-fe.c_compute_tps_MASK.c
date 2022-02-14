
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct dvb_ofdm_parameters {int code_rate_HP; int code_rate_LP; int constellation; int transmission_mode; int guard_interval; int hierarchy_information; } ;
struct TYPE_2__ {struct dvb_ofdm_parameters ofdm; } ;
struct dvb_frontend_parameters {TYPE_1__ u; } ;
__attribute__((used)) static uint16_t FUNC_0(struct dvb_frontend_parameters *VAR_0)
{
 struct dvb_ofdm_parameters *VAR_1 = &VAR_0->u.ofdm;
 uint16_t VAR_2 = 0;

 switch (VAR_1->code_rate_HP) {
 case 145:
  VAR_2 |= (1 << 7);
  break;
 case 144:
  VAR_2 |= (2 << 7);
  break;
 case 143:
  VAR_2 |= (3 << 7);
  break;
 case 142:
  VAR_2 |= (4 << 7);
  break;
 case 146:
 case 141:
 default:
                       ;
 }

 switch (VAR_1->code_rate_LP) {
 case 145:
  VAR_2 |= (1 << 4);
  break;
 case 144:
  VAR_2 |= (2 << 4);
  break;
 case 143:
  VAR_2 |= (3 << 4);
  break;
 case 142:
  VAR_2 |= (4 << 4);
  break;
 case 146:
 case 141:
 default:
                       ;
 }

 switch (VAR_1->constellation) {
 case 132:
  VAR_2 |= (1 << 13);
  break;
 case 131:
  VAR_2 |= (2 << 13);
  break;
 case 130:
 default:
                        ;
 }

 switch (VAR_1->transmission_mode) {
 case 128:
  VAR_2 |= (1 << 0);
  break;
 case 129:
 default:
                       ;
 }

 switch (VAR_1->guard_interval) {
 case 140:
  VAR_2 |= (1 << 2);
  break;
 case 137:
  VAR_2 |= (2 << 2);
  break;
 case 138:
  VAR_2 |= (3 << 2);
  break;
 case 139:
 default:
                       ;
 }

 switch (VAR_1->hierarchy_information) {
 case 136:
  VAR_2 |= (1 << 10);
  break;
 case 135:
  VAR_2 |= (2 << 10);
  break;
 case 134:
  VAR_2 |= (3 << 10);
  break;
 case 133:
 default:
                        ;
 }

 return VAR_2;
}
