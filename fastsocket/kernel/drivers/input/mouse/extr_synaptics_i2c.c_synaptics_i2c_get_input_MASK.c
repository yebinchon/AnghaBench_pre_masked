
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct synaptics_i2c {int client; struct input_dev* input; } ;
struct input_dev {int dummy; } ;
typedef int s8 ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct input_dev*,int ,int) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static bool FUNC_6(struct synaptics_i2c *VAR_7)
{
 struct input_dev *VAR_8 = VAR_7->input;
 int VAR_9, VAR_10;
 s32 VAR_11;
 s8 VAR_12, VAR_13;


 if (FUNC_3(VAR_7->client))
  return 0;


 VAR_11 = FUNC_4(VAR_7->client, VAR_1);
 VAR_10 = (VAR_11 >> VAR_2) & 0x1;





 VAR_9 = FUNC_5(VAR_7->client, VAR_5) & 0xffff;


 VAR_12 = VAR_9 & 0xff;
 VAR_13 = (VAR_9 >> VAR_3) & 0xff;


 FUNC_0(VAR_8, VAR_0, VAR_10);


 FUNC_1(VAR_8, VAR_4, VAR_12);
 FUNC_1(VAR_8, VAR_6, -VAR_13);
 FUNC_2(VAR_8);

 return VAR_9 || VAR_10;
}
