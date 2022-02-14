
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * parent; } ;
struct TYPE_5__ {int version; int product; scalar_t__ vendor; int bustype; } ;
struct rc_dev {int driver_type; unsigned long allowed_protos; char* map_name; int driver_name; int close; int open; struct cx23885_kernel_ir* priv; TYPE_2__ dev; TYPE_1__ input_id; struct cx23885_kernel_ir* input_phys; struct cx23885_kernel_ir* input_name; } ;
struct cx23885_kernel_ir {struct cx23885_kernel_ir* name; struct cx23885_kernel_ir* phys; struct rc_dev* rc; struct cx23885_dev* cx; } ;
struct cx23885_dev {int board; struct cx23885_kernel_ir* kernel_ir; TYPE_3__* pci; int * sd_ir; } ;
typedef enum rc_driver_type { ____Placeholder_rc_driver_type } rc_driver_type ;
struct TYPE_8__ {int name; } ;
struct TYPE_7__ {int dev; int device; scalar_t__ vendor; int subsystem_device; scalar_t__ subsystem_vendor; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 unsigned long VAR_8 ;
 TYPE_4__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct cx23885_dev*) ;
 void* FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct cx23885_kernel_ir*) ;
 struct cx23885_kernel_ir* FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 struct rc_dev* FUNC_5 () ;
 int FUNC_6 (struct rc_dev*) ;
 int FUNC_7 (struct rc_dev*) ;

int FUNC_8(struct cx23885_dev *VAR_12)
{
 struct cx23885_kernel_ir *VAR_13;
 struct rc_dev *VAR_14;
 char *VAR_15;
 enum rc_driver_type VAR_16;
 unsigned long VAR_17;

 int VAR_18;





 if (VAR_12->sd_ir == ((void*)0))
  return -VAR_1;

 switch (VAR_12->board) {
 case 129:
 case 130:
 case 131:

  VAR_16 = VAR_5;
  VAR_17 = VAR_8;

  VAR_15 = VAR_6;
  break;
 case 128:

  VAR_16 = VAR_5;
  VAR_17 = VAR_8;

  VAR_15 = VAR_7;
  break;
 default:
  return -VAR_1;
 }


 VAR_13 = FUNC_3(sizeof(struct cx23885_kernel_ir), VAR_3);
 if (VAR_13 == ((void*)0))
  return -VAR_2;

 VAR_13->cx = VAR_12;
 VAR_13->name = FUNC_1(VAR_3, "cx23885 IR (%s)",
        VAR_9[VAR_12->board].name);
 VAR_13->phys = FUNC_1(VAR_3, "pci-%s/ir0",
        FUNC_4(VAR_12->pci));


 VAR_14 = FUNC_5();
 if (!VAR_14) {
  VAR_18 = -VAR_2;
  goto err_out_free;
 }

 VAR_13->rc = VAR_14;
 VAR_14->input_name = VAR_13->name;
 VAR_14->input_phys = VAR_13->phys;
 VAR_14->input_id.bustype = VAR_0;
 VAR_14->input_id.version = 1;
 if (VAR_12->pci->subsystem_vendor) {
  VAR_14->input_id.vendor = VAR_12->pci->subsystem_vendor;
  VAR_14->input_id.product = VAR_12->pci->subsystem_device;
 } else {
  VAR_14->input_id.vendor = VAR_12->pci->vendor;
  VAR_14->input_id.product = VAR_12->pci->device;
 }
 VAR_14->dev.parent = &VAR_12->pci->dev;
 VAR_14->driver_type = VAR_16;
 VAR_14->allowed_protos = VAR_17;
 VAR_14->priv = VAR_13;
 VAR_14->open = VAR_11;
 VAR_14->close = VAR_10;
 VAR_14->map_name = VAR_15;
 VAR_14->driver_name = VAR_4;


 VAR_12->kernel_ir = VAR_13;
 VAR_18 = FUNC_7(VAR_14);
 if (VAR_18)
  goto err_out_stop;

 return 0;

err_out_stop:
 FUNC_0(VAR_12);
 VAR_12->kernel_ir = ((void*)0);
 FUNC_6(VAR_14);
err_out_free:
 FUNC_2(VAR_13->phys);
 FUNC_2(VAR_13->name);
 FUNC_2(VAR_13);
 return VAR_18;
}
