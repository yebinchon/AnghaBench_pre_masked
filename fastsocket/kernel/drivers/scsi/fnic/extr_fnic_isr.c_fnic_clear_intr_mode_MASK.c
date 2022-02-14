
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fnic {int vdev; int pdev; } ;


 int VAR_0 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(struct fnic *VAR_1)
{
 switch (FUNC_2(VAR_1->vdev)) {
 case 128:
  FUNC_1(VAR_1->pdev);
  break;
 case 129:
  FUNC_0(VAR_1->pdev);
  break;
 default:
  break;
 }

 FUNC_3(VAR_1->vdev, VAR_0);
}
