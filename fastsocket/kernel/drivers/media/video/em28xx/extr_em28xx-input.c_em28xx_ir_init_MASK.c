
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * parent; } ;
struct TYPE_6__ {int version; void* product; void* vendor; int bustype; } ;
struct rc_dev {int allowed_protos; int (* change_protocol ) (struct rc_dev*,int ) ;int driver_name; int * map_name; TYPE_3__ dev; TYPE_1__ input_id; int input_phys; int input_name; int close; int open; struct em28xx_IR* priv; } ;
struct em28xx_IR {int polling; int phys; int name; struct rc_dev* rc; struct em28xx* dev; } ;
struct TYPE_9__ {int * ir_codes; } ;
struct em28xx {char* name; struct em28xx_IR* ir; TYPE_4__ board; TYPE_5__* udev; } ;
struct TYPE_7__ {int idProduct; int idVendor; } ;
struct TYPE_10__ {int dev; TYPE_2__ descriptor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rc_dev*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct em28xx_IR*) ;
 struct em28xx_IR* FUNC_2 (int,int ) ;
 void* FUNC_3 (int ) ;
 struct rc_dev* FUNC_4 () ;
 int FUNC_5 (struct rc_dev*) ;
 int FUNC_6 (struct rc_dev*) ;
 int FUNC_7 (int ,int,char*,char*) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (TYPE_5__*,int ,int) ;

int FUNC_10(struct em28xx *VAR_9)
{
 struct em28xx_IR *VAR_10;
 struct rc_dev *VAR_11;
 int VAR_12 = -VAR_1;

 if (VAR_9->board.ir_codes == ((void*)0)) {

  return 0;
 }

 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_2);
 VAR_11 = FUNC_4();
 if (!VAR_10 || !VAR_11)
  goto err_out_free;


 VAR_10->dev = VAR_9;
 VAR_9->ir = VAR_10;
 VAR_10->rc = VAR_11;





 VAR_11->allowed_protos = VAR_5 | VAR_4;
 VAR_11->priv = VAR_10;
 VAR_11->change_protocol = FUNC_0;
 VAR_11->open = VAR_7;
 VAR_11->close = VAR_8;


 VAR_12 = FUNC_0(VAR_11, VAR_6);
 if (VAR_12)
  goto err_out_free;


 VAR_10->polling = 100;


 FUNC_7(VAR_10->name, sizeof(VAR_10->name), "em28xx IR (%s)",
      VAR_9->name);

 FUNC_9(VAR_9->udev, VAR_10->phys, sizeof(VAR_10->phys));
 FUNC_8(VAR_10->phys, "/input0", sizeof(VAR_10->phys));

 VAR_11->input_name = VAR_10->name;
 VAR_11->input_phys = VAR_10->phys;
 VAR_11->input_id.bustype = VAR_0;
 VAR_11->input_id.version = 1;
 VAR_11->input_id.vendor = FUNC_3(VAR_9->udev->descriptor.idVendor);
 VAR_11->input_id.product = FUNC_3(VAR_9->udev->descriptor.idProduct);
 VAR_11->dev.parent = &VAR_9->udev->dev;
 VAR_11->map_name = VAR_9->board.ir_codes;
 VAR_11->driver_name = VAR_3;


 VAR_12 = FUNC_6(VAR_11);
 if (VAR_12)
  goto err_out_stop;

 return 0;

 err_out_stop:
 VAR_9->ir = ((void*)0);
 err_out_free:
 FUNC_5(VAR_11);
 FUNC_1(VAR_10);
 return VAR_12;
}
