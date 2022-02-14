
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s921_state {int dummy; } ;
struct dvb_frontend {struct s921_state* demodulator_priv; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct s921_state*,int ) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1)
{
 struct s921_state *VAR_2 = VAR_1->demodulator_priv;
 int VAR_3;

 FUNC_0("\n");

 VAR_3 = FUNC_1(VAR_2, VAR_0);
 if (VAR_3 < 0)
  return VAR_3;

 return 0;
}
