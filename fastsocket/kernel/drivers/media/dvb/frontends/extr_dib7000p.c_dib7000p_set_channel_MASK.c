
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_5__ {int transmission_mode; int guard_interval; int constellation; int hierarchy_information; int code_rate_HP; int code_rate_LP; int bandwidth; } ;
struct TYPE_6__ {TYPE_2__ ofdm; } ;
struct dvb_frontend_parameters {TYPE_3__ u; } ;
struct TYPE_4__ {int diversity_delay; } ;
struct dib7000p_state {int div_sync_wait; int div_force_off; int div_state; int demod; TYPE_1__ cfg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct dib7000p_state*,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct dib7000p_state*,int,int) ;

__attribute__((used)) static void FUNC_4(struct dib7000p_state *VAR_0, struct dvb_frontend_parameters *VAR_1, u8 VAR_2)
{
 u16 VAR_3, VAR_4[4];

    FUNC_1(VAR_0, FUNC_0(VAR_1->u.ofdm.bandwidth));


 VAR_3 = 0;
 switch (VAR_1->u.ofdm.transmission_mode) {
  case 130: VAR_3 |= (0 << 7); break;
  case 129: VAR_3 |= (2 << 7); break;
  default:
  case 128: VAR_3 |= (1 << 7); break;
 }
 switch (VAR_1->u.ofdm.guard_interval) {
  case 139: VAR_3 |= (0 << 5); break;
  case 140: VAR_3 |= (1 << 5); break;
  case 138: VAR_3 |= (3 << 5); break;
  default:
  case 137: VAR_3 |= (2 << 5); break;
 }
 switch (VAR_1->u.ofdm.constellation) {
  case 131: VAR_3 |= (0 << 3); break;
  case 133: VAR_3 |= (1 << 3); break;
  default:
  case 132: VAR_3 |= (2 << 3); break;
 }
 switch (136) {
  case 135: VAR_3 |= 2; break;
  case 134: VAR_3 |= 4; break;
  default:
  case 136: VAR_3 |= 1; break;
 }
 FUNC_3(VAR_0, 0, VAR_3);
 FUNC_3(VAR_0, 5, (VAR_2 << 4) | 1);


 VAR_3 = 0;
 if (1 != 0)
  VAR_3 |= (1 << 6);
 if (VAR_1->u.ofdm.hierarchy_information == 1)
  VAR_3 |= (1 << 4);
 if (1 == 1)
  VAR_3 |= 1;
 switch ((VAR_1->u.ofdm.hierarchy_information == 0 || 1 == 1) ? VAR_1->u.ofdm.code_rate_HP : VAR_1->u.ofdm.code_rate_LP) {
  case 144: VAR_3 |= (2 << 1); break;
  case 143: VAR_3 |= (3 << 1); break;
  case 142: VAR_3 |= (5 << 1); break;
  case 141: VAR_3 |= (7 << 1); break;
  default:
  case 145: VAR_3 |= (1 << 1); break;
 }
 FUNC_3(VAR_0, 208, VAR_3);


 FUNC_3(VAR_0, 26, 0x6680);
 FUNC_3(VAR_0, 32, 0x0003);
 FUNC_3(VAR_0, 29, 0x1273);
 FUNC_3(VAR_0, 33, 0x0005);


 switch (VAR_1->u.ofdm.transmission_mode) {
  case 128: VAR_3 = 256; break;
  case 129: VAR_3 = 128; break;
  case 130:
  default: VAR_3 = 64; break;
 }
 switch (VAR_1->u.ofdm.guard_interval) {
  case 140: VAR_3 *= 2; break;
  case 137: VAR_3 *= 4; break;
  case 138: VAR_3 *= 8; break;
  default:
  case 139: VAR_3 *= 1; break;
 }
 if (VAR_0->cfg.diversity_delay == 0)
  VAR_0->div_sync_wait = (VAR_3 * 3) / 2 + 48;
 else
  VAR_0->div_sync_wait = (VAR_3 * 3) / 2 + VAR_0->cfg.diversity_delay;


 VAR_0->div_force_off = !1 && VAR_1->u.ofdm.transmission_mode != 128;
 FUNC_2(&VAR_0->demod, VAR_0->div_state);


 switch (VAR_1->u.ofdm.constellation) {
  case 132:
   VAR_4[0] = 0x0148;
   VAR_4[1] = 0xfff0;
   VAR_4[2] = 0x00a4;
   VAR_4[3] = 0xfff8;
   break;
  case 133:
   VAR_4[0] = 0x023d;
   VAR_4[1] = 0xffdf;
   VAR_4[2] = 0x00a4;
   VAR_4[3] = 0xfff0;
   break;
  default:
   VAR_4[0] = 0x099a;
   VAR_4[1] = 0xffae;
   VAR_4[2] = 0x0333;
   VAR_4[3] = 0xfff8;
   break;
 }
 for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
  FUNC_3(VAR_0, 187 + VAR_3, VAR_4[VAR_3]);
}
