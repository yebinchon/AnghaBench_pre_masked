
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct stv0900_state {int demod; struct stv0900_internal* internal; } ;
struct stv0900_internal {int dummy; } ;
struct dvb_frontend {struct stv0900_state* demodulator_priv; } ;
typedef enum fe_stv0900_demod_num { ____Placeholder_fe_stv0900_demod_num } fe_stv0900_demod_num ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct dvb_frontend*,int) ;
 int FUNC_1 (struct stv0900_internal*,int ) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_5, u32 * VAR_6)
{
 struct stv0900_state *VAR_7 = VAR_5->demodulator_priv;
 struct stv0900_internal *VAR_8 = VAR_7->internal;
 enum fe_stv0900_demod_num VAR_9 = VAR_7->demod;
 u8 VAR_10, VAR_11;
 u32 VAR_12 = 0;

 *VAR_6 = 0x0;
 if (FUNC_0(VAR_5, VAR_9) == VAR_2) {



  VAR_10 = FUNC_1(VAR_8, VAR_1);
  VAR_11 = FUNC_1(VAR_8, VAR_0);
  VAR_12 = (VAR_10 << 8) | VAR_11;


  VAR_10 = FUNC_1(VAR_8, VAR_4);
  VAR_11 = FUNC_1(VAR_8, VAR_3);
  *VAR_6 = (VAR_10 << 8) | VAR_11;
  *VAR_6 += VAR_12;
 }

 return 0;
}
