
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* uthread_t ;
typedef scalar_t__ uint32_t ;
struct _throttle_io_info_t {scalar_t__ throttle_io_period_num; int* throttle_io_periods; int * throttle_last_IO_pid; int throttle_io_count; int throttle_lock; int * throttle_uthlist; } ;
typedef int caddr_t ;
typedef int boolean_t ;
struct TYPE_5__ {scalar_t__ uu_lowpri_window; int uu_throttle_bc; int uu_on_throttlelist; int uu_was_rethrottled; char* uu_wmesg; int uu_is_throttled; struct _throttle_io_info_t* uu_throttle_info; int uu_rethrottle_lock; int uu_thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int ,int,int ,int,int ) ;
 int VAR_6 ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 TYPE_1__* FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct _throttle_io_info_t*,TYPE_1__*,int,int ) ;
 int FUNC_17 (struct _throttle_io_info_t*) ;
 int FUNC_18 (struct _throttle_io_info_t*,int*,int*) ;
 int FUNC_19 (int ,int) ;
 int * VAR_15 ;
 int * VAR_16 ;
 int VAR_17 ;

uint32_t
FUNC_20(int VAR_18)
{
 uthread_t VAR_19;
 struct _throttle_io_info_t *VAR_20;
 int VAR_21 = 0;
 int VAR_22 = 0;
 int VAR_23 = VAR_11;
 int VAR_24 = 0;
 uint32_t VAR_25 = 0;
 boolean_t VAR_26 = VAR_14;
 boolean_t VAR_27;

 VAR_19 = FUNC_6(FUNC_5());

 if (VAR_19->uu_lowpri_window == 0)
  return (0);

 VAR_20 = VAR_19->uu_throttle_info;

 if (VAR_20 == ((void*)0)) {
  VAR_19->uu_throttle_bc = 0;
  VAR_19->uu_lowpri_window = 0;
  return (0);
 }
 FUNC_7(&VAR_20->throttle_lock);
 FUNC_3(VAR_19->uu_on_throttlelist < VAR_13);

 if (VAR_18 == 0)
  goto done;

 if (VAR_18 == 1 && !VAR_19->uu_throttle_bc)
  VAR_18 = 0;

 VAR_25 = VAR_20->throttle_io_period_num;

 VAR_19->uu_was_rethrottled = 0;

 while ( (VAR_21 = FUNC_18(VAR_20, &VAR_22, &VAR_23)) ) {

  if (VAR_21 == VAR_9) {
   if (VAR_18 == 0)
    break;
   if (VAR_20->throttle_io_period_num < VAR_25)
    break;
   if ((VAR_20->throttle_io_period_num - VAR_25) >= (uint32_t)VAR_18)
    break;
  }




  if (VAR_19->uu_on_throttlelist >= VAR_13 && VAR_19->uu_on_throttlelist != VAR_22) {






   FUNC_2(&VAR_20->throttle_uthlist[VAR_19->uu_on_throttlelist], VAR_19, VAR_17);
   VAR_19->uu_on_throttlelist = VAR_11;
   VAR_26 = VAR_14;
  }
  if (VAR_19->uu_on_throttlelist < VAR_13) {
   if (FUNC_16(VAR_20, VAR_19, VAR_22, VAR_26) == VAR_10)
    goto done;
  }
  FUNC_3(VAR_23 >= VAR_12 && VAR_23 <= VAR_10);

  VAR_27 = FUNC_12(VAR_5);
  FUNC_10(&VAR_19->uu_rethrottle_lock);





  if (VAR_19->uu_was_rethrottled) {

   FUNC_11(&VAR_19->uu_rethrottle_lock);
   FUNC_12(VAR_27);
   FUNC_9(&VAR_20->throttle_lock);

   FUNC_1((FUNC_0(VAR_0, 103)), FUNC_15(VAR_19->uu_thread), VAR_19->uu_on_throttlelist, 0, 0, 0);

   VAR_19->uu_was_rethrottled = 0;
   continue;
  }
  FUNC_1((FUNC_0(VAR_4, VAR_6)) | VAR_2,
    VAR_20->throttle_last_IO_pid[VAR_23], VAR_23, FUNC_13(), VAR_22, 0);

  if (VAR_24 == 0) {
   FUNC_1((FUNC_0(VAR_0, 97)) | VAR_3,
           VAR_15[VAR_22], VAR_20->throttle_io_periods[VAR_22], VAR_20->throttle_io_count, 0, 0);
   VAR_16[VAR_22]++;
  }
  VAR_19->uu_wmesg = "throttle_lowpri_io";

  FUNC_4((caddr_t)&VAR_19->uu_on_throttlelist, VAR_8);

  VAR_19->uu_is_throttled = 1;
  FUNC_11(&VAR_19->uu_rethrottle_lock);
  FUNC_12(VAR_27);

  FUNC_8(&VAR_20->throttle_lock);

  FUNC_14(VAR_7);

  VAR_19->uu_wmesg = ((void*)0);

  VAR_19->uu_is_throttled = 0;
  VAR_19->uu_was_rethrottled = 0;

  FUNC_7(&VAR_20->throttle_lock);

  VAR_24++;

  if (VAR_18 == 0)
   VAR_26 = VAR_5;
  else if (VAR_20->throttle_io_period_num < VAR_25 ||
    (VAR_20->throttle_io_period_num - VAR_25) >= (uint32_t)VAR_18) {
   VAR_26 = VAR_5;
   VAR_18 = 0;
  }
 }
done:
 if (VAR_19->uu_on_throttlelist >= VAR_13) {
  FUNC_2(&VAR_20->throttle_uthlist[VAR_19->uu_on_throttlelist], VAR_19, VAR_17);
  VAR_19->uu_on_throttlelist = VAR_11;
 }
 FUNC_8(&VAR_20->throttle_lock);

 if (VAR_24) {
  FUNC_1((FUNC_0(VAR_0, 97)) | VAR_1,
          VAR_15[VAR_22], VAR_20->throttle_io_periods[VAR_22], VAR_20->throttle_io_count, 0, 0);






  FUNC_19(VAR_20->throttle_last_IO_pid[VAR_23], VAR_24);
 }

 VAR_19->uu_throttle_info = ((void*)0);
 VAR_19->uu_throttle_bc = 0;
 VAR_19->uu_lowpri_window = 0;

 FUNC_17(VAR_20);

 return (VAR_24);
}
