
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * parent; } ;
struct TYPE_9__ {struct TYPE_9__* adapter; struct cx231xx_i2c* algo_data; struct cx231xx_i2c* data; int name; TYPE_1__ dev; } ;
struct cx231xx_i2c {scalar_t__ i2c_rc; int nr; TYPE_3__ i2c_client; TYPE_3__ i2c_adap; TYPE_3__ i2c_algo; struct cx231xx* dev; } ;
struct cx231xx {int name; int v4l2_dev; TYPE_2__* udev; int cx231xx_send_usb_command; } ;
struct TYPE_8__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct cx231xx*,TYPE_3__*) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (TYPE_3__*,int *) ;
 int FUNC_5 (TYPE_3__*,int *,int) ;
 int FUNC_6 (int ,int ,int) ;

int FUNC_7(struct cx231xx_i2c *VAR_4)
{
 struct cx231xx *VAR_5 = VAR_4->dev;

 FUNC_0(!VAR_5->cx231xx_send_usb_command);

 FUNC_5(&VAR_4->i2c_adap, &VAR_0, sizeof(VAR_4->i2c_adap));
 FUNC_5(&VAR_4->i2c_algo, &VAR_1, sizeof(VAR_4->i2c_algo));
 FUNC_5(&VAR_4->i2c_client, &VAR_2,
        sizeof(VAR_4->i2c_client));

 VAR_4->i2c_adap.dev.parent = &VAR_5->udev->dev;

 FUNC_6(VAR_4->i2c_adap.name, VAR_4->dev->name, sizeof(VAR_4->i2c_adap.name));

 VAR_4->i2c_algo.data = VAR_4;
 VAR_4->i2c_adap.algo_data = VAR_4;
 FUNC_4(&VAR_4->i2c_adap, &VAR_5->v4l2_dev);
 FUNC_3(&VAR_4->i2c_adap);

 VAR_4->i2c_client.adapter = &VAR_4->i2c_adap;

 if (0 == VAR_4->i2c_rc) {
  if (VAR_3)
   FUNC_1(VAR_5, &VAR_4->i2c_client);
 } else
  FUNC_2("%s: i2c bus %d register FAILED\n",
        VAR_5->name, VAR_4->nr);

 return VAR_4->i2c_rc;
}
