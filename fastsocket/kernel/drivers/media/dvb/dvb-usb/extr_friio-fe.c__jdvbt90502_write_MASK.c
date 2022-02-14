
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct jdvbt90502_state {int dummy; } ;
struct dvb_frontend {struct jdvbt90502_state* demodulator_priv; } ;


 int FUNC_0 (struct jdvbt90502_state*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0, u8 *VAR_1, int VAR_2)
{
 struct jdvbt90502_state *VAR_3 = VAR_0->demodulator_priv;
 int VAR_4, VAR_5;
 for (VAR_5 = 0; VAR_5 < VAR_2 - 1; VAR_5++) {
  VAR_4 = FUNC_0(VAR_3,
        VAR_1[0] + VAR_5, VAR_1[VAR_5 + 1]);
  if (VAR_4)
   return VAR_4;
 }

 return 0;
}
