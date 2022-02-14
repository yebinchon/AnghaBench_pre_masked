
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct viosrp_crq {int valid; } ;
struct vio_dev {int dummy; } ;
struct ibmvscsi_host_data {int queue; int dev; } ;


 struct viosrp_crq* FUNC_0 (int *) ;
 int FUNC_1 (struct viosrp_crq*,struct ibmvscsi_host_data*) ;
 struct vio_dev* FUNC_2 (int ) ;
 int FUNC_3 (struct vio_dev*) ;
 int FUNC_4 (struct vio_dev*) ;

__attribute__((used)) static void FUNC_5(void *VAR_0)
{
 struct ibmvscsi_host_data *VAR_1 = (struct ibmvscsi_host_data *)VAR_0;
 struct vio_dev *VAR_2 = FUNC_2(VAR_1->dev);
 struct viosrp_crq *VAR_3;
 int VAR_4 = 0;

 while (!VAR_4) {

  while ((VAR_3 = FUNC_0(&VAR_1->queue)) != ((void*)0)) {
   FUNC_1(VAR_3, VAR_1);
   VAR_3->valid = 0x00;
  }

  FUNC_4(VAR_2);
  if ((VAR_3 = FUNC_0(&VAR_1->queue)) != ((void*)0)) {
   FUNC_3(VAR_2);
   FUNC_1(VAR_3, VAR_1);
   VAR_3->valid = 0x00;
  } else {
   VAR_4 = 1;
  }
 }
}
