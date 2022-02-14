
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ibdev; } ;
struct qib_devdata {TYPE_1__ verbs_dev; int list; int unit; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct qib_devdata *VAR_2)
{
 unsigned long VAR_3;

 FUNC_3(&VAR_0, VAR_3);
 FUNC_1(&VAR_1, VAR_2->unit);
 FUNC_2(&VAR_2->list);
 FUNC_4(&VAR_0, VAR_3);

 FUNC_0(&VAR_2->verbs_dev.ibdev);
}
