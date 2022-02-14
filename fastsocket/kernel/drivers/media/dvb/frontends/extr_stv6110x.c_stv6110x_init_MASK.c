
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv6110x_state {int regs; } ;
struct dvb_frontend {struct stv6110x_state* tuner_priv; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 (struct stv6110x_state*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_1)
{
 struct stv6110x_state *VAR_2 = VAR_1->tuner_priv;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2, 0, VAR_2->regs,
      FUNC_0(VAR_2->regs));
 if (VAR_3 < 0) {
  FUNC_1(VAR_0, 1, "Initialization failed");
  return -1;
 }

 return 0;
}
