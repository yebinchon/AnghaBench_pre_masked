
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct dvb_ofdm_parameters {int bandwidth; } ;
struct TYPE_2__ {struct dvb_ofdm_parameters ofdm; } ;
struct dvb_frontend_parameters {int frequency; TYPE_1__ u; } ;
struct dvb_frontend {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_2, struct dvb_frontend_parameters* VAR_3, u8* VAR_4, int VAR_5)
{
 u32 VAR_6;
 struct dvb_ofdm_parameters *VAR_7 = &VAR_3->u.ofdm;

 if (VAR_5 < 5)
  return -VAR_0;

 VAR_6 = (((VAR_3->frequency + 83333) * 3) / 500000) + VAR_1;

 VAR_4[0] = 0x61;
 VAR_4[1] = (VAR_6 >> 8) & 0x7F;
 VAR_4[2] = VAR_6 & 0xFF;
 VAR_4[3] = 0x85;

 FUNC_0("frequency %u, div %u\n", VAR_3->frequency, VAR_6);

 if (VAR_3->frequency < 470000000)
  VAR_4[4] = 0x02;
 else if (VAR_3->frequency > 823000000)
  VAR_4[4] = 0x88;
 else
  VAR_4[4] = 0x08;

 if (VAR_7->bandwidth == 8)
  VAR_4[4] |= 0x04;

 return 5;
}
