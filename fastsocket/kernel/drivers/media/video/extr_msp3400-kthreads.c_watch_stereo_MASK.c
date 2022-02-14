
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msp_state {scalar_t__ watch_stereo; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*) ;
 scalar_t__ FUNC_1 (struct i2c_client*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct i2c_client*) ;
 struct msp_state* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct i2c_client *VAR_1)
{
 struct msp_state *VAR_2 = FUNC_3(FUNC_0(VAR_1));

 if (FUNC_1(VAR_1))
  FUNC_2(VAR_1);

 if (VAR_0)
  VAR_2->watch_stereo = 0;
}
