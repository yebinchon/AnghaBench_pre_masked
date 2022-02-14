
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct microtune_priv {int dummy; } ;
struct dvb_frontend {struct microtune_priv* tuner_priv; } ;


 int FUNC_0 (char*,int,...) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0,
       int VAR_1, int VAR_2, int VAR_3,int VAR_4)
{
 struct microtune_priv *VAR_5 = VAR_0->tuner_priv;
 int VAR_6=1,VAR_7,VAR_8;

 VAR_1=VAR_1/1000;
 VAR_2=VAR_2/1000;
 VAR_3/=1000;
 VAR_4/=1000;

 FUNC_0("spurcheck f1=%d f2=%d  from=%d to=%d\n",
    VAR_1,VAR_2,VAR_3,VAR_4);

 do {
     VAR_7=-VAR_6;
     VAR_8=VAR_6*(VAR_1-VAR_2);
     do {
  VAR_7--;
  VAR_8=VAR_8-VAR_2;
  FUNC_0("spurtest n1=%d n2=%d ftest=%d\n",VAR_6,VAR_7,VAR_8);

  if( (VAR_8>VAR_3) && (VAR_8<VAR_4))
   FUNC_0("mt2032 spurcheck triggered: %d\n",VAR_6);
     } while ( (VAR_8>(VAR_2-VAR_4)) || (VAR_7>-5));
     VAR_6++;
 } while (VAR_6<5);

 return 1;
}
