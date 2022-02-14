
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnic_wq {int index; TYPE_1__* ctrl; } ;
struct TYPE_2__ {int running; int enable; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int) ;

int FUNC_4(struct vnic_wq *VAR_1)
{
 unsigned int VAR_2;

 FUNC_1(0, &VAR_1->ctrl->enable);


 for (VAR_2 = 0; VAR_2 < 1000; VAR_2++) {
  if (!(FUNC_0(&VAR_1->ctrl->running)))
   return 0;
  FUNC_3(10);
 }

 FUNC_2("Failed to disable WQ[%d]\n", VAR_1->index);

 return -VAR_0;
}
