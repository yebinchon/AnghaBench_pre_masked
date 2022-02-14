
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int * sensor; struct s5k83a_priv* sensor_priv; } ;
struct s5k83a_priv {struct s5k83a_priv* settings; } ;


 int FUNC_0 (struct s5k83a_priv*) ;
 int FUNC_1 (struct sd*) ;

void FUNC_2(struct sd *VAR_0)
{
 struct s5k83a_priv *VAR_1 = VAR_0->sensor_priv;

 FUNC_1(VAR_0);

 VAR_0->sensor = ((void*)0);
 FUNC_0(VAR_1->settings);
 FUNC_0(VAR_1);
}
