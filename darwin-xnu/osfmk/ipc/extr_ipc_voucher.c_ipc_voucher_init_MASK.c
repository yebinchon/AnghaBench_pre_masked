
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipc_voucher_attr_control {int dummy; } ;
struct ipc_voucher {int dummy; } ;
typedef int natural_t ;
typedef size_t iv_index_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int * VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 () ;
 int FUNC_4 (int,int,int,char*) ;
 int FUNC_5 (int ,int ,int ) ;

void
FUNC_6(void)
{
 natural_t VAR_9 = (VAR_7 + VAR_8) * 2;
 natural_t VAR_10 = VAR_1;
 iv_index_t VAR_11;

 VAR_5 = FUNC_4(sizeof(struct ipc_voucher),
     VAR_9 * sizeof(struct ipc_voucher),
     sizeof(struct ipc_voucher),
     "ipc vouchers");
 FUNC_5(VAR_5, VAR_3, VAR_2);

 VAR_4 = FUNC_4(sizeof(struct ipc_voucher_attr_control),
     VAR_10 * sizeof(struct ipc_voucher_attr_control),
     sizeof(struct ipc_voucher_attr_control),
     "ipc voucher attr controls");
 FUNC_5(VAR_4, VAR_3, VAR_2);


 FUNC_1();
 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++)
  FUNC_2(&VAR_6[VAR_11]);


 FUNC_0();




}
