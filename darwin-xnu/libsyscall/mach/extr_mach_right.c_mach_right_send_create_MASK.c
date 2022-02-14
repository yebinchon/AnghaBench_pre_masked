
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mach_right_send_t ;
struct TYPE_3__ {int mrr_name; } ;
typedef TYPE_1__ mach_right_recv_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

mach_right_send_t
FUNC_4(mach_right_recv_t VAR_2)
{
 kern_return_t VAR_3 = VAR_0;

 VAR_3 = FUNC_1(FUNC_3(), VAR_2.mrr_name, VAR_2.mrr_name,
   VAR_1);
 FUNC_0("create send right", VAR_3);

 return FUNC_2(VAR_2.mrr_name);
}
