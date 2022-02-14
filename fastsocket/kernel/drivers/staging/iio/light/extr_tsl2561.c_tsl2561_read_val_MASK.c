
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tsl2561_state {int command_buf_lock; TYPE_1__* command_buf; int client; } ;
struct iio_dev_attr {int address; } ;
struct iio_dev {struct tsl2561_state* dev_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int cmd; int word; int address; } ;


 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,char) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,int) ;
 struct iio_dev_attr* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_0,
    struct device_attribute *VAR_1,
    char *VAR_2)
{
 int VAR_3 = 0, VAR_4;
 ssize_t VAR_5 = 0;
 struct iio_dev_attr *VAR_6 = FUNC_5(VAR_1);
 struct iio_dev *VAR_7 = FUNC_0(VAR_0);
 struct tsl2561_state *VAR_8 = VAR_7->dev_data;

 FUNC_2(&VAR_8->command_buf_lock);
 VAR_8->command_buf->cmd = 1;
 VAR_8->command_buf->word = 1;
 VAR_8->command_buf->address = VAR_6->address;

 VAR_4 = FUNC_1(VAR_8->client, *(char *)(VAR_8->command_buf));
 if (VAR_4 < 0) {
  VAR_3 = VAR_4;
  goto error_ret;
 }
 VAR_5 = FUNC_4(VAR_2, "%u\n", VAR_4);

error_ret:
 FUNC_3(&VAR_8->command_buf_lock);

 return VAR_3 ? VAR_3 : VAR_5;
}
