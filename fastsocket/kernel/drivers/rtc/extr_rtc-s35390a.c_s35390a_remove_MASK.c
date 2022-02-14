
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s35390a {int rtc; scalar_t__* client; } ;
struct i2c_client {int dummy; } ;


 struct s35390a* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct s35390a*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_0)
{
 unsigned int VAR_1;

 struct s35390a *VAR_2 = FUNC_0(VAR_0);
 for (VAR_1 = 1; VAR_1 < 8; ++VAR_1)
  if (VAR_2->client[VAR_1])
   FUNC_2(VAR_2->client[VAR_1]);

 FUNC_4(VAR_2->rtc);
 FUNC_3(VAR_2);
 FUNC_1(VAR_0, ((void*)0));

 return 0;
}
