
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vio_dev {int dev; } ;
struct ibmvfc_host {TYPE_2__* host; int queue; int work_thread; } ;
struct TYPE_5__ {int kobj; } ;
struct TYPE_6__ {int host_lock; TYPE_1__ shost_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ibmvfc_host* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_2 (struct ibmvfc_host*) ;
 int FUNC_3 (struct ibmvfc_host*) ;
 int FUNC_4 (struct ibmvfc_host*,int ) ;
 int FUNC_5 (struct ibmvfc_host*,int ) ;
 int FUNC_6 (struct ibmvfc_host*) ;
 int FUNC_7 (int *,int *) ;
 int VAR_5 ;
 int FUNC_8 (struct ibmvfc_host*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,unsigned long) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_17(struct vio_dev *VAR_6)
{
 struct ibmvfc_host *VAR_7 = FUNC_0(&VAR_6->dev);
 unsigned long VAR_8;

 VAR_1;
 FUNC_7(&VAR_7->host->shost_dev.kobj, &VAR_5);

 FUNC_14(VAR_7->host->host_lock, VAR_8);
 FUNC_4(VAR_7, VAR_2);
 FUNC_16(VAR_7->host->host_lock, VAR_8);

 FUNC_8(VAR_7);
 FUNC_6(VAR_7);
 FUNC_9(VAR_7->work_thread);
 FUNC_1(VAR_7->host);
 FUNC_12(VAR_7->host);

 FUNC_14(VAR_7->host->host_lock, VAR_8);
 FUNC_5(VAR_7, VAR_0);
 FUNC_2(VAR_7);
 FUNC_16(VAR_7->host->host_lock, VAR_8);

 FUNC_3(VAR_7);
 FUNC_13(&VAR_4);
 FUNC_10(&VAR_7->queue);
 FUNC_15(&VAR_4);
 FUNC_11(VAR_7->host);
 VAR_3;
 return 0;
}
