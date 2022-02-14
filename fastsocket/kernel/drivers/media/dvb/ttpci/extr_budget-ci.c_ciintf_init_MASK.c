
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct saa7146_dev {int dummy; } ;
struct dvb_ca_en50221 {int dummy; } ;
struct TYPE_7__ {struct budget_ci* data; int poll_slot_status; int slot_ts_enable; int slot_shutdown; int slot_reset; int write_cam_control; int read_cam_control; int write_attribute_mem; int read_attribute_mem; int owner; } ;
struct TYPE_6__ {int ci_present; int dvb_adapter; struct saa7146_dev* dev; } ;
struct budget_ci {scalar_t__ slot_status; int ci_irq; TYPE_3__ ca; TYPE_1__ budget; int ciintf_irq_tasklet; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct saa7146_dev*,int ) ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (int *,TYPE_3__*,int,int) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct saa7146_dev*,int ,int ) ;
 int FUNC_6 (struct saa7146_dev*,int ,int) ;
 int FUNC_7 (int *,int ,unsigned long) ;
 int FUNC_8 (TYPE_1__*,int ,int ,int,int,int ) ;
 int FUNC_9 (TYPE_1__*,int ,int ,int,int ,int,int ) ;

__attribute__((used)) static int FUNC_10(struct budget_ci *VAR_29)
{
 struct saa7146_dev *VAR_30 = VAR_29->budget.dev;
 int VAR_31;
 int VAR_32;
 int VAR_33;
 int VAR_34;

 FUNC_3(&VAR_29->ca, 0, sizeof(struct dvb_ca_en50221));


 FUNC_6(VAR_30, VAR_14, VAR_13 | VAR_12);


 VAR_33 = FUNC_8(&VAR_29->budget, VAR_4, VAR_3, 1, 1, 0);
 if ((VAR_33 & 0xa0) != 0xa0) {
  VAR_32 = -VAR_10;
  goto error;
 }


 VAR_31 = FUNC_8(&VAR_29->budget, VAR_4, VAR_2, 1, 1, 0);
 VAR_29->slot_status = VAR_17;
 if (VAR_31 & VAR_0)
  VAR_29->slot_status = VAR_18;


 if (VAR_33 == 0xa2) {
  VAR_34 = 0;
  VAR_29->ci_irq = 0;
 } else {
  VAR_34 = VAR_7 |
    VAR_9 |
    VAR_8;
  VAR_29->ci_irq = 1;
 }


 VAR_29->ca.owner = VAR_19;
 VAR_29->ca.read_attribute_mem = VAR_22;
 VAR_29->ca.write_attribute_mem = VAR_27;
 VAR_29->ca.read_cam_control = VAR_23;
 VAR_29->ca.write_cam_control = VAR_28;
 VAR_29->ca.slot_reset = VAR_24;
 VAR_29->ca.slot_shutdown = VAR_25;
 VAR_29->ca.slot_ts_enable = VAR_26;
 VAR_29->ca.poll_slot_status = VAR_21;
 VAR_29->ca.data = VAR_29;
 if ((VAR_32 = FUNC_2(&VAR_29->budget.dvb_adapter,
       &VAR_29->ca,
       VAR_34, 1)) != 0) {
  FUNC_4("budget_ci: CI interface detected, but initialisation failed.\n");
  goto error;
 }


 if (VAR_29->ci_irq) {
  FUNC_7(&VAR_29->ciintf_irq_tasklet, VAR_20, (unsigned long) VAR_29);
  if (VAR_29->slot_status != VAR_17) {
   FUNC_5(VAR_30, 0, VAR_16);
  } else {
   FUNC_5(VAR_30, 0, VAR_15);
  }
  FUNC_0(VAR_30, VAR_11);
 }


 FUNC_9(&VAR_29->budget, VAR_4, VAR_2, 1,
          VAR_1, 1, 0);


 FUNC_4("budget_ci: CI interface initialised\n");
 VAR_29->budget.ci_present = 1;


 if (VAR_29->ci_irq) {
  VAR_31 = VAR_6;
  if (VAR_29->slot_status != VAR_17)
   VAR_31 = VAR_5;
  FUNC_1(&VAR_29->ca, 0, VAR_31);
 }

 return 0;

error:
 FUNC_6(VAR_30, VAR_14, VAR_13);
 return VAR_32;
}
