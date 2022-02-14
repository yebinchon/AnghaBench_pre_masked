
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s2250 {int audio; } ;
struct i2c_client {int dummy; } ;


 struct s2250* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct s2250*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct s2250 *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_0, ((void*)0));
 FUNC_2(VAR_1->audio);
 FUNC_3(VAR_1);
 return 0;
}
