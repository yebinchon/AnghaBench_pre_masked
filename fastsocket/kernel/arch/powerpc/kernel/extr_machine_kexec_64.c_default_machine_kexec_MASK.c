
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct kimage {int control_code_page; int start; } ;
struct TYPE_9__ {int task; } ;
struct TYPE_6__ {scalar_t__ flags; int task; } ;
struct TYPE_8__ {TYPE_1__ thread_info; } ;
struct TYPE_7__ {int hpte_clear_all; } ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_3__*,int ,struct kimage*,int ,int ) ;
 TYPE_3__ VAR_1 ;
 int FUNC_3 (int ) ;
 TYPE_2__ VAR_2 ;

void FUNC_4(struct kimage *VAR_3)
{
 if (VAR_0 == -1)
  FUNC_1();




 VAR_1.thread_info.task = FUNC_0()->task;
 VAR_1.thread_info.flags = 0;




 FUNC_2(&VAR_1, VAR_3->start, VAR_3,
   FUNC_3(VAR_3->control_code_page),
   VAR_2.hpte_clear_all);

}
