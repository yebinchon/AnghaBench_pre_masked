
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


union cvmx_buf_ptr {int u64; } ;
typedef int uint64_t ;
typedef int cvmx_pko_status_t ;
typedef scalar_t__ cvmx_pko_lock_t ;
struct TYPE_3__ {int u64; } ;
typedef TYPE_1__ cvmx_pko_command_word0_t ;
typedef scalar_t__ cvmx_cmd_queue_result_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ,int,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static inline cvmx_pko_status_t FUNC_5(
 uint64_t VAR_8,
 uint64_t VAR_9,
 cvmx_pko_command_word0_t VAR_10,
 union cvmx_buf_ptr VAR_11,
 uint64_t VAR_12,
 cvmx_pko_lock_t VAR_13)
{
 cvmx_cmd_queue_result_t VAR_14;
 if (VAR_13 == VAR_4)
  FUNC_3();
 VAR_14 = FUNC_1(FUNC_0(VAR_9),
           (VAR_13 == VAR_5),
           VAR_10.u64, VAR_11.u64, VAR_12);
 if (FUNC_4(VAR_14 == VAR_2)) {
  FUNC_2(VAR_8, VAR_9, 3);
  return VAR_7;
 } else if ((VAR_14 == VAR_1)
     || (VAR_14 == VAR_0)) {
  return VAR_6;
 } else {
  return VAR_3;
 }
}
