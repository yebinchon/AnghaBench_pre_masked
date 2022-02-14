
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pcf8591_data {int control; int update_lock; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct pcf8591_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,int) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct i2c_client* FUNC_6 (struct device*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_2, int VAR_3)
{
 u8 VAR_4;
 struct i2c_client *VAR_5 = FUNC_6(VAR_2);
 struct pcf8591_data *VAR_6 = FUNC_1(VAR_5);

 FUNC_4(&VAR_6->update_lock);

 if ((VAR_6->control & VAR_0) != VAR_3) {
  VAR_6->control = (VAR_6->control & ~VAR_0)
         | VAR_3;
  FUNC_3(VAR_5, VAR_6->control);



  FUNC_2(VAR_5);
 }
 VAR_4 = FUNC_2(VAR_5);

 FUNC_5(&VAR_6->update_lock);

 if ((VAR_3 == 2 && VAR_1 == 2) ||
     (VAR_3 != 3 && (VAR_1 == 1 || VAR_1 == 3)))
  return (10 * FUNC_0(VAR_4));
 else
  return (10 * VAR_4);
}
