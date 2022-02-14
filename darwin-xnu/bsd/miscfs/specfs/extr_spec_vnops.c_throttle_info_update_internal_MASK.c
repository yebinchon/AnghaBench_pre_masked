
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* uthread_t ;
struct bufattr {int ba_flags; } ;
struct _throttle_io_info_t {int throttle_io_count; int * throttle_last_IO_timestamp; int * throttle_window_start_timestamp; int * throttle_inflight_count; int * throttle_last_IO_pid; scalar_t__ throttle_disabled; } ;
typedef scalar_t__ boolean_t ;
struct TYPE_8__ {int p_pid; } ;
struct TYPE_7__ {int uu_throttle_bc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct bufattr*) ;
 scalar_t__ FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ,int,int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_6__* FUNC_7 () ;
 int FUNC_8 () ;
 TYPE_1__* FUNC_9 (int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_10 (int *) ;
 int FUNC_11 () ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,struct _throttle_io_info_t*,int ,scalar_t__) ;

__attribute__((used)) static
int FUNC_14(struct _throttle_io_info_t *VAR_10, uthread_t VAR_11, int VAR_12, boolean_t VAR_13, boolean_t VAR_14, struct bufattr *VAR_15)
{
 int VAR_16;

 if (VAR_9 == 0 || VAR_10->throttle_disabled)
  return VAR_7;

 if (VAR_11 == ((void*)0))
  VAR_11 = FUNC_9(FUNC_8());

 if (VAR_15 && VAR_14 && !VAR_11->uu_throttle_bc) {
  VAR_16 = FUNC_1(VAR_15);
  if (FUNC_2(VAR_15->ba_flags, VAR_0)) {
   VAR_16--;
  }
 } else {
  VAR_16 = FUNC_12(VAR_11);
 }

 if (VAR_16 != VAR_7) {
        if(!FUNC_2(VAR_12, VAR_2)) {
   VAR_10->throttle_last_IO_pid[VAR_16] = FUNC_11();
   if (VAR_14 && !VAR_11->uu_throttle_bc) {
    if (((void*)0) != VAR_15) {
     FUNC_6(VAR_15->ba_flags, VAR_1);
    }
    FUNC_5(&VAR_10->throttle_inflight_count[VAR_16]);
   } else {
    FUNC_10(&VAR_10->throttle_window_start_timestamp[VAR_16]);
   }
   FUNC_3((FUNC_0(VAR_4, VAR_6)) | VAR_3,
     FUNC_7()->p_pid, VAR_16, 0, 0, 0);
  }
  FUNC_10(&VAR_10->throttle_last_IO_timestamp[VAR_16]);
 }


 if (VAR_16 >= VAR_8) {
         FUNC_4(1, &VAR_10->throttle_io_count);

  FUNC_13(VAR_11, VAR_10, VAR_5, VAR_13);
 }

 return VAR_16;
}
