
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dvb_frontend {struct cx24110_state* demodulator_priv; } ;
struct cx24110_state {int lastber; } ;


 int FUNC_0 (struct cx24110_state*,int) ;
 int FUNC_1 (struct cx24110_state*,int,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_0, u32* VAR_1)
{
 struct cx24110_state *VAR_2 = VAR_0->demodulator_priv;


 if(FUNC_0(VAR_2,0x24)&0x10) {

  FUNC_1(VAR_2,0x24,0x04);
  VAR_2->lastber=FUNC_0(VAR_2,0x25)|
   (FUNC_0(VAR_2,0x26)<<8);
  FUNC_1(VAR_2,0x24,0x04);
  FUNC_1(VAR_2,0x24,0x14);
 }
 *VAR_1 = VAR_2->lastber;

 return 0;
}
