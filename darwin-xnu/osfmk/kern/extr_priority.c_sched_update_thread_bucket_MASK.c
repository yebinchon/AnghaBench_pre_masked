
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef size_t sched_bucket_t ;
struct TYPE_3__ {size_t th_sched_bucket; int sched_mode; int state; int pri_shift; int base_pri; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;



 int VAR_10 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (size_t) ;
 int * VAR_11 ;

__attribute__((used)) static void
FUNC_3(thread_t VAR_12)
{
 sched_bucket_t VAR_13 = VAR_12->th_sched_bucket;
 sched_bucket_t VAR_14 = VAR_4;

 switch (VAR_12->sched_mode) {
 case 130:
 case 129:
  VAR_14 = VAR_3;
  break;

 case 128:
  if (VAR_12->base_pri > VAR_0)
   VAR_14 = VAR_7;
  else if (VAR_12->base_pri > VAR_1)
   VAR_14 = VAR_6;
  else if (VAR_12->base_pri > VAR_2)
   VAR_14 = VAR_8;
  else
   VAR_14 = VAR_5;
  break;

 default:
  FUNC_0("unexpected mode: %d", VAR_12->sched_mode);
  break;
 }

 if (VAR_13 != VAR_14) {
  VAR_12->th_sched_bucket = VAR_14;
  VAR_12->pri_shift = VAR_11[VAR_14];

  if ((VAR_12->state & (VAR_10|VAR_9)) == VAR_10) {
   FUNC_1(VAR_13);
   FUNC_2(VAR_14);
  }
 }
}
