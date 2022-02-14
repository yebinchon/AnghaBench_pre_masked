
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int thread_t ;
typedef int thread_qos_t ;
struct workqueue {int wq_event_manager_priority; } ;
struct workq_kernreturn_args {int options; int affinity; int prio; } ;
struct uthread {int uu_workq_flags; } ;
struct proc {int p_lflag; int p_dispatchqueue_serialno_offset; } ;
typedef int pthread_priority_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;







 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 struct uthread* FUNC_3 (int ) ;
 struct workqueue* FUNC_4 (struct proc*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct workqueue*,int ,struct uthread*,int) ;
 int FUNC_7 (struct workqueue*) ;
 int FUNC_8 (struct proc*,int,int) ;
 int FUNC_9 (struct proc*,struct workq_kernreturn_args*,struct workqueue*) ;
 int FUNC_10 (struct workqueue*) ;

int
FUNC_11(struct proc *VAR_10, struct workq_kernreturn_args *VAR_11, int32_t *VAR_12)
{
 int VAR_13 = VAR_11->options;
 int VAR_14 = VAR_11->affinity;
 int VAR_15 = VAR_11->prio;
 struct workqueue *VAR_16 = FUNC_4(VAR_10);
 int VAR_17 = 0;

 if ((VAR_10->p_lflag & VAR_1) == 0) {
  return VAR_0;
 }

 switch (VAR_13) {
 case 134: {




  int VAR_18 = VAR_14;
  if (VAR_15 & 0x01){

  }

  VAR_10->p_dispatchqueue_serialno_offset = (uint64_t)VAR_18;
  break;
 }
 case 133: {




  VAR_17 = FUNC_8(VAR_10, VAR_14, VAR_15);
  break;
 }
 case 132: {







  pthread_priority_t VAR_19 = VAR_14;

  if (VAR_16 == ((void*)0)) {
   VAR_17 = VAR_0;
   break;
  }




  if (VAR_19 & VAR_8) {
   VAR_19 &= (VAR_9 |
     VAR_8);
  } else {
   thread_qos_t VAR_20 = FUNC_1(VAR_19);
   int VAR_21 = FUNC_0(VAR_19);
   if (VAR_21 > 0 || VAR_21 < VAR_2 ||
     VAR_20 == VAR_3) {
    VAR_17 = VAR_0;
    break;
   }
   VAR_19 &= ~VAR_7;
  }





  FUNC_7(VAR_16);
  if (VAR_16->wq_event_manager_priority < (uint32_t)VAR_19) {
   VAR_16->wq_event_manager_priority = (uint32_t)VAR_19;
  }
  FUNC_10(VAR_16);
  break;
 }
 case 130:
 case 128:
 case 129: {
  VAR_17 = FUNC_9(VAR_10, VAR_11, VAR_16);
  break;
 }

 case 131: {




  thread_t VAR_22 = FUNC_2();
  struct uthread *VAR_23 = FUNC_3(VAR_22);
  if (((FUNC_5(VAR_22) & VAR_4) == 0) ||
    (VAR_23->uu_workq_flags & (VAR_5|VAR_6))) {
   VAR_17 = VAR_0;
   break;
  }

  thread_qos_t VAR_24 = FUNC_1(VAR_14);
  if (VAR_24 == VAR_3) {
   VAR_17 = VAR_0;
   break;
  }
  FUNC_7(VAR_16);
  bool VAR_25 = !FUNC_6(VAR_16, VAR_24, VAR_23, 0);
  FUNC_10(VAR_16);

  *VAR_12 = VAR_25;
  break;
 }
 default:
  VAR_17 = VAR_0;
  break;
 }

 return (VAR_17);
}
