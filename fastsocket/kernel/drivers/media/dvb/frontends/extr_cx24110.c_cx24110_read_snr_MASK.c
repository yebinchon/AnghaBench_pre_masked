
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dvb_frontend {struct cx24110_state* demodulator_priv; } ;
struct cx24110_state {int lastesn0; } ;


 int FUNC_0 (struct cx24110_state*,int) ;
 int FUNC_1 (struct cx24110_state*,int,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_0, u16* VAR_1)
{
 struct cx24110_state *VAR_2 = VAR_0->demodulator_priv;


 if(FUNC_0(VAR_2,0x6a)&0x80) {

  VAR_2->lastesn0=FUNC_0(VAR_2,0x69)|
   (FUNC_0(VAR_2,0x68)<<8);
  FUNC_1(VAR_2,0x6a,0x84);
 }
 *VAR_1 = VAR_2->lastesn0;

 return 0;
}
