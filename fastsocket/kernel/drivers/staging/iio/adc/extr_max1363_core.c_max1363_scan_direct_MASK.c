
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max1363_state {TYPE_1__* current_mode; struct i2c_client* client; } ;
struct iio_dev {struct max1363_state* dev_data; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int numvals; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct i2c_client*,char*,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
       struct device_attribute *VAR_3,
       char *VAR_4)
{
 struct iio_dev *VAR_5 = FUNC_0(VAR_2);
 struct max1363_state *VAR_6 = VAR_5->dev_data;
 int VAR_7 = 0, VAR_8, VAR_9;
 struct i2c_client *VAR_10 = VAR_6->client;
 char *VAR_11;

 if (VAR_6->current_mode->numvals == 0)
  return 0;
 VAR_11 = FUNC_3(VAR_6->current_mode->numvals*2, VAR_1);
 if (VAR_11 == ((void*)0))
  return -VAR_0;



 VAR_8 = FUNC_1(VAR_10, VAR_11, VAR_6->current_mode->numvals*2);

 if (VAR_8 < 0)
  return VAR_8;
 for (VAR_9 = 0; VAR_9 < VAR_6->current_mode->numvals; VAR_9++)
  VAR_7 += FUNC_4(VAR_4+VAR_7, "%d ",
          ((int)(VAR_11[VAR_9*2+0]&0x0F) << 8)
          + ((int)(VAR_11[VAR_9*2+1])));
 FUNC_2(VAR_11);
 VAR_7 += FUNC_4(VAR_4 + VAR_7, "\n");

 return VAR_7;
}
