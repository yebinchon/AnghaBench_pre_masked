
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ovcamchip_window {scalar_t__ format; int clockdiv; scalar_t__ quarter; } ;
struct i2c_client {TYPE_1__* adapter; } ;
struct TYPE_2__ {scalar_t__ id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct i2c_client*,int,int) ;
 int FUNC_1 (struct i2c_client*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_2, struct ovcamchip_window *VAR_3)
{


 FUNC_0(VAR_2, 0x14, VAR_3->quarter?0x24:0x04);




 if (VAR_2->adapter->id == VAR_0) {
  if (VAR_3->format == VAR_1)
   FUNC_1(VAR_2, 0x13, 0x00, 0x20);
  else
   FUNC_1(VAR_2, 0x13, 0x20, 0x20);
 } else {
  if (VAR_3->format == VAR_1)
   FUNC_1(VAR_2, 0x13, 0x20, 0x20);
  else
   FUNC_1(VAR_2, 0x13, 0x00, 0x20);
 }







 FUNC_0(VAR_2, 0x2a, 0x04);

 FUNC_0(VAR_2, 0x11, VAR_3->clockdiv);

 FUNC_0(VAR_2, 0x2a, 0x84);



 FUNC_0(VAR_2, 0x2d, 0x85);

 return 0;
}
