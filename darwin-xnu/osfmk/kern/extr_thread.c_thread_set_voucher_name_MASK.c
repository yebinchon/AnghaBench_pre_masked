
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
struct thread_group {int dummy; } ;
typedef scalar_t__ mach_port_name_t ;
typedef int * ledger_t ;
typedef int kern_return_t ;
typedef scalar_t__ ipc_voucher_t ;
struct TYPE_7__ {scalar_t__ ith_voucher; scalar_t__ ith_voucher_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,uintptr_t,uintptr_t,int ,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_8 ;
 int FUNC_3 (uintptr_t) ;
 int FUNC_4 (scalar_t__,int **,struct thread_group**) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 TYPE_1__* FUNC_7 () ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;

kern_return_t
FUNC_12(mach_port_name_t VAR_9)
{
 thread_t VAR_10 = FUNC_7();
 ipc_voucher_t VAR_11 = VAR_2;
 ipc_voucher_t VAR_12;
 ledger_t VAR_13 = ((void*)0);
 struct thread_group *VAR_14 = ((void*)0);

 if (VAR_7 == VAR_9)
  return VAR_5;




 if (FUNC_2(VAR_9)) {
  VAR_11 = FUNC_6(VAR_9);
  if (VAR_2 == VAR_11)
   return VAR_4;
 }
 FUNC_4(VAR_11, &VAR_13, &VAR_14);

 FUNC_9(VAR_10);
 VAR_12 = VAR_10->ith_voucher;
 VAR_10->ith_voucher_name = VAR_9;
 VAR_10->ith_voucher = VAR_11;
 FUNC_10(VAR_10);

 FUNC_5(VAR_10, VAR_13);

 FUNC_0(VAR_3,
      FUNC_1(VAR_1,VAR_8) | VAR_0,
      (uintptr_t)FUNC_11(VAR_10),
      (uintptr_t)VAR_9,
      FUNC_3((uintptr_t)VAR_11),
      1, 0);

 if (VAR_2 != VAR_12)
  FUNC_8(VAR_12);

 return VAR_6;
}
