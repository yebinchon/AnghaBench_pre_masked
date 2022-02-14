
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovcamchip_window {int quarter; scalar_t__ format; int clockdiv; int width; int height; } ;
struct i2c_client {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct i2c_client*,int,int) ;
 int FUNC_1 (struct i2c_client*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_1, struct ovcamchip_window *VAR_2)
{
 int VAR_3 = VAR_2->quarter;



 FUNC_0(VAR_1, 0x14, VAR_3?0xa4:0x84);



 if (VAR_2->format == VAR_0) {
  FUNC_1(VAR_1, 0x0e, 0x40, 0x40);
  FUNC_1(VAR_1, 0x13, 0x20, 0x20);
 } else {
  FUNC_1(VAR_1, 0x0e, 0x00, 0x40);
  FUNC_1(VAR_1, 0x13, 0x00, 0x20);
 }



 FUNC_0(VAR_1, 0x11, VAR_2->clockdiv);



 if (VAR_2->width == 640 && VAR_2->height == 480)
  FUNC_0(VAR_1, 0x35, 0x9e);
 else
  FUNC_0(VAR_1, 0x35, 0x1e);

 return 0;
}
