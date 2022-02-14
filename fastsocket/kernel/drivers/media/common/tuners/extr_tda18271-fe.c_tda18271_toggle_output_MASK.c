
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda18271_priv {int output_opt; } ;
struct dvb_frontend {struct tda18271_priv* tuner_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dvb_frontend*,int,int,int) ;
 int FUNC_1 (char*,char*,char*,char*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_2, int VAR_3)
{
 struct tda18271_priv *VAR_4 = VAR_2->tuner_priv;

 int VAR_5 = FUNC_0(VAR_2, VAR_3 ? 1 : 0,
   VAR_4->output_opt & VAR_0 ? 1 : 0,
   VAR_4->output_opt & VAR_1 ? 1 : 0);

 if (FUNC_2(VAR_5))
  goto fail;

 FUNC_1("%s mode: xtal oscillator %s, slave tuner loop thru %s\n",
  VAR_3 ? "standby" : "active",
  VAR_4->output_opt & VAR_1 ? "off" : "on",
  VAR_4->output_opt & VAR_0 ? "off" : "on");
fail:
 return VAR_5;
}
