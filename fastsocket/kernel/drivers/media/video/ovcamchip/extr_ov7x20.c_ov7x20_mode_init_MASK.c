
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovcamchip_window {int quarter; int clockdiv; } ;
struct ovcamchip {int mono; } ;
struct i2c_client {int dummy; } ;


 struct ovcamchip* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int,int) ;
 int FUNC_2 (struct i2c_client*,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0, struct ovcamchip_window *VAR_1)
{
 struct ovcamchip *VAR_2 = FUNC_0(VAR_0);
 int VAR_3 = VAR_1->quarter;


 FUNC_2(VAR_0, 0x14, VAR_3?0x20:0x00, 0x20);
 FUNC_2(VAR_0, 0x28, VAR_3?0x00:0x20, 0x20);
 FUNC_1(VAR_0, 0x24, VAR_3?0x20:0x3a);
 FUNC_1(VAR_0, 0x25, VAR_3?0x30:0x60);
 FUNC_2(VAR_0, 0x2d, VAR_3?0x40:0x00, 0x40);
 if (!VAR_2->mono)
  FUNC_2(VAR_0, 0x67, VAR_3?0xf0:0x90, 0xf0);
 FUNC_2(VAR_0, 0x74, VAR_3?0x20:0x00, 0x20);



 FUNC_1(VAR_0, 0x11, VAR_1->clockdiv);

 return 0;
}
