
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct stv6110_priv {int* regs; } ;
struct dvb_frontend {struct stv6110_priv* tuner_priv; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct dvb_frontend*,int*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_1, u32 *VAR_2)
{
 struct stv6110_priv *VAR_3 = VAR_1->tuner_priv;
 u8 VAR_4 = 0;
 u8 VAR_5[] = { 0, 0, 0, 0, 0, 0, 0, 0 };
 FUNC_0(VAR_1, VAR_5, 0, 8);


 VAR_4 = VAR_3->regs[VAR_0] & 0x1f;
 *VAR_2 = (VAR_4 + 5) * 2000000;

 return 0;
}
