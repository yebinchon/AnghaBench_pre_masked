
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct viosrp_crq {int dummy; } ;
struct vio_port {TYPE_1__* dma_dev; } ;
struct srp_target {int dev; } ;
struct crq_queue {int size; struct viosrp_crq* msgs; int msg_token; int lock; scalar_t__ cur; } ;
struct TYPE_2__ {int unit_address; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,struct viosrp_crq*,int,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (unsigned long) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int,int ) ;
 int VAR_8 ;
 int FUNC_10 (int ,int *,int ,char*,struct srp_target*) ;
 int FUNC_11 (int *) ;
 struct vio_port* FUNC_12 (struct srp_target*) ;
 int FUNC_13 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_14(struct crq_queue *VAR_9, struct srp_target *VAR_10)
{
 int VAR_11;
 struct vio_port *VAR_12 = FUNC_12(VAR_10);

 VAR_9->msgs = (struct viosrp_crq *) FUNC_6(VAR_2);
 if (!VAR_9->msgs)
  goto malloc_failed;
 VAR_9->size = VAR_7 / sizeof(*VAR_9->msgs);

 VAR_9->msg_token = FUNC_1(VAR_10->dev, VAR_9->msgs,
       VAR_9->size * sizeof(*VAR_9->msgs),
       VAR_0);

 if (FUNC_2(VAR_10->dev, VAR_9->msg_token))
  goto map_failed;

 VAR_11 = FUNC_8(VAR_12->dma_dev->unit_address, VAR_9->msg_token,
   VAR_7);




 if (VAR_11 == VAR_4) {
     do {
  VAR_11 = FUNC_7(VAR_12->dma_dev->unit_address);
     } while (VAR_11 == VAR_3 || FUNC_0(VAR_11));

     VAR_11 = FUNC_8(VAR_12->dma_dev->unit_address, VAR_9->msg_token,
       VAR_7);
 }

 if (VAR_11 != VAR_5 && VAR_11 != 2) {
  FUNC_4("Error 0x%x opening virtual adapter\n", VAR_11);
  goto reg_crq_failed;
 }

 VAR_11 = FUNC_10(VAR_12->dma_dev->irq, &VAR_8,
     VAR_6, "ibmvstgt", VAR_10);
 if (VAR_11)
  goto req_irq_failed;

 FUNC_13(VAR_12->dma_dev);

 FUNC_9(VAR_12->dma_dev->unit_address, 0xC001000000000000, 0);

 VAR_9->cur = 0;
 FUNC_11(&VAR_9->lock);

 return 0;

req_irq_failed:
 do {
  VAR_11 = FUNC_7(VAR_12->dma_dev->unit_address);
 } while (VAR_11 == VAR_3 || FUNC_0(VAR_11));

reg_crq_failed:
 FUNC_3(VAR_10->dev, VAR_9->msg_token,
    VAR_9->size * sizeof(*VAR_9->msgs), VAR_0);
map_failed:
 FUNC_5((unsigned long) VAR_9->msgs);

malloc_failed:
 return -VAR_1;
}
