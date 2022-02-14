
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int thread_policy_t ;
struct TYPE_3__ {int timeshare; } ;
typedef TYPE_1__ thread_extended_policy_data_t ;
struct TYPE_4__ {int affinity_tag; } ;
typedef TYPE_2__ thread_affinity_policy_data_t ;
typedef scalar_t__ kern_return_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_3(int VAR_8) {
 kern_return_t VAR_9;
        thread_extended_policy_data_t VAR_10;
        thread_affinity_policy_data_t VAR_11;

 if (!VAR_7) {
  VAR_10.timeshare = VAR_0;
  VAR_9 = FUNC_2(
    FUNC_0(), VAR_4,
    (thread_policy_t) &VAR_10,
    VAR_5);
  if (VAR_9 != VAR_1)
   FUNC_1("thread_policy_set(THREAD_EXTENDED_POLICY) returned %d\n", VAR_9);
 }

        if (VAR_6) {
                VAR_11.affinity_tag = VAR_8;
                VAR_9 = FUNC_2(
                                FUNC_0(), VAR_2,
                                (thread_policy_t) &VAR_11,
                                VAR_3);
                if (VAR_9 != VAR_1)
                        FUNC_1("thread_policy_set(THREAD_AFFINITY_POLICY) returned %d\n", VAR_9);
        }
}
