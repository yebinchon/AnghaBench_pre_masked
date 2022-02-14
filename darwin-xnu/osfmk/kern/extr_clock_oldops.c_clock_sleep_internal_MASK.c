
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ wait_result_t ;
typedef int spl_t ;
typedef int sleep_type_t ;
typedef int mach_timespec_t ;
typedef int kern_return_t ;
typedef int event_t ;
typedef TYPE_3__* clock_t ;
typedef TYPE_4__* alarm_t ;
struct TYPE_13__ {scalar_t__ al_status; struct TYPE_13__* al_next; int al_time; TYPE_2__* al_prev; } ;
struct TYPE_12__ {TYPE_1__* cl_ops; } ;
struct TYPE_11__ {TYPE_4__* al_next; } ;
struct TYPE_10__ {int (* c_gettime ) (int *) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 size_t VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_1 (int ) ;
 int VAR_16 ;
 TYPE_4__* VAR_17 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *,int *) ;
 TYPE_3__* VAR_18 ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static kern_return_t
FUNC_9(
 clock_t VAR_19,
 sleep_type_t VAR_20,
 mach_timespec_t *VAR_21)
{
 alarm_t VAR_22;
 mach_timespec_t VAR_23;
 kern_return_t VAR_24;
 int VAR_25;
 spl_t VAR_26;

 if (VAR_19 == VAR_3)
  return (VAR_6);

 if (VAR_19 != &VAR_18[VAR_10])
  return (VAR_5);





 (*VAR_19->cl_ops->c_gettime)(&VAR_23);

 VAR_25 = FUNC_4(VAR_20, VAR_21, &VAR_23);
 if (VAR_25 < 0)
  return (VAR_7);
 VAR_24 = VAR_9;
 if (VAR_25 > 0) {
  wait_result_t VAR_27;





  FUNC_0(VAR_26);
  if ((VAR_22 = VAR_17) == 0) {
   FUNC_1(VAR_26);
   VAR_22 = (alarm_t) FUNC_8(VAR_16);
   if (VAR_22 == 0)
    return (VAR_8);
   FUNC_0(VAR_26);
  }
  else
   VAR_17 = VAR_22->al_next;




  VAR_27 = FUNC_3((event_t)VAR_22, VAR_11);
  if (VAR_27 == VAR_15) {
   VAR_22->al_time = *VAR_21;
   VAR_22->al_status = VAR_2;
   FUNC_5(VAR_22);
   FUNC_1(VAR_26);

   VAR_27 = FUNC_7(VAR_13);






   FUNC_0(VAR_26);
   if (VAR_22->al_status != VAR_0) {
    FUNC_2(VAR_27 != VAR_12);
    if (((VAR_22->al_prev)->al_next = VAR_22->al_next) != ((void*)0))
     (VAR_22->al_next)->al_prev = VAR_22->al_prev;
    VAR_24 = VAR_4;
   }
   *VAR_21 = VAR_22->al_time;
   VAR_22->al_status = VAR_1;
  } else {
   FUNC_2(VAR_27 == VAR_14);
   FUNC_2(VAR_22->al_status == VAR_1);
   VAR_24 = VAR_4;
  }
  VAR_22->al_next = VAR_17;
  VAR_17 = VAR_22;
  FUNC_1(VAR_26);
 }
 else
  *VAR_21 = VAR_23;

 return (VAR_24);
}
