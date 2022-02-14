
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct at24_data {struct i2c_client** client; TYPE_1__ chip; } ;


 int VAR_0 ;

__attribute__((used)) static struct i2c_client *FUNC_0(struct at24_data *VAR_1,
  unsigned *VAR_2)
{
 unsigned VAR_3;

 if (VAR_1->chip.flags & VAR_0) {
  VAR_3 = *VAR_2 >> 16;
  *VAR_2 &= 0xffff;
 } else {
  VAR_3 = *VAR_2 >> 8;
  *VAR_2 &= 0xff;
 }

 return VAR_1->client[VAR_3];
}
