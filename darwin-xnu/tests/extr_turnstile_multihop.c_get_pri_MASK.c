
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int thread_t ;
typedef int thread_info_t ;
struct TYPE_2__ {int pth_curpri; } ;
typedef TYPE_1__ thread_extended_info_data_t ;
typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_2(thread_t VAR_3) {
 kern_return_t VAR_4;

 thread_extended_info_data_t VAR_5;
 mach_msg_type_number_t VAR_6 = VAR_1;
 VAR_4 = FUNC_1(VAR_3, VAR_0,
                    (thread_info_t)&VAR_5, &VAR_6);

 VAR_2; FUNC_0(VAR_4, "thread_info");

 return VAR_5.pth_curpri;
}
