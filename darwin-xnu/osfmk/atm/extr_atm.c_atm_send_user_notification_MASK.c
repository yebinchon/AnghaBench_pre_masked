
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int thread_t ;
typedef int mach_port_t ;
typedef int mach_msg_type_number_t ;
typedef int mach_atm_subaid_t ;
typedef int kern_return_t ;
typedef int aid_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ,int *,int ,int *,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

kern_return_t
FUNC_8(
 aid_t VAR_3,
 mach_atm_subaid_t VAR_4,
 mach_port_t *VAR_5,
 uint64_t *VAR_6,
 mach_msg_type_number_t VAR_7,
 uint32_t VAR_8)
{
 mach_port_t VAR_9;
 int VAR_10;
 thread_t VAR_11 = FUNC_2();
 kern_return_t VAR_12;

 VAR_10 = FUNC_3(FUNC_4(), &VAR_9);
 if ((VAR_10 != VAR_1) || !FUNC_0(VAR_9)) {
  return VAR_0;
 }

 FUNC_7(VAR_11);
 VAR_12 = FUNC_1(VAR_9, VAR_3, VAR_4, VAR_8, VAR_5, VAR_7, VAR_6, VAR_7);
 FUNC_6(VAR_11);

 if (VAR_12 != VAR_1) {
  FUNC_5(VAR_9);

  if (VAR_12 == VAR_2) {
   VAR_12 = VAR_1;
  }
 }

 return VAR_12;
}
