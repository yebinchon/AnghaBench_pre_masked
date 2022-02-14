
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int len; scalar_t__ addr; int flags; int* buf; } ;
struct i2c_adapter {int dummy; } ;
struct go7007 {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct go7007*,scalar_t__,int,int,int,int*) ;
 struct go7007* FUNC_1 (struct i2c_adapter*) ;

__attribute__((used)) static int FUNC_2(struct i2c_adapter *VAR_1,
     struct i2c_msg VAR_2[], int VAR_3)
{
 struct go7007 *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5) {


  if (VAR_2[VAR_5].len == 2) {
   if (VAR_5 + 1 == VAR_3 || VAR_2[VAR_5].addr != VAR_2[VAR_5 + 1].addr ||
     (VAR_2[VAR_5].flags & VAR_0) ||
     !(VAR_2[VAR_5 + 1].flags & VAR_0) ||
     VAR_2[VAR_5 + 1].len != 1)
    return -1;
   if (FUNC_0(VAR_4, VAR_2[VAR_5].addr, 1,
     (VAR_2[VAR_5].buf[0] << 8) | VAR_2[VAR_5].buf[1],
     0x01, &VAR_2[VAR_5 + 1].buf[0]) < 0)
    return -1;
   ++VAR_5;
  } else if (VAR_2[VAR_5].len == 3) {
   if (VAR_2[VAR_5].flags & VAR_0)
    return -1;
   if (VAR_2[VAR_5].len != 3)
    return -1;
   if (FUNC_0(VAR_4, VAR_2[VAR_5].addr, 0,
     (VAR_2[VAR_5].buf[0] << 8) | VAR_2[VAR_5].buf[1],
     0x01, &VAR_2[VAR_5].buf[2]) < 0)
    return -1;
  } else
   return -1;
 }

 return 0;
}
