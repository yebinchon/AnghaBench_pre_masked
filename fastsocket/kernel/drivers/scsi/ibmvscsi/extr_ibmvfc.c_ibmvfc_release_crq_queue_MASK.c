
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_dev {int unit_address; int irq; } ;
struct ibmvfc_crq_queue {scalar_t__ msgs; int msg_token; } ;
struct ibmvfc_host {int dev; scalar_t__ logged_in; int state; int tasklet; struct ibmvfc_crq_queue crq; } ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (long) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,struct ibmvfc_host*) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (struct ibmvfc_host*,char*) ;
 int FUNC_5 (int) ;
 long FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 struct vio_dev* FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct ibmvfc_host *VAR_5)
{
 long VAR_6 = 0;
 struct vio_dev *VAR_7 = FUNC_8(VAR_5->dev);
 struct ibmvfc_crq_queue *VAR_8 = &VAR_5->crq;

 FUNC_4(VAR_5, "Releasing CRQ\n");
 FUNC_2(VAR_7->irq, VAR_5);
 FUNC_7(&VAR_5->tasklet);
 do {
  if (VAR_6)
   FUNC_5(100);
  VAR_6 = FUNC_6(VAR_2, VAR_7->unit_address);
 } while (VAR_6 == VAR_1 || FUNC_0(VAR_6));

 VAR_5->state = VAR_3;
 VAR_5->logged_in = 0;
 FUNC_1(VAR_5->dev, VAR_8->msg_token, VAR_4, VAR_0);
 FUNC_3((unsigned long)VAR_8->msgs);
}
