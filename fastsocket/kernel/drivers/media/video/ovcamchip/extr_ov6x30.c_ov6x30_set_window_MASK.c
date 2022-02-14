
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovcamchip_window {int x; int width; int y; int height; scalar_t__ quarter; } ;
struct i2c_client {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct i2c_client*,struct ovcamchip_window*) ;
 int FUNC_1 (struct i2c_client*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_4, struct ovcamchip_window *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;

 VAR_6 = FUNC_0(VAR_4, VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_5->quarter) {
  VAR_7 = 0;
  VAR_8 = 0;
 } else {
  VAR_7 = 1;
  VAR_8 = 1;
 }

 FUNC_1(VAR_4, 0x17, VAR_1 + (VAR_5->x >> VAR_7));
 FUNC_1(VAR_4, 0x18, VAR_0 + ((VAR_5->x + VAR_5->width) >> VAR_7));
 FUNC_1(VAR_4, 0x19, VAR_3 + (VAR_5->y >> VAR_8));
 FUNC_1(VAR_4, 0x1a, VAR_2 + ((VAR_5->y + VAR_5->height) >> VAR_8));

 return 0;
}
