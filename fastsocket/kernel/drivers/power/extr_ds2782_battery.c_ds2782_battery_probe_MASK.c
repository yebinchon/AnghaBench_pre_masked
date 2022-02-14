
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;
struct TYPE_3__ {struct ds2782_info* name; } ;
struct ds2782_info {TYPE_1__ battery; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct i2c_client*,struct ds2782_info*) ;
 int FUNC_3 (int *,struct i2c_client*,int*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int) ;
 struct ds2782_info* FUNC_6 (int ,char*,int) ;
 int FUNC_7 (struct ds2782_info*) ;
 struct ds2782_info* FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_4,
    const struct i2c_device_id *VAR_5)
{
 struct ds2782_info *VAR_6;
 int VAR_7;
 int VAR_8;


 VAR_7 = FUNC_4(&VAR_2, VAR_1);
 if (VAR_7 == 0) {
  VAR_7 = -VAR_0;
  goto fail_id;
 }

 FUNC_9(&VAR_3);
 VAR_7 = FUNC_3(&VAR_2, VAR_4, &VAR_8);
 FUNC_10(&VAR_3);
 if (VAR_7 < 0)
  goto fail_id;

 VAR_6 = FUNC_8(sizeof(*VAR_6), VAR_1);
 if (!VAR_6) {
  VAR_7 = -VAR_0;
  goto fail_info;
 }

 VAR_6->battery.name = FUNC_6(VAR_1, "ds2782-%d", VAR_8);
 if (!VAR_6->battery.name) {
  VAR_7 = -VAR_0;
  goto fail_name;
 }

 FUNC_2(VAR_4, VAR_6);
 VAR_6->client = VAR_4;
 FUNC_1(&VAR_6->battery);

 VAR_7 = FUNC_11(&VAR_4->dev, &VAR_6->battery);
 if (VAR_7) {
  FUNC_0(&VAR_4->dev, "failed to register battery\n");
  goto fail_register;
 }

 return 0;

fail_register:
 FUNC_7(VAR_6->battery.name);
fail_name:
 FUNC_2(VAR_4, VAR_6);
 FUNC_7(VAR_6);
fail_info:
 FUNC_9(&VAR_3);
 FUNC_5(&VAR_2, VAR_8);
 FUNC_10(&VAR_3);
fail_id:
 return VAR_7;
}
