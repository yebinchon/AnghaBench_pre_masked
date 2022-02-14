
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_group {int dummy; } ;
typedef int ledger_t ;
typedef int kern_return_t ;
typedef int ipc_voucher_t ;
typedef int bank_account_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct thread_group* FUNC_1 (int ) ;
 struct thread_group* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;

kern_return_t
FUNC_6(
 ipc_voucher_t VAR_2,
 ledger_t *VAR_3,
 struct thread_group **VAR_4)
{
 bank_account_t VAR_5;
 struct thread_group *VAR_6 = ((void*)0);

 VAR_5 = FUNC_3(VAR_2);
 *VAR_3 = FUNC_0(VAR_5);
 VAR_6 = FUNC_1(VAR_5);


 if (VAR_6 == FUNC_2(
   FUNC_5(FUNC_4(), VAR_0))) {
  VAR_6 = ((void*)0);
 }
 *VAR_4 = VAR_6;
 return VAR_1;
}
