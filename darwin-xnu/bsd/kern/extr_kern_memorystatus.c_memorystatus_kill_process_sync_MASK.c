
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int snapshot_size ;
typedef int pid_t ;
typedef int os_reason_t ;
typedef int memorystatus_jetsam_snapshot_t ;
typedef int memorystatus_jetsam_snapshot_entry_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_2__ {scalar_t__ notification_time; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,scalar_t__,int ,int *,scalar_t__*) ;
 int FUNC_4 (int ,size_t*,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static boolean_t
FUNC_7(pid_t VAR_6, uint32_t VAR_7, os_reason_t VAR_8) {
 boolean_t VAR_9;

 uint32_t VAR_10 = 0;

 if (VAR_6 == -1) {

  VAR_9 = FUNC_3(VAR_0, VAR_0, VAR_7, VAR_8, ((void*)0), &VAR_10);
 } else {
  VAR_9 = FUNC_2(VAR_6, VAR_7, VAR_8);
 }

 if (VAR_10) {
  FUNC_1();
 }

 if (VAR_9 == VAR_0) {

  FUNC_5();
  size_t VAR_11 = sizeof(memorystatus_jetsam_snapshot_t) +
   sizeof(memorystatus_jetsam_snapshot_entry_t) * VAR_3;
  uint64_t VAR_12 = FUNC_0();
  VAR_2->notification_time = VAR_12;
  if (VAR_3 > 0 && (VAR_4 == 0 ||
    VAR_12 > VAR_4 + VAR_5)) {
   FUNC_6();
   int VAR_13 = FUNC_4(VAR_1, &VAR_11, sizeof(VAR_11));
   if (!VAR_13) {
    FUNC_5();
    VAR_4 = VAR_12;
    FUNC_6();
   }
  } else {
   FUNC_6();
  }
 }

 return VAR_9;
}
