
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct vp7045_fe_state {int d; } ;
struct TYPE_3__ {int bandwidth; } ;
struct TYPE_4__ {TYPE_1__ ofdm; } ;
struct dvb_frontend_parameters {int frequency; TYPE_2__ u; } ;
struct dvb_frontend {struct vp7045_fe_state* demodulator_priv; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int*,int,int *,int ,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_3,
      struct dvb_frontend_parameters *VAR_4)
{
 struct vp7045_fe_state *VAR_5 = VAR_3->demodulator_priv;
 u8 VAR_6[5];
 u32 VAR_7 = VAR_4->frequency / 1000;

 VAR_6[0] = (VAR_7 >> 16) & 0xff;
 VAR_6[1] = (VAR_7 >> 8) & 0xff;
 VAR_6[2] = VAR_7 & 0xff;
 VAR_6[3] = 0;

 switch (VAR_4->u.ofdm.bandwidth) {
  case 129: VAR_6[4] = 8; break;
  case 130: VAR_6[4] = 7; break;
  case 131: VAR_6[4] = 6; break;
  case 128: return -VAR_1;
  default:
   return -VAR_0;
 }

 FUNC_0(VAR_5->d,VAR_2,VAR_6,5,((void*)0),0,200);
 return 0;
}
