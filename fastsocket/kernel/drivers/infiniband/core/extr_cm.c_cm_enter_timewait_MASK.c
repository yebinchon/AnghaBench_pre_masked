
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int timeout; } ;
struct TYPE_6__ {int state; } ;
struct cm_id_private {TYPE_4__* timewait_info; TYPE_2__ av; TYPE_1__ id; } ;
struct TYPE_10__ {int wq; int lock; int timewait_list; } ;
struct TYPE_8__ {int work; } ;
struct TYPE_9__ {TYPE_3__ work; int list; } ;


 int VAR_0 ;
 TYPE_5__ VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct cm_id_private *VAR_2)
{
 int VAR_3;
 unsigned long VAR_4;

 FUNC_5(&VAR_1.lock, VAR_4);
 FUNC_0(VAR_2->timewait_info);
 FUNC_2(&VAR_2->timewait_info->list, &VAR_1.timewait_list);
 FUNC_6(&VAR_1.lock, VAR_4);






 VAR_2->id.state = VAR_0;
 VAR_3 = FUNC_1(VAR_2->av.timeout);
 FUNC_4(VAR_1.wq, &VAR_2->timewait_info->work.work,
      FUNC_3(VAR_3));
 VAR_2->timewait_info = ((void*)0);
}
