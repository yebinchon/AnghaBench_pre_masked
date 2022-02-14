
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv0900_state {int demod; struct stv0900_internal* internal; } ;
struct stv0900_internal {int dummy; } ;
struct dvb_frontend {struct stv0900_state* demodulator_priv; } ;
typedef enum fe_stv0900_demod_num { ____Placeholder_fe_stv0900_demod_num } fe_stv0900_demod_num ;


 int VAR_0 ;
 int FUNC_0 (struct stv0900_internal*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_1, int VAR_2)
{
 struct stv0900_state *VAR_3 = VAR_1->demodulator_priv;
 struct stv0900_internal *VAR_4 = VAR_3->internal;
 enum fe_stv0900_demod_num VAR_5 = VAR_3->demod;

 FUNC_0(VAR_4, VAR_0, VAR_2);

 return 0;
}
