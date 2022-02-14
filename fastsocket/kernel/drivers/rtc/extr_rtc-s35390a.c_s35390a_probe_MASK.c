
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct s35390a {int twentyfourhour; struct i2c_client** client; int rtc; } ;
struct rtc_time {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; scalar_t__ addr; int adapter; } ;
typedef int buf ;
struct TYPE_3__ {int name; } ;
struct TYPE_4__ {TYPE_1__ driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 char VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ,int ) ;
 struct i2c_client* FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (struct i2c_client*,struct s35390a*) ;
 int FUNC_7 (struct i2c_client*) ;
 int FUNC_8 (struct s35390a*) ;
 struct s35390a* FUNC_9 (int,int ) ;
 int FUNC_10 (int ,int *,int *,int ) ;
 int FUNC_11 (struct s35390a*) ;
 TYPE_2__ VAR_8 ;
 scalar_t__ FUNC_12 (struct i2c_client*,struct rtc_time*) ;
 int FUNC_13 (struct s35390a*,int ,char*,int) ;
 int FUNC_14 (struct s35390a*) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_10,
    const struct i2c_device_id *VAR_11)
{
 int VAR_12;
 unsigned int VAR_13;
 struct s35390a *VAR_14;
 struct rtc_time VAR_15;
 char VAR_16[1];

 if (!FUNC_4(VAR_10->adapter, VAR_4)) {
  VAR_12 = -VAR_1;
  goto exit;
 }

 VAR_14 = FUNC_9(sizeof(struct s35390a), VAR_3);
 if (!VAR_14) {
  VAR_12 = -VAR_2;
  goto exit;
 }

 VAR_14->client[0] = VAR_10;
 FUNC_6(VAR_10, VAR_14);


 for (VAR_13 = 1; VAR_13 < 8; ++VAR_13) {
  VAR_14->client[VAR_13] = FUNC_5(VAR_10->adapter,
     VAR_10->addr + VAR_13);
  if (!VAR_14->client[VAR_13]) {
   FUNC_2(&VAR_10->dev, "Address %02x unavailable\n",
      VAR_10->addr + VAR_13);
   VAR_12 = -VAR_0;
   goto exit_dummy;
  }
 }

 VAR_12 = FUNC_14(VAR_14);
 if (VAR_12 < 0) {
  FUNC_2(&VAR_10->dev, "error resetting chip\n");
  goto exit_dummy;
 }

 VAR_12 = FUNC_11(VAR_14);
 if (VAR_12 < 0) {
  FUNC_2(&VAR_10->dev, "error disabling test mode\n");
  goto exit_dummy;
 }

 VAR_12 = FUNC_13(VAR_14, VAR_5, VAR_16, sizeof(VAR_16));
 if (VAR_12 < 0) {
  FUNC_2(&VAR_10->dev, "error checking 12/24 hour mode\n");
  goto exit_dummy;
 }
 if (VAR_16[0] & VAR_6)
  VAR_14->twentyfourhour = 1;
 else
  VAR_14->twentyfourhour = 0;

 if (FUNC_12(VAR_10, &VAR_15) < 0)
  FUNC_3(&VAR_10->dev, "clock needs to be set\n");

 VAR_14->rtc = FUNC_10(VAR_8.driver.name,
    &VAR_10->dev, &VAR_9, VAR_7);

 if (FUNC_0(VAR_14->rtc)) {
  VAR_12 = FUNC_1(VAR_14->rtc);
  goto exit_dummy;
 }
 return 0;

exit_dummy:
 for (VAR_13 = 1; VAR_13 < 8; ++VAR_13)
  if (VAR_14->client[VAR_13])
   FUNC_7(VAR_14->client[VAR_13]);
 FUNC_8(VAR_14);
 FUNC_6(VAR_10, ((void*)0));

exit:
 return VAR_12;
}
