
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt2266_priv {int dummy; } ;
struct dvb_frontend {struct mt2266_priv* tuner_priv; } ;


 int FUNC_0 (struct mt2266_priv*,int,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0)
{
 int VAR_1;
 struct mt2266_priv *VAR_2 = VAR_0->tuner_priv;
 VAR_1 = FUNC_0(VAR_2, 0x17, 0x6d);
 if (VAR_1 < 0)
  return VAR_1;
 VAR_1 = FUNC_0(VAR_2, 0x1c, 0xff);
 if (VAR_1 < 0)
  return VAR_1;
 return 0;
}
