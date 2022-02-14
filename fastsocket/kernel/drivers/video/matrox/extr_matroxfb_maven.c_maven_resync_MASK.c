
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct maven_data {struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,int,int) ;

__attribute__((used)) static inline int FUNC_1(struct maven_data* VAR_0) {
 struct i2c_client *VAR_1 = VAR_0->client;
 FUNC_0(VAR_1, 0x95, 0x20);
 return 0;
}
