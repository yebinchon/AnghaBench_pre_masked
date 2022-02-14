
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int transmission_mode; int bandwidth; } ;
struct TYPE_4__ {TYPE_1__ ofdm; } ;
struct dvb_frontend_parameters {TYPE_2__ u; } ;
struct dvb_frontend {struct dib7000m_state* demodulator_priv; } ;
struct dib7000m_state {scalar_t__ timf; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;



 int FUNC_1 (struct dib7000m_state*,int) ;
 int FUNC_2 (struct dib7000m_state*,int ) ;
 int FUNC_3 (struct dib7000m_state*,struct dvb_frontend_parameters*,int ) ;
 int FUNC_4 (struct dib7000m_state*,int ) ;
 int FUNC_5 (struct dib7000m_state*) ;
 int FUNC_6 (struct dib7000m_state*,int,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct dvb_frontend *VAR_2, struct dvb_frontend_parameters *VAR_3)
{
 struct dib7000m_state *VAR_4 = VAR_2->demodulator_priv;
 int VAR_5 = 0;
 u16 VAR_6;


 if (VAR_3 != ((void*)0))
  FUNC_3(VAR_4, VAR_3, 0);
 else
  return -VAR_1;


 VAR_5 |= FUNC_6(VAR_4, 898, 0x4000);
 VAR_5 |= FUNC_6(VAR_4, 898, 0x0000);
 FUNC_7(45);

 FUNC_4(VAR_4, VAR_0);

 VAR_5 |= FUNC_6(VAR_4, 29, (0 << 14) | (4 << 10) | (0 << 9) | (3 << 5) | (1 << 4) | (0x3));


 if (VAR_4->timf == 0)
  FUNC_7(200);



 VAR_6 = (6 << 8) | 0x80;
 switch (VAR_3->u.ofdm.transmission_mode) {
  case 130: VAR_6 |= (7 << 12); break;
  case 129: VAR_6 |= (8 << 12); break;
  default:
  case 128: VAR_6 |= (9 << 12); break;
 }
 VAR_5 |= FUNC_6(VAR_4, 26, VAR_6);


 VAR_6 = (0 << 4);
 switch (VAR_3->u.ofdm.transmission_mode) {
  case 130: VAR_6 |= 0x6; break;
  case 129: VAR_6 |= 0x7; break;
  default:
  case 128: VAR_6 |= 0x8; break;
 }
 VAR_5 |= FUNC_6(VAR_4, 32, VAR_6);


 VAR_6 = (0 << 4);
 switch (VAR_3->u.ofdm.transmission_mode) {
  case 130: VAR_6 |= 0x6; break;
  case 129: VAR_6 |= 0x7; break;
  default:
  case 128: VAR_6 |= 0x8; break;
 }
 VAR_5 |= FUNC_6(VAR_4, 33, VAR_6);


 if ((FUNC_1(VAR_4, 535) >> 6) & 0x1)
  FUNC_5(VAR_4);

    FUNC_2(VAR_4, FUNC_0(VAR_3->u.ofdm.bandwidth));
 return VAR_5;
}
