
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w9966_dev {int pdev; int pport; int vdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct w9966_dev*,int ,int ) ;
 int FUNC_4 (struct w9966_dev*) ;
 int FUNC_5 (struct w9966_dev*) ;
 int FUNC_6 (struct w9966_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct w9966_dev* VAR_3)
{

 if (FUNC_3(VAR_3, VAR_2, VAR_2)) {
  FUNC_2(&VAR_3->vdev);
  FUNC_6(VAR_3, VAR_2, 0);
 }


 if (FUNC_3(VAR_3, VAR_1, VAR_1)) {
  FUNC_4(VAR_3);
  FUNC_0(VAR_3->pport, VAR_0);
  FUNC_5(VAR_3);
 }


 if (FUNC_3(VAR_3, VAR_1, VAR_1)) {
  FUNC_1(VAR_3->pdev);
  FUNC_6(VAR_3, VAR_1, 0);
 }
}
