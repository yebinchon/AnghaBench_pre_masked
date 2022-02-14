
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vio_dev {int dev; } ;
struct ibmvscsi_host_data {int host; int work_thread; int queue; int pool; } ;
struct TYPE_2__ {int (* release_crq_queue ) (int *,struct ibmvscsi_host_data*,int ) ;} ;


 struct ibmvscsi_host_data* FUNC_0 (int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,struct ibmvscsi_host_data*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,struct ibmvscsi_host_data*,int ) ;
 int FUNC_7 (struct ibmvscsi_host_data*) ;

__attribute__((used)) static int FUNC_8(struct vio_dev *VAR_2)
{
 struct ibmvscsi_host_data *VAR_3 = FUNC_0(&VAR_2->dev);
 FUNC_7(VAR_3);
 FUNC_2(&VAR_3->pool, VAR_3);
 VAR_0->release_crq_queue(&VAR_3->queue, VAR_3,
     VAR_1);

 FUNC_1(VAR_3->work_thread);
 FUNC_5(VAR_3->host);
 FUNC_4(VAR_3->host);
 FUNC_3(VAR_3->host);

 return 0;
}
