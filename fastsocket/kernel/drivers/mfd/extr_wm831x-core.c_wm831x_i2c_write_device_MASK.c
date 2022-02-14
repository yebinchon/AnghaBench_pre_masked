
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x {struct i2c_client* control_data; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 unsigned short FUNC_0 (unsigned short) ;
 int FUNC_1 (struct i2c_client*,unsigned char*,int) ;
 int FUNC_2 (unsigned char*,void*,int) ;

__attribute__((used)) static int FUNC_3(struct wm831x *VAR_1, unsigned short VAR_2,
       int VAR_3, void *VAR_4)
{
 struct i2c_client *VAR_5 = VAR_1->control_data;
 unsigned char VAR_6[VAR_3 + 2];
 int VAR_7;

 VAR_2 = FUNC_0(VAR_2);
 FUNC_2(&VAR_6[0], &VAR_2, 2);
 FUNC_2(&VAR_6[2], VAR_4, VAR_3);

 VAR_7 = FUNC_1(VAR_5, VAR_6, VAR_3 + 2);
 if (VAR_7 < 0)
  return VAR_7;
 if (VAR_7 < VAR_3 + 2)
  return -VAR_0;

 return 0;
}
