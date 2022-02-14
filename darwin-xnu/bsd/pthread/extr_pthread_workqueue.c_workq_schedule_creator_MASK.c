
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_3__* workq_threadreq_t ;
struct workqueue {scalar_t__ wq_nthreads; int wq_fulfilled; struct uthread* wq_creator; scalar_t__ wq_thidlecount; int wq_reqcount; } ;
struct TYPE_7__ {scalar_t__ yields; int fulfilled_snapshot; } ;
struct TYPE_8__ {TYPE_1__ uus_workq_park_data; } ;
struct uthread {TYPE_2__ uu_save; struct workqueue* uu_thread; } ;
typedef scalar_t__ proc_t ;
struct TYPE_9__ {int tr_qos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct workqueue* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,struct workqueue*,int,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (struct workqueue*) ;
 scalar_t__ FUNC_6 (scalar_t__,struct workqueue*) ;
 int FUNC_7 (struct workqueue*) ;
 struct uthread* FUNC_8 (struct workqueue*) ;
 int FUNC_9 (struct workqueue*,int ) ;
 int FUNC_10 (struct workqueue*) ;
 scalar_t__ FUNC_11 (TYPE_3__*,struct uthread*) ;
 int FUNC_12 (struct workqueue*,struct uthread*,TYPE_3__*) ;
 int FUNC_13 (struct uthread*) ;
 TYPE_3__* FUNC_14 (struct workqueue*) ;
 int FUNC_15 (struct workqueue*,struct workqueue*,int ) ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void
FUNC_16(proc_t VAR_11, struct workqueue *VAR_12, int VAR_13)
{
 workq_threadreq_t VAR_14;
 struct uthread *VAR_15;

 FUNC_7(VAR_12);
 FUNC_3(VAR_11 || (VAR_13 & VAR_6) == 0);

again:
 VAR_15 = VAR_12->wq_creator;

 if (!VAR_12->wq_reqcount) {
  if (VAR_15 == ((void*)0)) {
   FUNC_15(VAR_12, VAR_3, 0);
  }
  return;
 }

 VAR_14 = FUNC_14(VAR_12);
 if (VAR_14 == ((void*)0)) {
  if (VAR_13 & VAR_7) {
   FUNC_3((VAR_13 & VAR_8) == 0);




  } else {
   FUNC_15(VAR_12, VAR_12, VAR_5);
  }
  return;
 }

 if (VAR_15) {



  if (FUNC_11(VAR_14, VAR_15)) {
   FUNC_0(VAR_2 | VAR_1,
     VAR_12, 1, FUNC_5(VAR_15->uu_thread), VAR_14->tr_qos, 0);
   FUNC_12(VAR_12, VAR_15, VAR_14);
  }
 } else if (VAR_12->wq_thidlecount) {



  VAR_12->wq_creator = VAR_15 = FUNC_8(VAR_12);
  if (FUNC_11(VAR_14, VAR_15)) {
   FUNC_12(VAR_12, VAR_15, VAR_14);
  }
  FUNC_15(VAR_12, VAR_15->uu_thread,
    VAR_4);
  FUNC_0(VAR_2 | VAR_1,
    VAR_12, 2, FUNC_5(VAR_15->uu_thread), VAR_14->tr_qos, 0);
  VAR_15->uu_save.uus_workq_park_data.fulfilled_snapshot = VAR_12->wq_fulfilled;
  VAR_15->uu_save.uus_workq_park_data.yields = 0;
  FUNC_13(VAR_15);
 } else {



  if (FUNC_1(VAR_12->wq_nthreads >= VAR_10)) {

  } else if (VAR_13 & VAR_9) {
   FUNC_2(FUNC_4(), VAR_0);
  } else if (!(VAR_13 & VAR_6)) {

   FUNC_10(VAR_12);
  } else if (FUNC_6(VAR_11, VAR_12)) {
   goto again;
  } else {
   FUNC_9(VAR_12, 0);
  }

  if (VAR_13 & VAR_8) {






   FUNC_15(VAR_12, ((void*)0), 0);
  }
 }
}
