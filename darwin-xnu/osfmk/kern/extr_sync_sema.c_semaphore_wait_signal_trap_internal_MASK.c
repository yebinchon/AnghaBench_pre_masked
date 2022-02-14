
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int semaphore_t ;
typedef int mach_port_name_t ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,unsigned long long,int ,void (*) (scalar_t__)) ;

kern_return_t
FUNC_3(
 mach_port_name_t VAR_2,
 mach_port_name_t VAR_3,
 void (*VAR_4)(kern_return_t))
{
 semaphore_t VAR_5;
 semaphore_t VAR_6;
 kern_return_t VAR_7;

 VAR_7 = FUNC_0(VAR_3, &VAR_6);
 if (VAR_7 == VAR_0) {
  VAR_7 = FUNC_0(VAR_2, &VAR_5);
  if (VAR_7 == VAR_0) {
   VAR_7 = FUNC_2(VAR_5,
     VAR_6,
     0ULL, VAR_1,
     VAR_4);
   FUNC_1(VAR_5);
  }
  FUNC_1(VAR_6);
 }
 return VAR_7;
}
