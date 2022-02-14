
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int uint8_t ;
struct i2c_client {int dummy; } ;
typedef int addr ;


 int FUNC_0 (struct i2c_client*,int *,int) ;
 int FUNC_1 (struct i2c_client*,int *,int) ;
 int FUNC_2 (struct i2c_client*,char*,int,int ) ;

__attribute__((used)) static uint8_t
FUNC_3(struct i2c_client *VAR_0, uint8_t VAR_1)
{
 uint8_t VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, &VAR_1, sizeof(VAR_1));
 if (VAR_3 < 0)
  goto fail;

 VAR_3 = FUNC_0(VAR_0, &VAR_2, sizeof(VAR_2));
 if (VAR_3 < 0)
  goto fail;

 return VAR_2;

fail:
 FUNC_2(VAR_0, "Error %d reading from subaddress 0x%x\n",
     VAR_3, VAR_1);
 return 0;
}
