
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct data_queue {int status_lock; TYPE_3__* rt2x00dev; int flags; } ;
struct TYPE_6__ {TYPE_2__* ops; int flags; } ;
struct TYPE_5__ {TYPE_1__* lib; } ;
struct TYPE_4__ {int (* start_queue ) (struct data_queue*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct data_queue*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct data_queue*) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;

void FUNC_7(struct data_queue *VAR_3)
{
 FUNC_0(&VAR_3->status_lock);

 if (!FUNC_6(VAR_0, &VAR_3->rt2x00dev->flags) ||
     FUNC_5(VAR_2, &VAR_3->flags)) {
  FUNC_1(&VAR_3->status_lock);
  return;
 }

 FUNC_3(VAR_1, &VAR_3->flags);

 VAR_3->rt2x00dev->ops->lib->start_queue(VAR_3);

 FUNC_2(VAR_3);

 FUNC_1(&VAR_3->status_lock);
}
