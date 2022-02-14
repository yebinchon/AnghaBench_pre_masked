
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int temp_buf ;
struct ipc_importance_task {int dummy; } ;
struct ipc_importance_inherit {int dummy; } ;
typedef int natural_t ;
typedef int mach_voucher_attr_value_handle_t ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 () ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int *,int ,int ,int *) ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int,int,int,char*) ;
 int FUNC_6 (int ,int ,int ) ;

void
FUNC_7(void)
{
 natural_t VAR_12 = (VAR_10 + VAR_11) * 2;
 char VAR_13[26];
 kern_return_t VAR_14;

 if (FUNC_0("imp_interactive_receiver", VAR_13, sizeof(VAR_13))) {
  VAR_7 = VAR_2;
 }

 VAR_9 = FUNC_5(sizeof(struct ipc_importance_task),
      VAR_12 * sizeof(struct ipc_importance_task),
      sizeof(struct ipc_importance_task),
      "ipc task importance");
 FUNC_6(VAR_9, VAR_3, VAR_2);

 VAR_6 = FUNC_5(sizeof(struct ipc_importance_inherit),
         VAR_12 * sizeof(struct ipc_importance_inherit),
         sizeof(struct ipc_importance_inherit),
         "ipc importance inherit");
 FUNC_6(VAR_6, VAR_3, VAR_2);







 FUNC_1();

 VAR_14 = FUNC_2(&VAR_8,
      (mach_voucher_attr_value_handle_t)0,
      VAR_1,
      &VAR_5);
 if (VAR_0 != VAR_14)
  FUNC_3("Voucher importance manager register returned %d", VAR_14);
}
