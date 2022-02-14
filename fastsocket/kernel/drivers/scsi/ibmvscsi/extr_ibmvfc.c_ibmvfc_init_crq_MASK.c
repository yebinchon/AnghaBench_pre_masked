
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_dev {int unit_address; int irq; } ;
struct ibmvfc_crq_queue {int size; struct ibmvfc_crq* msgs; int msg_token; scalar_t__ cur; } ;
struct ibmvfc_host {int tasklet; struct ibmvfc_crq_queue crq; struct device* dev; } ;
struct ibmvfc_crq {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct device*,char*,int,...) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,struct ibmvfc_crq*,int,int ) ;
 scalar_t__ FUNC_4 (struct device*,int ) ;
 int FUNC_5 (struct device*,int ,int,int ) ;
 int FUNC_6 (unsigned long) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_12 ;
 int FUNC_8 (struct ibmvfc_host*) ;
 scalar_t__ VAR_13 ;
 int FUNC_9 (int ,int ,...) ;
 int FUNC_10 (int ,int ,int ,int ,struct ibmvfc_host*) ;
 int FUNC_11 (int *,void*,unsigned long) ;
 int FUNC_12 (int *) ;
 struct vio_dev* FUNC_13 (struct device*) ;
 int FUNC_14 (struct vio_dev*) ;

__attribute__((used)) static int FUNC_15(struct ibmvfc_host *VAR_14)
{
 int VAR_15, VAR_16 = -VAR_1;
 struct device *VAR_17 = VAR_14->dev;
 struct vio_dev *VAR_18 = FUNC_13(VAR_17);
 struct ibmvfc_crq_queue *VAR_19 = &VAR_14->crq;

 VAR_2;
 VAR_19->msgs = (struct ibmvfc_crq *)FUNC_7(VAR_3);

 if (!VAR_19->msgs)
  return -VAR_1;

 VAR_19->size = VAR_11 / sizeof(*VAR_19->msgs);
 VAR_19->msg_token = FUNC_3(VAR_17, VAR_19->msgs,
     VAR_11, VAR_0);

 if (FUNC_4(VAR_17, VAR_19->msg_token))
  goto map_failed;

 VAR_16 = VAR_15 = FUNC_9(VAR_7, VAR_18->unit_address,
     VAR_19->msg_token, VAR_11);

 if (VAR_15 == VAR_8)

  VAR_16 = VAR_15 = FUNC_8(VAR_14);

 if (VAR_15 == VAR_5)
  FUNC_2(VAR_17, "Partner adapter not ready\n");
 else if (VAR_15) {
  FUNC_2(VAR_17, "Error %d opening adapter\n", VAR_15);
  goto reg_crq_failed;
 }

 VAR_16 = 0;

 FUNC_11(&VAR_14->tasklet, (void *)VAR_13, (unsigned long)VAR_14);

 if ((VAR_15 = FUNC_10(VAR_18->irq, VAR_12, 0, VAR_9, VAR_14))) {
  FUNC_1(VAR_17, "Couldn't register irq 0x%x. rc=%d\n", VAR_18->irq, VAR_15);
  goto req_irq_failed;
 }

 if ((VAR_15 = FUNC_14(VAR_18))) {
  FUNC_1(VAR_17, "Error %d enabling interrupts\n", VAR_15);
  goto req_irq_failed;
 }

 VAR_19->cur = 0;
 VAR_10;
 return VAR_16;

req_irq_failed:
 FUNC_12(&VAR_14->tasklet);
 do {
  VAR_15 = FUNC_9(VAR_6, VAR_18->unit_address);
 } while (VAR_15 == VAR_4 || FUNC_0(VAR_15));
reg_crq_failed:
 FUNC_5(VAR_17, VAR_19->msg_token, VAR_11, VAR_0);
map_failed:
 FUNC_6((unsigned long)VAR_19->msgs);
 return VAR_16;
}
