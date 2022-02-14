
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda18271_priv {scalar_t__ role; } ;
struct dvb_frontend {struct tda18271_priv* tuner_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct dvb_frontend*,int ,int) ;

__attribute__((used)) static inline int FUNC_1(struct dvb_frontend *VAR_3, int VAR_4)
{
 struct tda18271_priv *VAR_5 = VAR_3->tuner_priv;
 return FUNC_0(VAR_3,
        (VAR_5->role == VAR_2) ?
        VAR_0 :
        VAR_1, VAR_4);
}
