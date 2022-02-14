
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tuner_simple_priv {int i2c_props; } ;
struct dvb_frontend {struct tuner_simple_priv* tuner_priv; } ;


 int FUNC_0 (int *,unsigned char*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0)
{
 struct tuner_simple_priv *VAR_1 = VAR_0->tuner_priv;
 unsigned char VAR_2;

 if (1 != FUNC_0(&VAR_1->i2c_props, &VAR_2, 1))
  return 0;

 return VAR_2;
}
