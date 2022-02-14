
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct stv0900_state {int demod; struct stv0900_internal* internal; } ;
struct stv0900_internal {int dummy; } ;
struct dvb_frontend {struct stv0900_state* demodulator_priv; } ;
typedef int s32 ;


 int FUNC_0 (struct stv0900_internal*,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_1, u16 *VAR_2)
{
 struct stv0900_state *VAR_3 = VAR_1->demodulator_priv;
 struct stv0900_internal *VAR_4 = VAR_3->internal;
 s32 VAR_5 = FUNC_0(VAR_4, &VAR_0,
        VAR_3->demod);

 VAR_5 = (VAR_5 + 100) * (65535 / 70);
 if (VAR_5 < 0)
  VAR_5 = 0;

 if (VAR_5 > 65535)
  VAR_5 = 65535;

 *VAR_2 = VAR_5;

 return 0;
}
