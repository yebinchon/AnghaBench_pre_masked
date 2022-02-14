
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct microtune_priv {int dummy; } ;
struct dvb_frontend {struct microtune_priv* tuner_priv; } ;
struct analog_parameters {int std; int frequency; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_frontend*,int ) ;
 int FUNC_1 (struct dvb_frontend*,int,int) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_2,
     struct analog_parameters *VAR_3)
{
 struct microtune_priv *VAR_4 = VAR_2->tuner_priv;
 int VAR_5;

 if (VAR_3->std & VAR_0) {
  FUNC_2("pinnacle ntsc\n");
  VAR_5 = 41300 * 1000;
 } else {
  FUNC_2("pinnacle pal\n");
  VAR_5 = 33300 * 1000;
 }

 FUNC_1(VAR_2, VAR_3->frequency * 125 / 2, VAR_5);
 FUNC_0(VAR_2, VAR_1);

 return 0;
}
