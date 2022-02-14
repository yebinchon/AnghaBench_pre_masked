
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibmvscsi_host_data {int host; int dev; int request_limit; int queue; scalar_t__ reenable_crq; scalar_t__ reset_crq; } ;
struct TYPE_2__ {int (* reset_crq_queue ) (int *,struct ibmvscsi_host_data*) ;int (* send_crq ) (struct ibmvscsi_host_data*,int ,int ) ;int (* reenable_crq_queue ) (int *,struct ibmvscsi_host_data*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,char*,char const*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,struct ibmvscsi_host_data*) ;
 int FUNC_5 (struct ibmvscsi_host_data*,int ,int ) ;
 int FUNC_6 (int *,struct ibmvscsi_host_data*) ;
 int FUNC_7 (struct ibmvscsi_host_data*,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct ibmvscsi_host_data *VAR_2)
{
 int VAR_3;
 const char *VAR_4 = "reset";

 if (VAR_2->reset_crq) {
  VAR_2->reset_crq = 0;
  FUNC_3();

  VAR_3 = VAR_1->reset_crq_queue(&VAR_2->queue, VAR_2);
  if (!VAR_3)
   VAR_3 = VAR_1->send_crq(VAR_2, VAR_0, 0);
  FUNC_9(FUNC_8(VAR_2->dev));
 } else if (VAR_2->reenable_crq) {
  VAR_2->reenable_crq = 0;
  FUNC_3();
  VAR_4 = "enable";
  VAR_3 = VAR_1->reenable_crq_queue(&VAR_2->queue, VAR_2);
  if (!VAR_3)
   VAR_3 = VAR_1->send_crq(VAR_2, VAR_0, 0);
 } else
  return;

 if (VAR_3) {
  FUNC_0(&VAR_2->request_limit, -1);
  FUNC_1(VAR_2->dev, "error after %s\n", VAR_4);
 }

 FUNC_2(VAR_2->host);
}
