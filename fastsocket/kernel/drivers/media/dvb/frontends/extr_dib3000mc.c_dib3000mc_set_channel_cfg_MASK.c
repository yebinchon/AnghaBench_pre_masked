
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {int transmission_mode; int guard_interval; int constellation; int hierarchy_information; int code_rate_HP; int code_rate_LP; int bandwidth; } ;
struct TYPE_6__ {TYPE_2__ ofdm; } ;
struct dvb_frontend_parameters {TYPE_3__ u; } ;
struct dib3000mc_state {TYPE_1__* cfg; } ;
struct TYPE_4__ {int impulse_noise_mode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct dib3000mc_state*,int) ;
 int FUNC_2 (struct dib3000mc_state*,int) ;
 int FUNC_3 (struct dib3000mc_state*,int ) ;
 int FUNC_4 (struct dib3000mc_state*,int ,int) ;
 int FUNC_5 (struct dib3000mc_state*,int,int ,int ) ;
 int FUNC_6 (struct dib3000mc_state*,int,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct dib3000mc_state *VAR_0, struct dvb_frontend_parameters *VAR_1, u16 VAR_2)
{
 u16 VAR_3;
    FUNC_3(VAR_0, FUNC_0(VAR_1->u.ofdm.bandwidth));
 FUNC_5(VAR_0, VAR_1->u.ofdm.transmission_mode, FUNC_0(VAR_1->u.ofdm.bandwidth), 0);




  FUNC_6(VAR_0, 100, (16 << 6) + 9);

 FUNC_6(VAR_0, 1027, 0x0800);
 FUNC_6(VAR_0, 1027, 0x0000);


 FUNC_6(VAR_0, 26, 0x6680);
 FUNC_6(VAR_0, 29, 0x1273);
 FUNC_6(VAR_0, 33, 5);
 FUNC_2(VAR_0, 132);
 FUNC_6(VAR_0, 133, 15564);

 FUNC_6(VAR_0, 12 , 0x0);
 FUNC_6(VAR_0, 13 , 0x3e8);
 FUNC_6(VAR_0, 14 , 0x0);
 FUNC_6(VAR_0, 15 , 0x3f2);

 FUNC_6(VAR_0, 93,0);
 FUNC_6(VAR_0, 94,0);
 FUNC_6(VAR_0, 95,0);
 FUNC_6(VAR_0, 96,0);
 FUNC_6(VAR_0, 97,0);
 FUNC_6(VAR_0, 98,0);

 FUNC_4(VAR_0, 0, VAR_1->u.ofdm.transmission_mode);

 VAR_3 = 0;
 switch (VAR_1->u.ofdm.transmission_mode) {
  case 129: VAR_3 |= (0 << 7); break;
  default:
  case 128: VAR_3 |= (1 << 7); break;
 }
 switch (VAR_1->u.ofdm.guard_interval) {
  case 138: VAR_3 |= (0 << 5); break;
  case 139: VAR_3 |= (1 << 5); break;
  case 137: VAR_3 |= (3 << 5); break;
  default:
  case 136: VAR_3 |= (2 << 5); break;
 }
 switch (VAR_1->u.ofdm.constellation) {
  case 130: VAR_3 |= (0 << 3); break;
  case 132: VAR_3 |= (1 << 3); break;
  default:
  case 131: VAR_3 |= (2 << 3); break;
 }
 switch (135) {
  case 134: VAR_3 |= 2; break;
  case 133: VAR_3 |= 4; break;
  default:
  case 135: VAR_3 |= 1; break;
 }
 FUNC_6(VAR_0, 0, VAR_3);
 FUNC_6(VAR_0, 5, (1 << 8) | ((VAR_2 & 0xf) << 4));

 VAR_3 = 0;
 if (VAR_1->u.ofdm.hierarchy_information == 1)
  VAR_3 |= (1 << 4);
 if (1 == 1)
  VAR_3 |= 1;
 switch ((VAR_1->u.ofdm.hierarchy_information == 0 || 1 == 1) ? VAR_1->u.ofdm.code_rate_HP : VAR_1->u.ofdm.code_rate_LP) {
  case 143: VAR_3 |= (2 << 1); break;
  case 142: VAR_3 |= (3 << 1); break;
  case 141: VAR_3 |= (5 << 1); break;
  case 140: VAR_3 |= (7 << 1); break;
  default:
  case 144: VAR_3 |= (1 << 1); break;
 }
 FUNC_6(VAR_0, 181, VAR_3);


 switch (VAR_1->u.ofdm.transmission_mode) {
  case 128: VAR_3 = 256; break;
  case 129:
  default: VAR_3 = 64; break;
 }
 switch (VAR_1->u.ofdm.guard_interval) {
  case 139: VAR_3 *= 2; break;
  case 136: VAR_3 *= 4; break;
  case 137: VAR_3 *= 8; break;
  default:
  case 138: VAR_3 *= 1; break;
 }
 VAR_3 <<= 4;
 VAR_3 |= FUNC_1(VAR_0, 180) & 0x000f;
 FUNC_6(VAR_0, 180, VAR_3);


 VAR_3 = FUNC_1(VAR_0, 0);
 FUNC_6(VAR_0, 0, VAR_3 | (1 << 9));
 FUNC_6(VAR_0, 0, VAR_3);

 FUNC_7(30);

 FUNC_4(VAR_0, VAR_0->cfg->impulse_noise_mode, VAR_1->u.ofdm.transmission_mode);
}
