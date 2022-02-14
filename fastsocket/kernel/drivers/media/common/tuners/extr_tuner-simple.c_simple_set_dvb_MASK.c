
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct tuner_simple_priv {int type; size_t nr; } ;
struct TYPE_5__ {int modulation; } ;
struct TYPE_4__ {int bandwidth; } ;
struct TYPE_6__ {TYPE_2__ vsb; TYPE_1__ ofdm; } ;
struct dvb_frontend_parameters {int frequency; TYPE_3__ u; } ;
struct dvb_frontend {struct tuner_simple_priv* tuner_priv; } ;


 int VAR_0 ;
 unsigned int* VAR_1 ;
 int FUNC_0 (struct dvb_frontend*,int*,int*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct dvb_frontend *VAR_2, u8 *VAR_3,
      const struct dvb_frontend_parameters *VAR_4)
{
 struct tuner_simple_priv *VAR_5 = VAR_2->tuner_priv;

 switch (VAR_5->type) {
 case 131:
 case 132:
  if (VAR_4->u.ofdm.bandwidth == VAR_0 &&
      VAR_4->frequency >= 158870000)
   VAR_3[3] |= 0x08;
  break;
 case 130:

  VAR_3[3] |= (VAR_4->frequency < 161000000) ? 1 :
     (VAR_4->frequency < 444000000) ? 2 : 4;


  if (VAR_4->u.ofdm.bandwidth == VAR_0)
   VAR_3[3] |= 1 << 3;
  break;
 case 129:
 case 133:
 {
  unsigned int VAR_6;

  if (VAR_1[VAR_5->nr])
   VAR_6 = VAR_1[VAR_5->nr];
  else
   switch (VAR_4->u.vsb.modulation) {
   case 134:
   case 135:
    VAR_6 = 1;
    break;
   case 128:
   default:
    VAR_6 = 0;
    break;
   }
  FUNC_0(VAR_2, &VAR_3[2], &VAR_3[3], VAR_6);
  break;
 }
 default:
  break;
 }
}
