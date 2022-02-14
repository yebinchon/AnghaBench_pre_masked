
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int thread_info_t ;
struct TYPE_2__ {int pth_priority; } ;
typedef TYPE_1__ thread_extended_info_data_t ;
typedef int mach_port_t ;
typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(mach_port_t VAR_4, mach_port_t VAR_5, int VAR_6)
{
 thread_extended_info_data_t VAR_7;
 kern_return_t VAR_8;

 while (1) {
  mach_msg_type_number_t VAR_9 = VAR_2;
  VAR_8 = FUNC_2(VAR_4, VAR_1,
       (thread_info_t)&VAR_7, &VAR_9);

  VAR_3; FUNC_0(VAR_8, "thread_info");

  if (VAR_7.pth_priority >= VAR_6) {
   FUNC_1("Target thread boosted\n");
   break;
  }
  FUNC_3(VAR_5, VAR_0, 0);
 }
}
