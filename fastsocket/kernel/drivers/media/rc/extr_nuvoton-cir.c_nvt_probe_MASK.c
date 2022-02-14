
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int version; int product; int vendor; int bustype; } ;
struct rc_dev {char* input_name; void* tx_resolution; void* rx_resolution; void* timeout; void* max_timeout; void* min_timeout; int map_name; int driver_name; TYPE_2__ input_id; int s_tx_carrier; int tx_ir; int close; int open; int allowed_protos; int driver_type; struct nvt_dev* priv; } ;
struct pnp_device_id {int dummy; } ;
struct pnp_dev {int dev; } ;
struct TYPE_3__ {int queue; int lock; } ;
struct nvt_dev {void* cir_wake_addr; scalar_t__ cir_wake_irq; void* cir_addr; scalar_t__ cir_irq; struct rc_dev* rdev; int chip_minor; int chip_major; TYPE_1__ tx; struct pnp_dev* pdev; int rawir; int nvt_lock; int cr_efdr; int cr_efir; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 int FUNC_0 (struct nvt_dev*) ;
 int FUNC_1 (struct nvt_dev*) ;
 scalar_t__ VAR_16 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (scalar_t__,struct nvt_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct nvt_dev*) ;
 struct nvt_dev* FUNC_9 (int,int ) ;
 int VAR_17 ;
 int FUNC_10 (struct nvt_dev*) ;
 int FUNC_11 (struct nvt_dev*) ;
 int VAR_18 ;
 int FUNC_12 (struct nvt_dev*) ;
 int FUNC_13 (struct nvt_dev*) ;
 int VAR_19 ;
 int FUNC_14 (struct nvt_dev*) ;
 int FUNC_15 (struct nvt_dev*) ;
 int FUNC_16 (struct nvt_dev*) ;
 int VAR_20 ;
 int FUNC_17 (int ,char*) ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_18 (struct pnp_dev*,int ) ;
 int FUNC_19 (struct pnp_dev*,int ) ;
 scalar_t__ FUNC_20 (struct pnp_dev*,int) ;
 void* FUNC_21 (struct pnp_dev*,int) ;
 int FUNC_22 (struct pnp_dev*,int) ;
 int FUNC_23 (struct pnp_dev*,struct nvt_dev*) ;
 struct rc_dev* FUNC_24 () ;
 int FUNC_25 (struct rc_dev*) ;
 int FUNC_26 (struct rc_dev*) ;
 int FUNC_27 (void*,scalar_t__) ;
 scalar_t__ FUNC_28 (scalar_t__,int ,int ,int ,void*) ;
 int FUNC_29 (void*,scalar_t__,int ) ;
 int FUNC_30 (int *) ;

__attribute__((used)) static int FUNC_31(struct pnp_dev *VAR_23, const struct pnp_device_id *VAR_24)
{
 struct nvt_dev *VAR_25;
 struct rc_dev *VAR_26;
 int VAR_27 = -VAR_6;

 VAR_25 = FUNC_9(sizeof(struct nvt_dev), VAR_7);
 if (!VAR_25)
  return VAR_27;


 VAR_26 = FUNC_24();
 if (!VAR_26)
  goto failure;

 VAR_27 = -VAR_5;

 if (!FUNC_22(VAR_23, 0) ||
     FUNC_20(VAR_23, 0) < VAR_1) {
  FUNC_2(&VAR_23->dev, "IR PNP Port not valid!\n");
  goto failure;
 }

 if (!FUNC_19(VAR_23, 0)) {
  FUNC_2(&VAR_23->dev, "PNP IRQ not valid!\n");
  goto failure;
 }

 if (!FUNC_22(VAR_23, 1) ||
     FUNC_20(VAR_23, 1) < VAR_1) {
  FUNC_2(&VAR_23->dev, "Wake PNP Port not valid!\n");
  goto failure;
 }

 VAR_25->cir_addr = FUNC_21(VAR_23, 0);
 VAR_25->cir_irq = FUNC_18(VAR_23, 0);

 VAR_25->cir_wake_addr = FUNC_21(VAR_23, 1);

 VAR_25->cir_wake_irq = VAR_25->cir_irq;

 VAR_25->cr_efir = VAR_3;
 VAR_25->cr_efdr = VAR_2;

 FUNC_30(&VAR_25->nvt_lock);
 FUNC_30(&VAR_25->tx.lock);
 FUNC_6(&VAR_25->rawir);

 VAR_27 = -VAR_4;

 if (!FUNC_29(VAR_25->cir_addr,
       VAR_1, VAR_10))
  goto failure;

 if (FUNC_28(VAR_25->cir_irq, VAR_17, VAR_8,
   VAR_10, (void *)VAR_25))
  goto failure;

 if (!FUNC_29(VAR_25->cir_wake_addr,
       VAR_1, VAR_10))
  goto failure;

 if (FUNC_28(VAR_25->cir_wake_irq, VAR_18, VAR_8,
   VAR_10, (void *)VAR_25))
  goto failure;

 FUNC_23(VAR_23, VAR_25);
 VAR_25->pdev = VAR_23;

 FUNC_7(&VAR_25->tx.queue);

 VAR_27 = FUNC_16(VAR_25);
 if (VAR_27)
  goto failure;


 FUNC_15(VAR_25);
 FUNC_10(VAR_25);
 FUNC_12(VAR_25);
 FUNC_14(VAR_25);


 FUNC_11(VAR_25);
 FUNC_13(VAR_25);


 VAR_26->priv = VAR_25;
 VAR_26->driver_type = VAR_12;
 VAR_26->allowed_protos = VAR_14;
 VAR_26->open = VAR_20;
 VAR_26->close = VAR_19;
 VAR_26->tx_ir = VAR_22;
 VAR_26->s_tx_carrier = VAR_21;
 VAR_26->input_name = "Nuvoton w836x7hg Infrared Remote Transceiver";
 VAR_26->input_id.bustype = VAR_0;
 VAR_26->input_id.vendor = VAR_11;
 VAR_26->input_id.product = VAR_25->chip_major;
 VAR_26->input_id.version = VAR_25->chip_minor;
 VAR_26->driver_name = VAR_10;
 VAR_26->map_name = VAR_13;
 VAR_27 = FUNC_26(VAR_26);
 if (VAR_27)
  goto failure;

 FUNC_3(&VAR_23->dev, 1);
 FUNC_4(&VAR_23->dev, 1);
 VAR_25->rdev = VAR_26;
 FUNC_17(VAR_9, "driver has been successfully loaded\n");
 if (VAR_16) {
  FUNC_0(VAR_25);
  FUNC_1(VAR_25);
 }

 return 0;

failure:
 if (VAR_25->cir_irq)
  FUNC_5(VAR_25->cir_irq, VAR_25);
 if (VAR_25->cir_addr)
  FUNC_27(VAR_25->cir_addr, VAR_1);

 if (VAR_25->cir_wake_irq)
  FUNC_5(VAR_25->cir_wake_irq, VAR_25);
 if (VAR_25->cir_wake_addr)
  FUNC_27(VAR_25->cir_wake_addr, VAR_1);

 FUNC_25(VAR_26);
 FUNC_8(VAR_25);

 return VAR_27;
}
