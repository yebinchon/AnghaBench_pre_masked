
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct ipath_devdata {int verbs_dev; int ipath_sdma_lock; int ipath_sdma_notifylist; } ;


 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ipath_devdata*,struct list_head*) ;
 int FUNC_3 (int *,struct list_head*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct ipath_devdata *VAR_0)
{
 unsigned long VAR_1;
 struct list_head VAR_2;

 FUNC_0(&VAR_2);

 FUNC_4(&VAR_0->ipath_sdma_lock, VAR_1);

 FUNC_3(&VAR_0->ipath_sdma_notifylist, &VAR_2);

 FUNC_5(&VAR_0->ipath_sdma_lock, VAR_1);

 FUNC_2(VAR_0, &VAR_2);
 FUNC_1(VAR_0->verbs_dev);
}
