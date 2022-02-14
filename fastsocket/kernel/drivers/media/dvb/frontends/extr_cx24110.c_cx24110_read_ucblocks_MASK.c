
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dvb_frontend {struct cx24110_state* demodulator_priv; } ;
struct cx24110_state {int lastbler; } ;


 int FUNC_0 (struct cx24110_state*,int) ;
 int FUNC_1 (struct cx24110_state*,int,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_0, u32* VAR_1)
{
 struct cx24110_state *VAR_2 = VAR_0->demodulator_priv;
 u32 VAR_3;

 if(FUNC_0(VAR_2,0x10)&0x40) {

  FUNC_1(VAR_2,0x10,0x60);
  VAR_3=FUNC_0(VAR_2,0x12)|
   (FUNC_0(VAR_2,0x13)<<8)|
   (FUNC_0(VAR_2,0x14)<<16);
  FUNC_1(VAR_2,0x10,0x70);
  VAR_2->lastbler=FUNC_0(VAR_2,0x12)|
   (FUNC_0(VAR_2,0x13)<<8)|
   (FUNC_0(VAR_2,0x14)<<16);
  FUNC_1(VAR_2,0x10,0x20);
 }
 *VAR_1 = VAR_2->lastbler;

 return 0;
}
