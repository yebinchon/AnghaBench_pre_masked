
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {struct s5k83a_priv* sensor_priv; } ;
struct s5k83a_priv {scalar_t__ rotation_thread; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct sd*,int ) ;

int FUNC_2(struct sd *VAR_0)
{
 struct s5k83a_priv *VAR_1 = VAR_0->sensor_priv;

 if (VAR_1->rotation_thread)
  FUNC_0(VAR_1->rotation_thread);

 return FUNC_1(VAR_0, 0);
}
