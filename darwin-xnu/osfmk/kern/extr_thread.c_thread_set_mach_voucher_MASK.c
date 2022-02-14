
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
struct thread_group {int dummy; } ;
typedef int * ledger_t ;
typedef int kern_return_t ;
typedef scalar_t__ ipc_voucher_t ;
struct TYPE_9__ {scalar_t__ ith_voucher_name; scalar_t__ ith_voucher; scalar_t__ started; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,uintptr_t,uintptr_t,int ,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_2 (uintptr_t) ;
 int FUNC_3 (scalar_t__,int **,struct thread_group**) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_5 () ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;

kern_return_t
FUNC_11(
 thread_t VAR_8,
 ipc_voucher_t VAR_9)
{
 ipc_voucher_t VAR_10;
 ledger_t VAR_11 = ((void*)0);
 struct thread_group *VAR_12 = ((void*)0);

 if (VAR_7 == VAR_8)
  return VAR_3;

 if (VAR_8 != FUNC_5() && VAR_8->started)
  return VAR_3;

 FUNC_6(VAR_9);
 FUNC_3(VAR_9, &VAR_11, &VAR_12);

 FUNC_8(VAR_8);
 VAR_10 = VAR_8->ith_voucher;
 VAR_8->ith_voucher = VAR_9;
 VAR_8->ith_voucher_name = VAR_5;
 FUNC_9(VAR_8);

 FUNC_4(VAR_8, VAR_11);

 FUNC_0(VAR_2,
      FUNC_1(VAR_1,VAR_6) | VAR_0,
      (uintptr_t)FUNC_10(VAR_8),
      (uintptr_t)VAR_5,
      FUNC_2((uintptr_t)VAR_9),
      3, 0);

 FUNC_7(VAR_10);

 return VAR_4;
}
