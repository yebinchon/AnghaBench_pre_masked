
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {char* input_name; int s_carrier_report; int s_tx_duty_cycle; int s_tx_carrier; int s_tx_mask; int tx_ir; int s_learning_mode; int map_name; int driver_name; int s_idle; int close; int open; struct ene_device* priv; int allowed_protos; int driver_type; } ;
struct pnp_device_id {int dummy; } ;
struct pnp_dev {int dev; } ;
struct ene_device {int hw_io; int irq; int hw_learning_and_tx_capable; struct rc_dev* rdev; int tx_complete; int tx_sim_timer; struct pnp_dev* pnp_dev; int hw_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int VAR_11 ;
 int FUNC_2 (struct ene_device*) ;
 int VAR_12 ;
 int FUNC_3 (char*) ;
 int VAR_13 ;
 int FUNC_4 (struct ene_device*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_5 (struct ene_device*) ;
 int FUNC_6 (struct ene_device*) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int,struct ene_device*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct ene_device*) ;
 struct ene_device* FUNC_11 (int,int ) ;
 int VAR_22 ;
 int FUNC_12 (struct pnp_dev*,int ) ;
 int FUNC_13 (struct pnp_dev*,int ) ;
 scalar_t__ FUNC_14 (struct pnp_dev*,int ) ;
 int FUNC_15 (struct pnp_dev*,int ) ;
 int FUNC_16 (struct pnp_dev*,int ) ;
 int FUNC_17 (struct pnp_dev*,struct ene_device*) ;
 struct rc_dev* FUNC_18 () ;
 int FUNC_19 (struct rc_dev*) ;
 int FUNC_20 (struct rc_dev*) ;
 int FUNC_21 (int,scalar_t__) ;
 scalar_t__ FUNC_22 (int,int ,int ,int ,void*) ;
 int FUNC_23 (int,scalar_t__,int ) ;
 int VAR_23 ;
 int FUNC_24 (int *,int ,unsigned long) ;
 int FUNC_25 (int *) ;
 scalar_t__ VAR_24 ;

__attribute__((used)) static int FUNC_26(struct pnp_dev *VAR_25, const struct pnp_device_id *VAR_26)
{
 int VAR_27 = -VAR_5;
 struct rc_dev *VAR_28;
 struct ene_device *VAR_29;


 VAR_29 = FUNC_11(sizeof(struct ene_device), VAR_6);
 VAR_28 = FUNC_18();
 if (!VAR_29 || !VAR_28)
  goto error1;


 VAR_27 = -VAR_4;


 VAR_29->hw_io = -1;
 VAR_29->irq = -1;

 if (!FUNC_16(VAR_25, 0) ||
     FUNC_14(VAR_25, 0) < VAR_3)
  goto error;

 if (!FUNC_13(VAR_25, 0))
  goto error;

 FUNC_25(&VAR_29->hw_lock);


 VAR_27 = -VAR_0;
 VAR_29->hw_io = FUNC_15(VAR_25, 0);
 if (!FUNC_23(VAR_29->hw_io, VAR_3, VAR_2)) {
  VAR_29->hw_io = -1;
  VAR_29->irq = -1;
  goto error;
 }

 VAR_29->irq = FUNC_12(VAR_25, 0);
 if (FUNC_22(VAR_29->irq, VAR_12,
   VAR_7, VAR_2, (void *)VAR_29)) {
  VAR_29->irq = -1;
  goto error;
 }

 FUNC_17(VAR_25, VAR_29);
 VAR_29->pnp_dev = VAR_25;


 if (VAR_23 < 5 || VAR_23 > 0x7F)
  VAR_23 = VAR_1;


 VAR_27 = FUNC_2(VAR_29);
 if (VAR_27)
  goto error;

 if (!VAR_29->hw_learning_and_tx_capable && VAR_24) {
  VAR_29->hw_learning_and_tx_capable = 1;
  FUNC_24(&VAR_29->tx_sim_timer, VAR_21,
      (long unsigned int)VAR_29);
  FUNC_7("Simulation of TX activated");
 }

 if (!VAR_29->hw_learning_and_tx_capable)
  VAR_22 = 0;

 VAR_28->driver_type = VAR_8;
 VAR_28->allowed_protos = VAR_10;
 VAR_28->priv = VAR_29;
 VAR_28->open = VAR_13;
 VAR_28->close = VAR_11;
 VAR_28->s_idle = VAR_15;
 VAR_28->driver_name = VAR_2;
 VAR_28->map_name = VAR_9;
 VAR_28->input_name = "ENE eHome Infrared Remote Receiver";

 if (VAR_29->hw_learning_and_tx_capable) {
  VAR_28->s_learning_mode = VAR_16;
  FUNC_9(&VAR_29->tx_complete);
  VAR_28->tx_ir = VAR_20;
  VAR_28->s_tx_mask = VAR_19;
  VAR_28->s_tx_carrier = VAR_17;
  VAR_28->s_tx_duty_cycle = VAR_18;
  VAR_28->s_carrier_report = VAR_14;
  VAR_28->input_name = "ENE eHome Infrared Remote Transceiver";
 }

 VAR_29->rdev = VAR_28;

 FUNC_4(VAR_29);
 FUNC_5(VAR_29);
 FUNC_6(VAR_29);

 FUNC_0(&VAR_25->dev, 1);
 FUNC_1(&VAR_25->dev, 1);

 VAR_27 = FUNC_20(VAR_28);
 if (VAR_27 < 0)
  goto error;

 FUNC_3("driver has been succesfully loaded");
 return 0;
error:
 if (VAR_29 && VAR_29->irq >= 0)
  FUNC_8(VAR_29->irq, VAR_29);
 if (VAR_29 && VAR_29->hw_io >= 0)
  FUNC_21(VAR_29->hw_io, VAR_3);
error1:
 FUNC_19(VAR_28);
 FUNC_10(VAR_29);
 return VAR_27;
}
