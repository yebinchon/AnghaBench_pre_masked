
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt2266_priv {int dummy; } ;
struct dvb_frontend {struct mt2266_priv* tuner_priv; } ;


 int FUNC_0 (struct mt2266_priv*,int,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0)
{
 struct mt2266_priv *VAR_1 = VAR_0->tuner_priv;
 FUNC_0(VAR_1, 0x17, 0x6d);
 FUNC_0(VAR_1, 0x1c, 0x00);
 return 0;
}
