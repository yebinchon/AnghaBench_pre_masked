
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ thread_qos_t ;
struct workqueue {scalar_t__ wq_constrained_threads_scheduled; } ;
struct TYPE_2__ {scalar_t__ qos_bucket; } ;
struct uthread {int uu_workq_flags; TYPE_1__ uu_workq_pri; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,struct workqueue*,int,scalar_t__,scalar_t__,int ) ;
 size_t FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct workqueue*) ;
 scalar_t__ FUNC_4 (struct workqueue*,int ,scalar_t__,scalar_t__*,int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct workqueue*,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__* VAR_5 ;

__attribute__((used)) static uint32_t
FUNC_7(struct workqueue *VAR_6, thread_qos_t VAR_7,
  struct uthread *VAR_8, bool VAR_9)
{
 FUNC_5(VAR_7 != VAR_3);
 uint32_t VAR_10 = 0;

 uint32_t VAR_11 = VAR_6->wq_constrained_threads_scheduled;
 if (VAR_8 && (VAR_8->uu_workq_flags & VAR_2) == 0) {



  FUNC_5(VAR_11 > 0);
  VAR_11--;
 }
 if (VAR_11 >= VAR_4) {
  FUNC_1(VAR_1 | VAR_0, VAR_6, 1,
    VAR_6->wq_constrained_threads_scheduled,
    VAR_4, 0);




  return 0;
 }
 VAR_11 -= VAR_4;
 uint32_t VAR_12, VAR_13;

 VAR_13 = FUNC_4(VAR_6, FUNC_3(VAR_6),
   VAR_7, &VAR_12, ((void*)0));

 if (VAR_8 && VAR_8->uu_workq_pri.qos_bucket != VAR_3 &&
   VAR_7 <= VAR_8->uu_workq_pri.qos_bucket) {





  FUNC_5(VAR_13 > 0);
  VAR_13--;
 }

 VAR_10 = VAR_5[FUNC_2(VAR_7)];
 if (VAR_10 > VAR_13 + VAR_12) {
  VAR_10 -= VAR_13 + VAR_12;
  FUNC_1(VAR_1 | VAR_0, VAR_6, 2,
    VAR_13, VAR_12, 0);
  return FUNC_0(VAR_10, VAR_11);
 } else {
  FUNC_1(VAR_1 | VAR_0, VAR_6, 3,
    VAR_13, VAR_12, 0);
 }

 if (VAR_12 && VAR_9) {




  FUNC_6(VAR_6, 0);
 }

 return 0;
}
