
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct ipc_table_size {int dummy; } ;
struct ipc_port_request {int dummy; } ;
struct ipc_entry {int dummy; } ;
typedef TYPE_1__* ipc_table_size_t ;
struct TYPE_6__ {scalar_t__ its_size; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int,int,int) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int) ;

void
FUNC_3(void)
{
 VAR_1 = (ipc_table_size_t)
  FUNC_2(sizeof(struct ipc_table_size) *
         VAR_2);
 FUNC_0(VAR_1 != VAR_0);

 FUNC_1(VAR_1, VAR_2 - 1,
         16, sizeof(struct ipc_entry));



 VAR_1[VAR_2 - 1].its_size =
  VAR_1[VAR_2 - 2].its_size;


 VAR_3 = (ipc_table_size_t)
  FUNC_2(sizeof(struct ipc_table_size) *
         VAR_4);
 FUNC_0(VAR_3 != VAR_0);

 FUNC_1(VAR_3, VAR_4 - 1,
         2, sizeof(struct ipc_port_request));



 VAR_3[VAR_4 - 1].its_size = 0;
}
