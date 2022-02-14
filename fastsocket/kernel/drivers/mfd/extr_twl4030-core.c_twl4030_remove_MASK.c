
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl4030_client {struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct i2c_client*) ;
 int VAR_1 ;
 struct twl4030_client* VAR_2 ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_3)
{
 unsigned VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1();
 if (VAR_5 < 0)
  return VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  struct twl4030_client *VAR_6 = &VAR_2[VAR_4];

  if (VAR_6->client && VAR_6->client != VAR_3)
   FUNC_0(VAR_6->client);
  VAR_2[VAR_4].client = ((void*)0);
 }
 VAR_1 = 0;
 return 0;
}
