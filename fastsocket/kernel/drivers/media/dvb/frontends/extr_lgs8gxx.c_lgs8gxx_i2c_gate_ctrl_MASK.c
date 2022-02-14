
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lgs8gxx_state {TYPE_1__* config; } ;
struct dvb_frontend {struct lgs8gxx_state* demodulator_priv; } ;
struct TYPE_2__ {int tuner_address; } ;


 int FUNC_0 (struct lgs8gxx_state*,int,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0, int VAR_1)
{
 struct lgs8gxx_state *VAR_2 = VAR_0->demodulator_priv;

 if (VAR_2->config->tuner_address == 0)
  return 0;
 if (VAR_1) {
  u8 VAR_3 = 0x80 | VAR_2->config->tuner_address;
  return FUNC_0(VAR_2, 0x01, VAR_3);
 }
 return FUNC_0(VAR_2, 0x01, 0);
}
