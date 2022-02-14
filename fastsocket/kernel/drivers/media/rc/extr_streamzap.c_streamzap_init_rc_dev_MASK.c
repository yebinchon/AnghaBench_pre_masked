
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct streamzap_ir {TYPE_3__* usbdev; int phys; int name; struct device* dev; } ;
struct TYPE_6__ {struct device* parent; } ;
struct rc_dev {int map_name; int driver_name; int allowed_protos; int driver_type; struct streamzap_ir* priv; TYPE_2__ dev; int input_id; int input_phys; int input_name; } ;
struct device {int dummy; } ;
struct TYPE_5__ {int idProduct; int idVendor; } ;
struct TYPE_7__ {TYPE_1__ descriptor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int ) ;
 struct rc_dev* FUNC_2 () ;
 int FUNC_3 (struct rc_dev*) ;
 int FUNC_4 (struct rc_dev*) ;
 int FUNC_5 (int ,int,char*,int,int) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (TYPE_3__*,int ,int) ;
 int FUNC_8 (TYPE_3__*,int *) ;

__attribute__((used)) static struct rc_dev *FUNC_9(struct streamzap_ir *VAR_4)
{
 struct rc_dev *VAR_5;
 struct device *VAR_6 = VAR_4->dev;
 int VAR_7;

 VAR_5 = FUNC_2();
 if (!VAR_5) {
  FUNC_0(VAR_6, "remote dev allocation failed\n");
  goto out;
 }

 FUNC_5(VAR_4->name, sizeof(VAR_4->name), "Streamzap PC Remote Infrared "
   "Receiver (%04x:%04x)",
   FUNC_1(VAR_4->usbdev->descriptor.idVendor),
   FUNC_1(VAR_4->usbdev->descriptor.idProduct));
 FUNC_7(VAR_4->usbdev, VAR_4->phys, sizeof(VAR_4->phys));
 FUNC_6(VAR_4->phys, "/input0", sizeof(VAR_4->phys));

 VAR_5->input_name = VAR_4->name;
 VAR_5->input_phys = VAR_4->phys;
 FUNC_8(VAR_4->usbdev, &VAR_5->input_id);
 VAR_5->dev.parent = VAR_6;
 VAR_5->priv = VAR_4;
 VAR_5->driver_type = VAR_1;
 VAR_5->allowed_protos = VAR_3;
 VAR_5->driver_name = VAR_0;
 VAR_5->map_name = VAR_2;

 VAR_7 = FUNC_4(VAR_5);
 if (VAR_7 < 0) {
  FUNC_0(VAR_6, "remote input device register failed\n");
  goto out;
 }

 return VAR_5;

out:
 FUNC_3(VAR_5);
 return ((void*)0);
}
