
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct backlight_device {int dummy; } ;
struct adxbl {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 struct adxbl* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_1)
{
 struct adxbl *VAR_2 = FUNC_0(VAR_1);
 u32 VAR_3;

 VAR_3 = FUNC_1(VAR_2->base + VAR_0);
 return VAR_3 & 0xff;
}
