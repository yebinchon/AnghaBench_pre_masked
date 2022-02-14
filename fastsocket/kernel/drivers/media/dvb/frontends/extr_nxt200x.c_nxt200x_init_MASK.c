
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nxt200x_state {int initialised; int demod_chip; } ;
struct dvb_frontend {struct nxt200x_state* demodulator_priv; } ;


 int VAR_0 ;


 int FUNC_0 (struct dvb_frontend*) ;
 int FUNC_1 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_1)
{
 struct nxt200x_state* VAR_2 = VAR_1->demodulator_priv;
 int VAR_3 = 0;

 if (!VAR_2->initialised) {
  switch (VAR_2->demod_chip) {
   case 129:
    VAR_3 = FUNC_0(VAR_1);
    break;
   case 128:
    VAR_3 = FUNC_1(VAR_1);
    break;
   default:
    return -VAR_0;
    break;
  }
  VAR_2->initialised = 1;
 }
 return VAR_3;
}
