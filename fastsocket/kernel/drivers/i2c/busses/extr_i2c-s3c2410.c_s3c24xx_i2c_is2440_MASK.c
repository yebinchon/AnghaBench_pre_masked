
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c24xx_i2c {int dev; } ;
struct platform_device {int dummy; } ;
typedef enum s3c24xx_i2c_type { ____Placeholder_s3c24xx_i2c_type } s3c24xx_i2c_type ;
struct TYPE_2__ {int driver_data; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct platform_device*) ;
 struct platform_device* FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct s3c24xx_i2c *VAR_1)
{
 struct platform_device *VAR_2 = FUNC_1(VAR_1->dev);
 enum s3c24xx_i2c_type VAR_3;

 VAR_3 = FUNC_0(VAR_2)->driver_data;
 return VAR_3 == VAR_0;
}
