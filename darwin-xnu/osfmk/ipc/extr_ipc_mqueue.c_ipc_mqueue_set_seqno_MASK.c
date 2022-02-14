
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int mach_port_seqno_t ;
typedef TYPE_1__* ipc_mqueue_t ;
struct TYPE_5__ {int imq_seqno; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(
 ipc_mqueue_t VAR_0,
 mach_port_seqno_t VAR_1)
{
 FUNC_0(VAR_0);
 VAR_0->imq_seqno = VAR_1;
 FUNC_1(VAR_0);
}
