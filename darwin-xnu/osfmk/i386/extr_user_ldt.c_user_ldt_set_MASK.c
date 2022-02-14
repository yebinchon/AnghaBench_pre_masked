
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* user_ldt_t ;
typedef scalar_t__ uint16_t ;
typedef TYPE_2__* thread_t ;
typedef TYPE_3__* task_t ;
struct real_descriptor {int dummy; } ;
struct TYPE_9__ {scalar_t__ limit_low; } ;
struct TYPE_8__ {TYPE_1__* i386_ldt; } ;
struct TYPE_7__ {TYPE_3__* task; } ;
struct TYPE_6__ {size_t start; int count; int ldt; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct real_descriptor*,int) ;
 int FUNC_1 (struct real_descriptor*,int) ;
 scalar_t__ FUNC_2 () ;
 TYPE_5__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void
FUNC_5(
 thread_t VAR_3)
{
        task_t VAR_4 = VAR_3->task;
 user_ldt_t VAR_5;

 VAR_5 = VAR_4->i386_ldt;

 if (VAR_5 != 0) {
     struct real_descriptor *VAR_6 = (struct real_descriptor *)FUNC_2();

     if (VAR_5->start > VAR_1) {
  FUNC_1(&VAR_6[VAR_1],
        sizeof(struct real_descriptor) * (VAR_5->start - VAR_1));
     }

     FUNC_0(VAR_5->ldt, &VAR_6[VAR_5->start],
    sizeof(struct real_descriptor) * (VAR_5->count));

     FUNC_3(VAR_2)->limit_low = (uint16_t)((sizeof(struct real_descriptor) * (VAR_5->start + VAR_5->count)) - 1);

     FUNC_4(VAR_2);
 } else {
     FUNC_4(VAR_0);
 }
}
