
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct kevent_qos_s {scalar_t__* ext; } ;
typedef int mach_port_type_t ;
typedef int mach_port_t ;
struct TYPE_3__ {int msgh_remote_port; } ;
typedef TYPE_1__ mach_msg_header_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (int,char*) ;
 int VAR_1 ;
 int FUNC_4 (int ,int,int*) ;
 int FUNC_5 () ;

__attribute__((used)) static mach_port_type_t
FUNC_6(struct kevent_qos_s *VAR_2)
{
 mach_msg_header_t *VAR_3;
 mach_port_t VAR_4;
 mach_port_type_t VAR_5;
 kern_return_t VAR_6;

 VAR_3 = (void*)VAR_2->ext[0];
 VAR_1; FUNC_2(VAR_3, "msg hdr");

 VAR_4 = VAR_3->msgh_remote_port;
 VAR_1;FUNC_3(FUNC_0(VAR_4), "reply port valid");
 VAR_6 = FUNC_4(FUNC_5(), VAR_4, &VAR_5);
 VAR_1; FUNC_1(VAR_6, "mach_port_type");
 VAR_1; FUNC_3(VAR_5 & VAR_0, "send once received");

 return VAR_4;
}
