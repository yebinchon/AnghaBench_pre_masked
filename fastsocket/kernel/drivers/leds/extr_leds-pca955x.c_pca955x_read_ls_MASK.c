
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pca955x_led {TYPE_1__* chipdef; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int bits; } ;


 struct pca955x_led* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static u8 FUNC_3(struct i2c_client *VAR_0, int VAR_1)
{
 struct pca955x_led *VAR_2 = FUNC_0(VAR_0);

 return (u8) FUNC_1(VAR_0,
  FUNC_2(VAR_2->chipdef->bits) + 4 + VAR_1);
}
