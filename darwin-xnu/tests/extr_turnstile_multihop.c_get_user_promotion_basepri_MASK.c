
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int thread_policy_t ;
struct thread_policy_state {int thps_user_promotion_basepri; } ;
typedef int mach_port_t ;
typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ,int *,int *) ;

__attribute__((used)) static uint32_t
FUNC_4(void)
{
 mach_msg_type_number_t VAR_4 = VAR_2;
 struct thread_policy_state VAR_5;
 boolean_t VAR_6 = VAR_0;
 mach_port_t VAR_7 = FUNC_1(FUNC_2());

 kern_return_t VAR_8 = FUNC_3(VAR_7, VAR_1,
   (thread_policy_t)&VAR_5, &VAR_4, &VAR_6);
 VAR_3; FUNC_0(VAR_8, "thread_policy_get");
 return VAR_5.thps_user_promotion_basepri;
}
