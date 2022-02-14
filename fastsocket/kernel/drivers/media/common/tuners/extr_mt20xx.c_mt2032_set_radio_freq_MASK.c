
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct microtune_priv {int dummy; } ;
struct dvb_frontend {struct microtune_priv* tuner_priv; } ;
struct analog_parameters {int std; int frequency; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_frontend*,int,int,int,int,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1,
     struct analog_parameters *VAR_2)
{
 struct microtune_priv *VAR_3 = VAR_1->tuner_priv;
 int VAR_4;

 if (VAR_2->std & VAR_0) {
  FUNC_1("pinnacle ntsc\n");
  VAR_4 = 41300 * 1000;
 } else {
  FUNC_1("pinnacle pal\n");
  VAR_4 = 33300 * 1000;
 }


 FUNC_0(VAR_1, VAR_2->frequency * 125 / 2,
      1085*1000*1000,VAR_4,VAR_4,VAR_4);

 return 0;
}
