
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stu300_dev {int msg_len; int msg_index; } ;
struct i2c_msg {int dummy; } ;
struct i2c_adapter {int dummy; } ;


 struct stu300_dev* FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct i2c_adapter*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_adapter *VAR_0, struct i2c_msg *VAR_1,
    int VAR_2)
{
 int VAR_3 = -1;
 int VAR_4;

 struct stu300_dev *VAR_5 = FUNC_0(VAR_0);
 VAR_5->msg_len = VAR_2;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {







  VAR_5->msg_index = VAR_4;

  VAR_3 = FUNC_1(VAR_0, &VAR_1[VAR_4], (VAR_4 == (VAR_2 - 1)));

  if (VAR_3 != 0) {
   VAR_2 = VAR_3;
   break;
  }
 }

 return VAR_2;
}
