
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_blktrans_dev {int blkcore_priv; int list; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct mtd_blktrans_dev *VAR_1)
{
 if (FUNC_3(&VAR_0)) {
  FUNC_4(&VAR_0);
  FUNC_0();
 }

 FUNC_2(&VAR_1->list);

 FUNC_1(VAR_1->blkcore_priv);
 FUNC_5(VAR_1->blkcore_priv);

 return 0;
}
