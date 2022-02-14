
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {struct device* parent; } ;
struct rc_dev {scalar_t__ map_name; int driver_name; int tx_ir; int s_tx_carrier; int s_tx_mask; int timeout; int allowed_protos; int driver_type; struct mceusb_dev* priv; TYPE_2__ dev; int input_id; int input_phys; int input_name; } ;
struct TYPE_9__ {int no_tx; } ;
struct mceusb_dev {size_t model; TYPE_3__ flags; TYPE_4__* usbdev; int phys; int name; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_11__ {char* name; scalar_t__ rc_map; } ;
struct TYPE_7__ {int idProduct; int idVendor; } ;
struct TYPE_10__ {TYPE_1__ descriptor; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int ) ;
 TYPE_6__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct rc_dev* FUNC_3 () ;
 int FUNC_4 (struct rc_dev*) ;
 int FUNC_5 (struct rc_dev*) ;
 int FUNC_6 (int ,int,char*,char*,int,int) ;
 int FUNC_7 (TYPE_4__*,int ,int) ;
 int FUNC_8 (TYPE_4__*,int *) ;

__attribute__((used)) static struct rc_dev *FUNC_9(struct mceusb_dev *VAR_8)
{
 struct device *VAR_9 = VAR_8->dev;
 struct rc_dev *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_3();
 if (!VAR_10) {
  FUNC_1(VAR_9, "remote dev allocation failed\n");
  goto out;
 }

 FUNC_6(VAR_8->name, sizeof(VAR_8->name), "%s (%04x:%04x)",
   VAR_4[VAR_8->model].name ?
   VAR_4[VAR_8->model].name :
   "Media Center Ed. eHome Infrared Remote Transceiver",
   FUNC_2(VAR_8->usbdev->descriptor.idVendor),
   FUNC_2(VAR_8->usbdev->descriptor.idProduct));

 FUNC_7(VAR_8->usbdev, VAR_8->phys, sizeof(VAR_8->phys));

 VAR_10->input_name = VAR_8->name;
 VAR_10->input_phys = VAR_8->phys;
 FUNC_8(VAR_8->usbdev, &VAR_10->input_id);
 VAR_10->dev.parent = VAR_9;
 VAR_10->priv = VAR_8;
 VAR_10->driver_type = VAR_1;
 VAR_10->allowed_protos = VAR_3;
 VAR_10->timeout = FUNC_0(1000);
 if (!VAR_8->flags.no_tx) {
  VAR_10->s_tx_mask = VAR_6;
  VAR_10->s_tx_carrier = VAR_5;
  VAR_10->tx_ir = VAR_7;
 }
 VAR_10->driver_name = VAR_0;
 VAR_10->map_name = VAR_4[VAR_8->model].rc_map ?
   VAR_4[VAR_8->model].rc_map : VAR_2;

 VAR_11 = FUNC_5(VAR_10);
 if (VAR_11 < 0) {
  FUNC_1(VAR_9, "remote dev registration failed\n");
  goto out;
 }

 return VAR_10;

out:
 FUNC_4(VAR_10);
 return ((void*)0);
}
