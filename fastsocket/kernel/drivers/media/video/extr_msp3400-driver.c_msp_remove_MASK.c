
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msp_state {int restart; int hdl; scalar_t__ kthread; int sd; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct msp_state*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct i2c_client*) ;
 struct msp_state* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_0)
{
 struct msp_state *VAR_1 = FUNC_4(FUNC_0(VAR_0));

 FUNC_6(&VAR_1->sd);

 if (VAR_1->kthread) {
  VAR_1->restart = 1;
  FUNC_2(VAR_1->kthread);
 }
 FUNC_3(VAR_0);

 FUNC_5(&VAR_1->hdl);
 FUNC_1(VAR_1);
 return 0;
}
