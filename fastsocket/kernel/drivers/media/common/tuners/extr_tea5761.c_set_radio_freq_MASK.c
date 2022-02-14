
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tea5761_priv {int standby; } ;
struct dvb_frontend {struct tea5761_priv* analog_demod_priv; } ;
struct analog_parameters {scalar_t__ audmode; int frequency; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct dvb_frontend*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_1,
     struct analog_parameters *VAR_2)
{
 struct tea5761_priv *VAR_3 = VAR_1->analog_demod_priv;

 VAR_3->standby = 0;

 return FUNC_0(VAR_1, VAR_2->frequency,
    VAR_2->audmode == VAR_0);
}
