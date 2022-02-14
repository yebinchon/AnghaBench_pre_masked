
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* msgh_remote_port; } ;
struct TYPE_7__ {TYPE_1__ not_header; } ;
typedef TYPE_2__ mach_no_senders_notification_t ;
typedef int mach_msg_header_t ;
typedef scalar_t__ ipc_voucher_t ;
typedef TYPE_3__* ipc_port_t ;
struct TYPE_8__ {scalar_t__ ip_kobject; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (scalar_t__) ;

void
FUNC_4(mach_msg_header_t *VAR_1)
{
 mach_no_senders_notification_t *VAR_2 = (void *)VAR_1;
 ipc_port_t VAR_3 = VAR_2->not_header.msgh_remote_port;
 ipc_voucher_t VAR_4;

 FUNC_0(FUNC_1(VAR_3));
 FUNC_0(VAR_0 == FUNC_2(VAR_3));
 VAR_4 = (ipc_voucher_t)VAR_3->ip_kobject;

 FUNC_3(VAR_4);
}
