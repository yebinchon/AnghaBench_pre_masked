
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct synaptics_i2c {int client; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 struct synaptics_i2c* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct synaptics_i2c*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct input_dev *VAR_2)
{
 struct synaptics_i2c *VAR_3 = FUNC_0(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_3(VAR_3->client);
 if (VAR_4)
  return VAR_4;

 if (VAR_1)
  FUNC_2(VAR_3,
    FUNC_1(VAR_0));

 return 0;
}
