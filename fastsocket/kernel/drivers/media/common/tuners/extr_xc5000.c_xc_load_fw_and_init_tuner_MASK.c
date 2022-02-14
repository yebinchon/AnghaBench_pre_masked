
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xc5000_priv {int dummy; } ;
struct dvb_frontend {struct xc5000_priv* tuner_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dvb_frontend*) ;
 int FUNC_1 (struct dvb_frontend*) ;
 int FUNC_2 (struct xc5000_priv*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct xc5000_priv*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_3)
{
 struct xc5000_priv *VAR_4 = VAR_3->tuner_priv;
 int VAR_5 = 0;

 if (FUNC_1(VAR_3) != VAR_0) {
  VAR_5 = FUNC_0(VAR_3);
  if (VAR_5 != VAR_0)
   return VAR_5;
 }


 VAR_5 |= FUNC_2(VAR_4);






 FUNC_3(100);


 VAR_5 |= FUNC_4(VAR_4, VAR_2, VAR_1);

 return VAR_5;
}
