
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mach_right_send_once_t ;
struct TYPE_3__ {int mrr_name; } ;
typedef TYPE_1__ mach_right_recv_t ;
typedef int mach_port_t ;
typedef int mach_msg_type_name_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int ,int ,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

mach_right_send_once_t
FUNC_4(mach_right_recv_t VAR_2)
{
 mach_msg_type_name_t VAR_3 = 0;
 mach_port_t VAR_4 = VAR_1;
 kern_return_t VAR_5 = FUNC_1(FUNC_3(), VAR_2.mrr_name,
   VAR_0, &VAR_4, &VAR_3);
 FUNC_0("create send-once right", VAR_5);

 return FUNC_2(VAR_4);
}
