
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_3__ {int transmission_mode; int guard_interval; int constellation; int hierarchy_information; int code_rate_HP; int code_rate_LP; int bandwidth; } ;
struct TYPE_4__ {TYPE_1__ ofdm; } ;
struct dvb_frontend_parameters {TYPE_2__ u; } ;
struct dib7000m_state {int reg_offs; int div_sync_wait; int revision; int div_force_off; int div_state; int demod; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct dib7000m_state*,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct dib7000m_state*,int ) ;
 int FUNC_4 (struct dib7000m_state*,int,int) ;

__attribute__((used)) static void FUNC_5(struct dib7000m_state *VAR_1, struct dvb_frontend_parameters *VAR_2, u8 VAR_3)
{
 u16 VAR_4, VAR_5[4];

 FUNC_1(VAR_1, FUNC_0(VAR_2->u.ofdm.bandwidth));


 VAR_4 = 0;
 switch (VAR_2->u.ofdm.transmission_mode) {
  case 130: VAR_4 |= (0 << 7); break;
  case 129: VAR_4 |= (2 << 7); break;
  default:
  case 128: VAR_4 |= (1 << 7); break;
 }
 switch (VAR_2->u.ofdm.guard_interval) {
  case 139: VAR_4 |= (0 << 5); break;
  case 140: VAR_4 |= (1 << 5); break;
  case 138: VAR_4 |= (3 << 5); break;
  default:
  case 137: VAR_4 |= (2 << 5); break;
 }
 switch (VAR_2->u.ofdm.constellation) {
  case 131: VAR_4 |= (0 << 3); break;
  case 133: VAR_4 |= (1 << 3); break;
  default:
  case 132: VAR_4 |= (2 << 3); break;
 }
 switch (136) {
  case 135: VAR_4 |= 2; break;
  case 134: VAR_4 |= 4; break;
  default:
  case 136: VAR_4 |= 1; break;
 }
 FUNC_4(VAR_1, 0, VAR_4);
 FUNC_4(VAR_1, 5, (VAR_3 << 4));


 VAR_4 = 0;
 if (1 != 0)
  VAR_4 |= (1 << 6);
 if (VAR_2->u.ofdm.hierarchy_information == 1)
  VAR_4 |= (1 << 4);
 if (1 == 1)
  VAR_4 |= 1;
 switch ((VAR_2->u.ofdm.hierarchy_information == 0 || 1 == 1) ? VAR_2->u.ofdm.code_rate_HP : VAR_2->u.ofdm.code_rate_LP) {
  case 144: VAR_4 |= (2 << 1); break;
  case 143: VAR_4 |= (3 << 1); break;
  case 142: VAR_4 |= (5 << 1); break;
  case 141: VAR_4 |= (7 << 1); break;
  default:
  case 145: VAR_4 |= (1 << 1); break;
 }
 FUNC_4(VAR_1, 267 + VAR_1->reg_offs, VAR_4);




 FUNC_4(VAR_1, 26, (6 << 12) | (6 << 8) | 0x80);


 FUNC_4(VAR_1, 29, (0 << 14) | (4 << 10) | (1 << 9) | (3 << 5) | (1 << 4) | (0x3));


 FUNC_4(VAR_1, 32, (0 << 4) | 0x3);


 FUNC_4(VAR_1, 33, (0 << 4) | 0x5);


 switch (VAR_2->u.ofdm.transmission_mode) {
  case 128: VAR_4 = 256; break;
  case 129: VAR_4 = 128; break;
  case 130:
  default: VAR_4 = 64; break;
 }
 switch (VAR_2->u.ofdm.guard_interval) {
  case 140: VAR_4 *= 2; break;
  case 137: VAR_4 *= 4; break;
  case 138: VAR_4 *= 8; break;
  default:
  case 139: VAR_4 *= 1; break;
 }
 VAR_1->div_sync_wait = (VAR_4 * 3) / 2 + 32;



 if (1 == 1 || VAR_1->revision > 0x4000)
  VAR_1->div_force_off = 0;
 else
  VAR_1->div_force_off = 1;
 FUNC_2(&VAR_1->demod, VAR_1->div_state);


 switch (VAR_2->u.ofdm.constellation) {
  case 132:
   VAR_5[0] = 0x0148;
   VAR_5[1] = 0xfff0;
   VAR_5[2] = 0x00a4;
   VAR_5[3] = 0xfff8;
   break;
  case 133:
   VAR_5[0] = 0x023d;
   VAR_5[1] = 0xffdf;
   VAR_5[2] = 0x00a4;
   VAR_5[3] = 0xfff0;
   break;
  default:
   VAR_5[0] = 0x099a;
   VAR_5[1] = 0xffae;
   VAR_5[2] = 0x0333;
   VAR_5[3] = 0xfff8;
   break;
 }
 for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
  FUNC_4(VAR_1, 214 + VAR_4 + VAR_1->reg_offs, VAR_5[VAR_4]);


 FUNC_3(VAR_1, VAR_0);
}
