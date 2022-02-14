
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct synaptics_i2c {int client; int dwork; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct synaptics_i2c* FUNC_1 (struct input_dev*) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct input_dev *VAR_4)
{
 struct synaptics_i2c *VAR_5 = FUNC_1(VAR_4);

 if (!VAR_3)
  FUNC_2(VAR_5->client, VAR_2, 0);

 FUNC_0(&VAR_5->dwork);


 FUNC_2(VAR_5->client, VAR_1, VAR_0);
}
