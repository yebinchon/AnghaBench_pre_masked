
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_3__ {int bandwidth; } ;
struct TYPE_4__ {TYPE_1__ ofdm; } ;
struct dvb_frontend_parameters {int frequency; TYPE_2__ u; } ;
struct dvb_frontend {struct dtt200u_fe_state* demodulator_priv; } ;
struct dtt200u_fe_state {int d; } ;
typedef int fe_status_t ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dvb_frontend*,int*) ;
 int FUNC_1 (int ,int*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend* VAR_5,
      struct dvb_frontend_parameters *VAR_6)
{
 struct dtt200u_fe_state *VAR_7 = VAR_5->demodulator_priv;
 int VAR_8;
 fe_status_t VAR_9;
 u16 VAR_10 = VAR_6->frequency / 250000;
 u8 VAR_11[2] = { VAR_3, 0 },VAR_12[3] = { VAR_4, 0, 0 };

 switch (VAR_6->u.ofdm.bandwidth) {
  case 129: VAR_11[1] = 8; break;
  case 130: VAR_11[1] = 7; break;
  case 131: VAR_11[1] = 6; break;
  case 128: return -VAR_1;
  default:
   return -VAR_0;
 }

 FUNC_1(VAR_7->d,VAR_11,2);

 VAR_12[1] = VAR_10 & 0xff;
 VAR_12[2] = (VAR_10 >> 8) & 0xff;
 FUNC_1(VAR_7->d,VAR_12,3);

 for (VAR_8 = 0; VAR_8 < 30; VAR_8++) {
  FUNC_2(20);
  FUNC_0(VAR_5, &VAR_9);
  if (VAR_9 & VAR_2)
   continue;
 }

 return 0;
}
