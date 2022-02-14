
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stv0288_state {scalar_t__ errmode; } ;
struct dvb_frontend {struct stv0288_state* demodulator_priv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct stv0288_state*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1, u32 *VAR_2)
{
 struct stv0288_state *VAR_3 = VAR_1->demodulator_priv;

 if (VAR_3->errmode != VAR_0)
  return 0;
 *VAR_2 = (FUNC_1(VAR_3, 0x26) << 8) |
     FUNC_1(VAR_3, 0x27);
 FUNC_0("stv0288_read_ber %d\n", *VAR_2);

 return 0;
}
