
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcd_device {int dev; } ;
struct corgi_lcd {int power; } ;


 struct corgi_lcd* FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct lcd_device *VAR_0)
{
 struct corgi_lcd *VAR_1 = FUNC_0(&VAR_0->dev);

 return VAR_1->power;
}
