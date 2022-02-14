
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct viosrp_crq {int dummy; } ;
struct vio_dev {int irq; int unit_address; } ;
struct ibmvscsi_host_data {int dev; int srp_task; } ;
struct crq_queue {int size; struct viosrp_crq* msgs; int msg_token; int lock; scalar_t__ cur; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,struct viosrp_crq*,int,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int,int ) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int ,...) ;
 scalar_t__ FUNC_11 (int,int ,int ,char*,void*) ;
 int VAR_7 ;
 int FUNC_12 (struct crq_queue*,struct ibmvscsi_host_data*) ;
 scalar_t__ VAR_8 ;
 int FUNC_13 (struct ibmvscsi_host_data*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,void*,unsigned long) ;
 int FUNC_16 (int *) ;
 struct vio_dev* FUNC_17 (int ) ;
 int FUNC_18 (struct vio_dev*) ;

__attribute__((used)) static int FUNC_19(struct crq_queue *VAR_9,
       struct ibmvscsi_host_data *VAR_10,
       int VAR_11)
{
 int VAR_12;
 int VAR_13;
 struct vio_dev *VAR_14 = FUNC_17(VAR_10->dev);

 VAR_9->msgs = (struct viosrp_crq *)FUNC_8(VAR_1);

 if (!VAR_9->msgs)
  goto malloc_failed;
 VAR_9->size = VAR_6 / sizeof(*VAR_9->msgs);

 VAR_9->msg_token = FUNC_3(VAR_10->dev, VAR_9->msgs,
       VAR_9->size * sizeof(*VAR_9->msgs),
       VAR_0);

 if (FUNC_4(VAR_10->dev, VAR_9->msg_token))
  goto map_failed;

 FUNC_7();
 FUNC_13(VAR_10);

 VAR_13 = VAR_12 = FUNC_10(VAR_4,
    VAR_14->unit_address,
    VAR_9->msg_token, VAR_6);
 if (VAR_12 == VAR_5)

  VAR_12 = FUNC_12(VAR_9,
           VAR_10);

 if (VAR_12 == 2) {

  FUNC_2(VAR_10->dev, "Partner adapter not ready\n");
  VAR_13 = 0;
 } else if (VAR_12 != 0) {
  FUNC_2(VAR_10->dev, "Error %d opening adapter\n", VAR_12);
  goto reg_crq_failed;
 }

 VAR_9->cur = 0;
 FUNC_14(&VAR_9->lock);

 FUNC_15(&VAR_10->srp_task, (void *)VAR_8,
       (unsigned long)VAR_10);

 if (FUNC_11(VAR_14->irq,
   VAR_7,
   0, "ibmvscsi", (void *)VAR_10) != 0) {
  FUNC_1(VAR_10->dev, "couldn't register irq 0x%x\n",
   VAR_14->irq);
  goto req_irq_failed;
 }

 VAR_12 = FUNC_18(VAR_14);
 if (VAR_12 != 0) {
  FUNC_1(VAR_10->dev, "Error %d enabling interrupts!!!\n", VAR_12);
  goto req_irq_failed;
 }

 return VAR_13;

      req_irq_failed:
 FUNC_16(&VAR_10->srp_task);
 VAR_12 = 0;
 do {
  if (VAR_12)
   FUNC_9(100);
  VAR_12 = FUNC_10(VAR_3, VAR_14->unit_address);
 } while ((VAR_12 == VAR_2) || (FUNC_0(VAR_12)));
      reg_crq_failed:
 FUNC_5(VAR_10->dev,
    VAR_9->msg_token,
    VAR_9->size * sizeof(*VAR_9->msgs), VAR_0);
      map_failed:
 FUNC_6((unsigned long)VAR_9->msgs);
      malloc_failed:
 return -1;
}
