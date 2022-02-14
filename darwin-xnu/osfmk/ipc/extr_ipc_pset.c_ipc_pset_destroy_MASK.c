
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* ipc_pset_t ;
struct TYPE_7__ {int io_bits; } ;
struct TYPE_8__ {int ips_messages; TYPE_1__ ips_object; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;

void
FUNC_9(
 ipc_pset_t VAR_1)
{
 FUNC_0(FUNC_6(VAR_1));

 VAR_1->ips_object.io_bits &= ~VAR_0;





 FUNC_5(&VAR_1->ips_messages);





 FUNC_1(&VAR_1->ips_messages);
 FUNC_3(&VAR_1->ips_messages);
 FUNC_2(&VAR_1->ips_messages);

 FUNC_4(&VAR_1->ips_messages);

 FUNC_8(VAR_1);
 FUNC_7(VAR_1);
}
