
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct cx24113_state* tuner_priv; } ;
struct cx24113_state {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct cx24113_state*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0)
{
 struct cx24113_state *VAR_1 = VAR_0->tuner_priv;
 FUNC_0("\n");
 VAR_0->tuner_priv = ((void*)0);
 FUNC_1(VAR_1);
 return 0;
}
