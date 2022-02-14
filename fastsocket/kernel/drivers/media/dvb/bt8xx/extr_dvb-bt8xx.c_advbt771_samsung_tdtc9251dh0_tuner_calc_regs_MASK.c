
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct dvb_frontend_parameters {int frequency; } ;
struct dvb_frontend {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct dvb_frontend* VAR_2, struct dvb_frontend_parameters* VAR_3, u8* VAR_4, int VAR_5)
{
 u32 VAR_6;
 unsigned char VAR_7 = 0;
 unsigned char VAR_8 = 0;

 if (VAR_5 < 5) return -VAR_0;

 VAR_6 = (((VAR_3->frequency + 83333) * 3) / 500000) + VAR_1;

 if (VAR_3->frequency < 150000000)
  VAR_8 = 0xB4;
 else if (VAR_3->frequency < 173000000)
  VAR_8 = 0xBC;
 else if (VAR_3->frequency < 250000000)
  VAR_8 = 0xB4;
 else if (VAR_3->frequency < 400000000)
  VAR_8 = 0xBC;
 else if (VAR_3->frequency < 420000000)
  VAR_8 = 0xF4;
 else if (VAR_3->frequency < 470000000)
  VAR_8 = 0xFC;
 else if (VAR_3->frequency < 600000000)
  VAR_8 = 0xBC;
 else if (VAR_3->frequency < 730000000)
  VAR_8 = 0xF4;
 else
  VAR_8 = 0xFC;

 if (VAR_3->frequency < 150000000)
  VAR_7 = 0x01;
 else if (VAR_3->frequency < 173000000)
  VAR_7 = 0x01;
 else if (VAR_3->frequency < 250000000)
  VAR_7 = 0x02;
 else if (VAR_3->frequency < 400000000)
  VAR_7 = 0x02;
 else if (VAR_3->frequency < 420000000)
  VAR_7 = 0x02;
 else if (VAR_3->frequency < 470000000)
  VAR_7 = 0x02;
 else if (VAR_3->frequency < 600000000)
  VAR_7 = 0x08;
 else if (VAR_3->frequency < 730000000)
  VAR_7 = 0x08;
 else
  VAR_7 = 0x08;

 VAR_4[0] = 0x61;
 VAR_4[1] = VAR_6 >> 8;
 VAR_4[2] = VAR_6 & 0xff;
 VAR_4[3] = VAR_8;
 VAR_4[4] = VAR_7;

 return 5;
}
