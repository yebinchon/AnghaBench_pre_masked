
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct fileglob {int dummy; } ;
struct TYPE_10__ {TYPE_3__* msgh_remote_port; } ;
struct TYPE_11__ {TYPE_1__ not_header; } ;
typedef TYPE_2__ mach_no_senders_notification_t ;
typedef int mach_msg_header_t ;
typedef TYPE_3__* ipc_port_t ;
struct TYPE_12__ {scalar_t__ ip_srights; scalar_t__ ip_kobject; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct fileglob*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (char*) ;

void
FUNC_8(mach_msg_header_t *VAR_1)
{
 mach_no_senders_notification_t *VAR_2 = (void *)VAR_1;
 ipc_port_t VAR_3 = VAR_2->not_header.msgh_remote_port;
 struct fileglob *VAR_4 = ((void*)0);

 if (!FUNC_0(VAR_3))
  FUNC_7("Invalid port passed to fileport_notify()\n");

 FUNC_4(VAR_3);

 VAR_4 = (struct fileglob *)VAR_3->ip_kobject;

 if (!FUNC_2(VAR_3))
  FUNC_7("Inactive port passed to fileport_notify()\n");
 if (FUNC_3(VAR_3) != VAR_0)
  FUNC_7("Port of type other than IKOT_FILEPORT passed to fileport_notify()\n");
 if (VAR_4 == ((void*)0))
  FUNC_7("fileport without an assocated fileglob\n");

 if (VAR_3->ip_srights == 0) {
  FUNC_5(VAR_3);

  FUNC_1(VAR_4);
  FUNC_6(VAR_3);
 } else {
  FUNC_5(VAR_3);
 }
}
