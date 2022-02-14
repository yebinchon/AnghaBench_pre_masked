
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mc44s803_priv {int dummy; } ;
struct dvb_frontend {struct mc44s803_priv* tuner_priv; } ;


 int FUNC_0 (struct mc44s803_priv*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0)
{
 struct mc44s803_priv *VAR_1 = VAR_0->tuner_priv;

 VAR_0->tuner_priv = ((void*)0);
 FUNC_0(VAR_1);

 return 0;
}
