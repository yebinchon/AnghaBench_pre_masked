
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int start; } ;
struct platform_device {size_t id; int dev; int name; } ;
struct TYPE_3__ {int * parent; } ;
struct i2c_adapter {size_t nr; int class; TYPE_1__ dev; struct bfin_twi_iface* algo_data; int * algo; int name; } ;
struct TYPE_4__ {unsigned long data; int function; } ;
struct bfin_twi_iface {scalar_t__ irq; int * regs_base; struct i2c_adapter adap; TYPE_2__ timeout_timer; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 () ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,int *) ;
 int FUNC_3 (scalar_t__,struct bfin_twi_iface*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct i2c_adapter*) ;
 int FUNC_6 (TYPE_2__*) ;
 int * FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct bfin_twi_iface*) ;
 struct bfin_twi_iface* FUNC_10 (int,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*) ;
 int * VAR_14 ;
 scalar_t__ FUNC_13 (struct platform_device*,int ) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;
 int FUNC_15 (struct platform_device*,struct bfin_twi_iface*) ;
 int FUNC_16 (struct bfin_twi_iface*) ;
 int FUNC_17 (scalar_t__,int ,int ,int ,struct bfin_twi_iface*) ;
 int FUNC_18 (struct resource*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ,int ,int) ;
 int FUNC_21 (struct bfin_twi_iface*,unsigned int) ;
 int FUNC_22 (struct bfin_twi_iface*,int) ;

__attribute__((used)) static int FUNC_23(struct platform_device *VAR_15)
{
 struct bfin_twi_iface *VAR_16;
 struct i2c_adapter *VAR_17;
 struct resource *VAR_18;
 int VAR_19;
 unsigned int VAR_20;

 VAR_16 = FUNC_10(sizeof(struct bfin_twi_iface), VAR_5);
 if (!VAR_16) {
  FUNC_1(&VAR_15->dev, "Cannot allocate memory\n");
  VAR_19 = -VAR_3;
  goto out_error_nomem;
 }

 FUNC_19(&(VAR_16->lock));


 VAR_18 = FUNC_14(VAR_15, VAR_8, 0);
 if (VAR_18 == ((void*)0)) {
  FUNC_1(&VAR_15->dev, "Cannot get IORESOURCE_MEM\n");
  VAR_19 = -VAR_2;
  goto out_error_get_res;
 }

 VAR_16->regs_base = FUNC_7(VAR_18->start, FUNC_18(VAR_18));
 if (VAR_16->regs_base == ((void*)0)) {
  FUNC_1(&VAR_15->dev, "Cannot map IO\n");
  VAR_19 = -VAR_4;
  goto out_error_ioremap;
 }

 VAR_16->irq = FUNC_13(VAR_15, 0);
 if (VAR_16->irq < 0) {
  FUNC_1(&VAR_15->dev, "No IRQ specified\n");
  VAR_19 = -VAR_2;
  goto out_error_no_irq;
 }

 FUNC_6(&(VAR_16->timeout_timer));
 VAR_16->timeout_timer.function = VAR_13;
 VAR_16->timeout_timer.data = (unsigned long)VAR_16;

 VAR_17 = &VAR_16->adap;
 VAR_17->nr = VAR_15->id;
 FUNC_20(VAR_17->name, VAR_15->name, sizeof(VAR_17->name));
 VAR_17->algo = &VAR_11;
 VAR_17->algo_data = VAR_16;
 VAR_17->class = VAR_6 | VAR_7;
 VAR_17->dev.parent = &VAR_15->dev;

 VAR_19 = FUNC_12(VAR_14[VAR_15->id], "i2c-bfin-twi");
 if (VAR_19) {
  FUNC_1(&VAR_15->dev, "Can't setup pin mux!\n");
  goto out_error_pin_mux;
 }

 VAR_19 = FUNC_17(VAR_16->irq, VAR_12,
  VAR_9, VAR_15->name, VAR_16);
 if (VAR_19) {
  FUNC_1(&VAR_15->dev, "Can't get IRQ %d !\n", VAR_16->irq);
  VAR_19 = -VAR_1;
  goto out_error_req_irq;
 }


 FUNC_22(VAR_16, ((FUNC_4() / 1024 / 1024 + 5) / 10) & 0x7F);





 VAR_20 = 5 * 1024 / VAR_0;


 FUNC_21(VAR_16, (VAR_20 << 8) | VAR_20);


 FUNC_22(VAR_16, FUNC_16(VAR_16) | VAR_10);
 FUNC_0();

 VAR_19 = FUNC_5(VAR_17);
 if (VAR_19 < 0) {
  FUNC_1(&VAR_15->dev, "Can't add i2c adapter!\n");
  goto out_error_add_adapter;
 }

 FUNC_15(VAR_15, VAR_16);

 FUNC_2(&VAR_15->dev, "Blackfin BF5xx on-chip I2C TWI Contoller, "
  "regs_base@%p\n", VAR_16->regs_base);

 return 0;

out_error_add_adapter:
 FUNC_3(VAR_16->irq, VAR_16);
out_error_req_irq:
out_error_no_irq:
 FUNC_11(VAR_14[VAR_15->id]);
out_error_pin_mux:
 FUNC_8(VAR_16->regs_base);
out_error_ioremap:
out_error_get_res:
 FUNC_9(VAR_16);
out_error_nomem:
 return VAR_19;
}
