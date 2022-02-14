
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,unsigned char) ;

__attribute__((used)) static inline int FUNC_1(struct i2c_client *VAR_0, unsigned char VAR_1,
     unsigned char *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 *VAR_2 = (unsigned char) VAR_3;
 return VAR_3;
}
