
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int user_addr_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef TYPE_1__* proc_t ;
typedef scalar_t__ os_reason_t ;
typedef int mach_exception_code_t ;
typedef int kern_return_t ;
struct TYPE_4__ {int p_pid; int p_user_faults; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int VAR_7 ;
 int FUNC_4 (int,int ,int,int,int ,int ) ;




 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_5 (int *,int*,int,int ,int ) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int,int,int ,int,int ,int) ;
 int FUNC_8 () ;
 int VAR_13 ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (TYPE_1__*,int ,int ,scalar_t__) ;
 int FUNC_11 (int ,int,scalar_t__) ;

__attribute__((used)) static int
FUNC_12(proc_t VAR_14,
  uint32_t VAR_15, uint64_t VAR_16,
  user_addr_t VAR_17, uint32_t VAR_18,
  user_addr_t VAR_19, uint64_t VAR_20,
  uint32_t VAR_21)
{
 os_reason_t VAR_22 = VAR_10;
 kern_return_t VAR_23 = 128;

 if (VAR_21 & VAR_9) {
  uint32_t VAR_24 = FUNC_6(&VAR_14->p_user_faults,
    VAR_13);
  for (;;) {
   if (VAR_24 >= VAR_11) {
    return VAR_6;
   }

   if (FUNC_5(&VAR_14->p_user_faults,
     &VAR_24, VAR_24 + 1, VAR_13,
     VAR_13)) {
    break;
   }
  }
 }

 FUNC_4(FUNC_0(VAR_1, VAR_0) | VAR_2,
     VAR_14->p_pid, VAR_15,
     VAR_16, 0, 0);

 VAR_22 = FUNC_7(VAR_15, VAR_16,
   VAR_17, VAR_18, VAR_19, VAR_20 | VAR_8);

 if (VAR_21 & VAR_9) {
  mach_exception_code_t VAR_25 = 0;

  FUNC_3(VAR_25, VAR_7);
  FUNC_1(VAR_25, 0);
  FUNC_2(VAR_25, VAR_15);

  if (VAR_22 == VAR_10) {
   VAR_23 = 129;
  } else {
   VAR_23 = FUNC_11(VAR_25, VAR_16, VAR_22);
  }
  FUNC_9(VAR_22);
 } else {




  FUNC_10(VAR_14, FUNC_8(), VAR_12, VAR_22);
 }

 switch (VAR_23) {
 case 128:
  return 0;
 case 130:
  return VAR_5;
 case 131:
  return VAR_4;
 case 129:
 default:
  return VAR_3;
 }
}
