
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union kds_ptr {scalar_t__ raw; } ;
typedef scalar_t__ uint64_t ;
typedef size_t uint32_t ;
struct kd_storage {size_t kds_bufindx; scalar_t__ kds_timestamp; int kds_bufcnt; TYPE_1__* kds_records; } ;
struct kd_bufinfo {union kds_ptr kd_list_tail; } ;
struct TYPE_4__ {size_t debugid; uintptr_t arg1; uintptr_t arg2; uintptr_t arg3; uintptr_t arg4; uintptr_t arg5; } ;
typedef TYPE_1__ kd_buf ;
struct TYPE_5__ {int kdebug_slowcheck; int kdebug_flags; scalar_t__ oldest_time; scalar_t__ enabled; scalar_t__ kds_inuse_count; int * kdebug_iops; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (size_t,size_t,size_t*) ;
 struct kd_storage* FUNC_2 (union kds_ptr) ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 TYPE_3__ VAR_12 ;
 scalar_t__ FUNC_7 (int *,size_t) ;
 int FUNC_8 (TYPE_1__*,scalar_t__,size_t) ;
 int VAR_13 ;
 int FUNC_9 () ;
 struct kd_bufinfo* VAR_14 ;
 int VAR_15 ;
 int FUNC_10 (size_t,size_t,scalar_t__,uintptr_t,uintptr_t,uintptr_t,uintptr_t,uintptr_t) ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ FUNC_11 (int ,size_t) ;

void
FUNC_12(
 uint32_t VAR_24,
 uint32_t VAR_25,
 uint64_t VAR_26,
 uintptr_t VAR_27,
 uintptr_t VAR_28,
 uintptr_t VAR_29,
 uintptr_t VAR_30,
 uintptr_t VAR_31
 )
{
 uint32_t VAR_32;
 kd_buf *VAR_33;
 struct kd_bufinfo *VAR_34;
 struct kd_storage *VAR_35;
 union kds_ptr VAR_36;

 if (VAR_12.kdebug_slowcheck) {

  if ( (VAR_12.kdebug_slowcheck & VAR_11) || !(VAR_15 & (VAR_9|VAR_7)))
   goto out1;

  if (VAR_12.kdebug_flags & VAR_5) {
   if (FUNC_11(VAR_13, VAR_25))
    goto record_event;
   goto out1;
  }
  else if (VAR_12.kdebug_flags & VAR_3) {
   if (VAR_25 >= VAR_16 && VAR_25 <= VAR_17)
    goto record_event;
   goto out1;
  }
  else if (VAR_12.kdebug_flags & VAR_6) {
   if ((VAR_25 & VAR_2) != VAR_18 &&
    (VAR_25 & VAR_2) != VAR_19 &&
    (VAR_25 & VAR_2) != VAR_20 &&
    (VAR_25 & VAR_2) != VAR_21)
    goto out1;
  }
 }

record_event:
 if (VAR_26 < VAR_12.oldest_time) {
  goto out1;
 }
 FUNC_5();

 if (VAR_12.enabled == 0)
  goto out;

 VAR_34 = &VAR_14[VAR_24];
 VAR_26 &= VAR_4;







retry_q:
 VAR_36 = VAR_34->kd_list_tail;

 if (VAR_36.raw != VAR_10) {
  VAR_35 = FUNC_2(VAR_36);
  VAR_32 = VAR_35->kds_bufindx;
 } else {
  VAR_35 = ((void*)0);
  VAR_32 = VAR_0;
 }

 if (VAR_35 == ((void*)0) || VAR_32 >= VAR_0) {
  if (FUNC_3(VAR_24) == VAR_1) {




   goto out;
  }
  goto retry_q;
 }
 if ( !FUNC_1(VAR_32, VAR_32 + 1, &VAR_35->kds_bufindx))
  goto retry_q;


 if (VAR_26 < VAR_35->kds_timestamp)
  VAR_35->kds_timestamp = VAR_26;

 VAR_33 = &VAR_35->kds_records[VAR_32];

 VAR_33->debugid = VAR_25;
 VAR_33->arg1 = VAR_27;
 VAR_33->arg2 = VAR_28;
 VAR_33->arg3 = VAR_29;
 VAR_33->arg4 = VAR_30;
 VAR_33->arg5 = VAR_31;

 FUNC_8(VAR_33, VAR_26, VAR_24);

 FUNC_0(1, &VAR_35->kds_bufcnt);
out:
 FUNC_6();
out1:
 if ((VAR_22 && VAR_12.kds_inuse_count >= VAR_23)) {
  FUNC_9();
 }
}
