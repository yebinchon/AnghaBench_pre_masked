
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_user_sdma_queue {int lock; } ;
struct ipath_devdata {int dummy; } ;


 int FUNC_0 (struct ipath_devdata*) ;
 int FUNC_1 (struct ipath_devdata*,struct ipath_user_sdma_queue*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct ipath_devdata *VAR_0,
      struct ipath_user_sdma_queue *VAR_1)
{
 int VAR_2 = 0;

 FUNC_2(&VAR_1->lock);
 FUNC_0(VAR_0);
 VAR_2 = FUNC_1(VAR_0, VAR_1);
 FUNC_3(&VAR_1->lock);

 return VAR_2;
}
