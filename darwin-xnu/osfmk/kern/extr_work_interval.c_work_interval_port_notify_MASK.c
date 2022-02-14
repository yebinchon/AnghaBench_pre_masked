
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct work_interval {int wi_port; } ;
struct TYPE_11__ {TYPE_3__* msgh_remote_port; } ;
struct TYPE_12__ {scalar_t__ not_count; TYPE_1__ not_header; } ;
typedef TYPE_2__ mach_no_senders_notification_t ;
typedef int mach_msg_header_t ;
typedef TYPE_3__* ipc_port_t ;
struct TYPE_13__ {scalar_t__ ip_mscount; scalar_t__ ip_srights; scalar_t__ ip_kobject; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int ,int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (struct work_interval*) ;

void
FUNC_9(mach_msg_header_t *VAR_4)
{
 mach_no_senders_notification_t *VAR_5 = (void *)VAR_4;
 ipc_port_t VAR_6 = VAR_5->not_header.msgh_remote_port;
 struct work_interval *VAR_7 = ((void*)0);

 if (!FUNC_0(VAR_6))
  FUNC_7("work_interval_port_notify(): invalid port");

 FUNC_3(VAR_6);

 if (!FUNC_1(VAR_6))
  FUNC_7("work_interval_port_notify(): inactive port %p", VAR_6);

 if (FUNC_2(VAR_6) != VAR_1)
  FUNC_7("work_interval_port_notify(): not the right kobject: %p, %d\n",
        VAR_6, FUNC_2(VAR_6));

 if (VAR_6->ip_mscount != VAR_5->not_count)
  FUNC_7("work_interval_port_notify(): unexpected make-send count: %p, %d, %d",
        VAR_6, VAR_6->ip_mscount, VAR_5->not_count);

 if (VAR_6->ip_srights != 0)
  FUNC_7("work_interval_port_notify(): unexpected send right count: %p, %d",
        VAR_6, VAR_6->ip_srights);

 VAR_7 = (struct work_interval *)VAR_6->ip_kobject;

 if (VAR_7 == ((void*)0))
  FUNC_7("work_interval_port_notify(): missing kobject: %p", VAR_6);

 FUNC_5(VAR_6, VAR_2, VAR_0);

 VAR_7->wi_port = VAR_3;

 FUNC_4(VAR_6);

 FUNC_6(VAR_6);
 FUNC_8(VAR_7);
}
