
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_frontend {struct cx24110_state* demodulator_priv; } ;
struct cx24110_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cx24110_state*,int) ;
 int FUNC_1 (struct cx24110_state*,int,int) ;

__attribute__((used)) static int FUNC_2 (struct dvb_frontend* VAR_1, u8 *VAR_2, int VAR_3)
{
 struct cx24110_state *VAR_4 = VAR_1->demodulator_priv;

 if (VAR_3 != 3)
  return -VAR_0;





 FUNC_1(VAR_4,0x6d,0x30);
 FUNC_1(VAR_4,0x70,0x15);


 while (FUNC_0(VAR_4,0x6d)&0x80)
  FUNC_1(VAR_4,0x72,0);


 FUNC_1(VAR_4,0x72,VAR_2[0]);


 while ((FUNC_0(VAR_4,0x6d)&0xc0)==0x80)
  ;


 FUNC_1(VAR_4,0x72,VAR_2[1]);
 while ((FUNC_0(VAR_4,0x6d)&0xc0)==0x80)
  ;


 FUNC_1(VAR_4,0x72,VAR_2[2]);
 while ((FUNC_0(VAR_4,0x6d)&0xc0)==0x80)
  ;


 FUNC_1(VAR_4,0x6d,0x32);
 FUNC_1(VAR_4,0x6d,0x30);

 return 0;
}
