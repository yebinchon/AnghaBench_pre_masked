
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm831x {struct i2c_client* control_data; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned short) ;
 int FUNC_1 (struct i2c_client*,void*,int) ;
 int FUNC_2 (struct i2c_client*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_3(struct wm831x *VAR_1, unsigned short VAR_2,
      int VAR_3, void *VAR_4)
{
 struct i2c_client *VAR_5 = VAR_1->control_data;
 int VAR_6;
 u16 VAR_7 = FUNC_0(VAR_2);

 VAR_6 = FUNC_2(VAR_5, (unsigned char *)&VAR_7, 2);
 if (VAR_6 < 0)
  return VAR_6;
 if (VAR_6 != 2)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_5, VAR_4, VAR_3);
 if (VAR_6 < 0)
  return VAR_6;
 if (VAR_6 != VAR_3)
  return -VAR_0;
 return 0;
}
