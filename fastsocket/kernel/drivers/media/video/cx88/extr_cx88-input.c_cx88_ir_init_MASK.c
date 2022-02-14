
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
struct TYPE_6__ {int * parent; } ;
struct TYPE_5__ {int version; int product; scalar_t__ vendor; int bustype; } ;
struct rc_dev {char* map_name; int timeout; int allowed_protos; int driver_type; void* scanmask; int close; int open; struct cx88_core* priv; int driver_name; TYPE_3__ dev; TYPE_2__ input_id; int input_phys; int input_name; } ;
struct pci_dev {int dev; int device; scalar_t__ vendor; int subsystem_device; scalar_t__ subsystem_vendor; } ;
struct TYPE_4__ {char* name; } ;
struct cx88_core {int boardnr; struct cx88_IR* ir; TYPE_1__ board; } ;
struct cx88_IR {int mask_keycode; int mask_keyup; int polling; int sampling; int mask_keydown; struct cx88_core* core; int phys; int name; void* gpio_addr; struct rc_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;
 char* VAR_13 ;
 char* VAR_14 ;
 char* VAR_15 ;
 char* VAR_16 ;
 char* VAR_17 ;
 char* VAR_18 ;
 char* VAR_19 ;
 char* VAR_20 ;
 char* VAR_21 ;
 char* VAR_22 ;
 char* VAR_23 ;
 char* VAR_24 ;
 char* VAR_25 ;
 char* VAR_26 ;
 char* VAR_27 ;
 char* VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_0 (struct cx88_IR*) ;
 struct cx88_IR* FUNC_1 (int,int ) ;
 char* FUNC_2 (struct pci_dev*) ;
 struct rc_dev* FUNC_3 () ;
 int FUNC_4 (struct rc_dev*) ;
 int FUNC_5 (struct rc_dev*) ;
 int FUNC_6 (int ,int,char*,char*) ;

int FUNC_7(struct cx88_core *VAR_33, struct pci_dev *VAR_34)
{
 struct cx88_IR *VAR_35;
 struct rc_dev *VAR_36;
 char *VAR_37 = ((void*)0);
 u64 VAR_38 = VAR_30;
 int VAR_39 = -VAR_2;
 u32 VAR_40 = 0;



 VAR_35 = FUNC_1(sizeof(*VAR_35), VAR_3);
 VAR_36 = FUNC_3();
 if (!VAR_35 || !VAR_36)
  goto err_out_free;

 VAR_35->dev = VAR_36;


 switch (VAR_33->boardnr) {
 case 170:
 case 158:
 case 157:
  VAR_37 = VAR_14;
  VAR_35->gpio_addr = VAR_6;
  VAR_35->mask_keycode = 0x1f;
  VAR_35->mask_keyup = 0x60;
  VAR_35->polling = 50;
  break;
 case 137:
  VAR_37 = VAR_12;
  VAR_35->sampling = 0xeb04;
  break;
 case 168:
 case 167:
 case 161:
 case 160:
 case 166:
 case 165:
 case 164:
 case 163:
 case 151:
 case 150:
 case 162:
  VAR_37 = VAR_15;
  VAR_35->sampling = 1;
  break;
 case 130:
 case 129:
 case 131:
  VAR_37 = VAR_28;
  VAR_35->gpio_addr = VAR_5;
  VAR_35->mask_keycode = 0x8f8;
  VAR_35->mask_keyup = 0x100;
  VAR_35->polling = 50;
  break;
 case 133:
 case 132:
 case 128:
  VAR_37 = VAR_28;
  VAR_35->gpio_addr = VAR_5;
  VAR_35->mask_keycode = 0x8f8;
  VAR_35->mask_keyup = 0x100;
  VAR_35->polling = 1;
  break;
 case 159:
  VAR_37 = VAR_16;
  VAR_35->gpio_addr = VAR_5;
  VAR_35->mask_keycode = 0xfd;
  VAR_35->mask_keydown = 0x02;
  VAR_35->polling = 5;
  break;
 case 143:
 case 148:







  VAR_37 = VAR_22;
  VAR_35->gpio_addr = VAR_6;
  VAR_35->mask_keyup = 0x80;
  VAR_35->polling = 10;
  VAR_40 = 0x3f;
  break;
 case 142:
 case 141:
  VAR_37 = VAR_23;
  VAR_35->gpio_addr = VAR_6;
  VAR_35->mask_keycode = 0x3f;
  VAR_35->mask_keyup = 0x80;
  VAR_35->polling = 1;
  break;
 case 156:
  VAR_37 = VAR_21;
  VAR_35->gpio_addr = VAR_6;
  VAR_35->mask_keycode = 0x1f;
  VAR_35->mask_keyup = 0x60;
  VAR_35->polling = 1;
  break;
 case 173:
  VAR_37 = VAR_10;
  VAR_35->gpio_addr = VAR_6;
  VAR_35->mask_keycode = 0xbf;
  VAR_35->mask_keyup = 0x40;
  VAR_35->polling = 50;
  break;
 case 155:
  VAR_37 = VAR_17;
  VAR_35->gpio_addr = VAR_6;
  VAR_35->mask_keycode = 0x1f;
  VAR_35->mask_keyup = 0x40;
  VAR_35->polling = 1;
  break;
 case 172:
 case 171:
  VAR_37 = VAR_11;
  VAR_35->gpio_addr = VAR_7;
  VAR_35->mask_keycode = 0xfb;
  VAR_35->mask_keydown = 0x02;
  VAR_35->polling = 50;
  break;
 case 152:
 case 140:
 case 138:
 case 139:
 case 145:
 case 144:
 case 146:
  VAR_37 = VAR_25;
  VAR_35->sampling = 0xff00;
  break;
 case 135:
 case 136:
  VAR_37 = VAR_26;
  VAR_35->sampling = 0xff00;
  break;
 case 169:
  VAR_37 = VAR_13;
  VAR_35->sampling = 0xff00;
  break;
 case 154:
  VAR_37 = VAR_18;
  VAR_35->gpio_addr = VAR_6;
  VAR_35->mask_keycode = 0x0e;
  VAR_35->mask_keyup = 0x80;
  VAR_35->polling = 50;
  break;
 case 153:
  VAR_37 = VAR_19;
  VAR_35->gpio_addr = VAR_5;
  VAR_35->mask_keycode = 0xfa;
  VAR_35->polling = 50;
  break;
 case 149:
  VAR_37 = VAR_20;
  VAR_35->sampling = 1;
  break;
 case 147:
  VAR_37 = VAR_24;
  VAR_35->gpio_addr = VAR_7;
  VAR_35->mask_keycode = 0x7e;
  VAR_35->polling = 100;
  break;
 case 134:
  VAR_37 = VAR_27;
  VAR_38 = VAR_29;
  VAR_35->sampling = 0xff00;
  break;
 }

 if (!VAR_37) {
  VAR_39 = -VAR_1;
  goto err_out_free;
 }
 if (VAR_40 && !VAR_35->mask_keycode)
  VAR_35->mask_keycode = VAR_40;


 FUNC_6(VAR_35->name, sizeof(VAR_35->name), "cx88 IR (%s)", VAR_33->board.name);
 FUNC_6(VAR_35->phys, sizeof(VAR_35->phys), "pci-%s/ir0", FUNC_2(VAR_34));

 VAR_36->input_name = VAR_35->name;
 VAR_36->input_phys = VAR_35->phys;
 VAR_36->input_id.bustype = VAR_0;
 VAR_36->input_id.version = 1;
 if (VAR_34->subsystem_vendor) {
  VAR_36->input_id.vendor = VAR_34->subsystem_vendor;
  VAR_36->input_id.product = VAR_34->subsystem_device;
 } else {
  VAR_36->input_id.vendor = VAR_34->vendor;
  VAR_36->input_id.product = VAR_34->device;
 }
 VAR_36->dev.parent = &VAR_34->dev;
 VAR_36->map_name = VAR_37;
 VAR_36->driver_name = VAR_4;
 VAR_36->priv = VAR_33;
 VAR_36->open = VAR_32;
 VAR_36->close = VAR_31;
 VAR_36->scanmask = VAR_40;

 if (VAR_35->sampling) {
  VAR_36->driver_type = VAR_8;
  VAR_36->timeout = 10 * 1000 * 1000;
 } else {
  VAR_36->driver_type = VAR_9;
  VAR_36->allowed_protos = VAR_38;
 }

 VAR_35->core = VAR_33;
 VAR_33->ir = VAR_35;


 VAR_39 = FUNC_5(VAR_36);
 if (VAR_39)
  goto err_out_free;

 return 0;

err_out_free:
 FUNC_4(VAR_36);
 VAR_33->ir = ((void*)0);
 FUNC_0(VAR_35);
 return VAR_39;
}
