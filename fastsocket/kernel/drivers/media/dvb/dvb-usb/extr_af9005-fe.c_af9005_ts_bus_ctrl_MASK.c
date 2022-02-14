
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct af9005_fe_state* demodulator_priv; } ;
struct af9005_fe_state {int d; int opened; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0, int VAR_1)
{
 struct af9005_fe_state *VAR_2 = VAR_0->demodulator_priv;

 if (VAR_1) {
  VAR_2->opened++;
 } else {

  VAR_2->opened--;
  if (!VAR_2->opened)
   FUNC_0(VAR_2->d, 0);
 }
 return 0;
}
