
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct au0828_dev {scalar_t__ vbi_dev; scalar_t__ vdev; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(struct au0828_dev *VAR_1)
{
 FUNC_0(1, "au0828_release_resources called\n");
 FUNC_1(&VAR_0);

 if (VAR_1->vdev)
  FUNC_3(VAR_1->vdev);
 if (VAR_1->vbi_dev)
  FUNC_3(VAR_1->vbi_dev);

 FUNC_2(&VAR_0);
}
