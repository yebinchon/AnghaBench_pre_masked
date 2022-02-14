
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_t ;
struct work_interval {int dummy; } ;
typedef scalar_t__ mach_port_name_t ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__,struct work_interval**) ;
 int FUNC_2 (int ,struct work_interval*) ;

kern_return_t
FUNC_3(thread_t VAR_2,
                        mach_port_name_t VAR_3)
{
 struct work_interval *VAR_4 = ((void*)0);
 kern_return_t VAR_5;

 if (VAR_3 == VAR_1) {

  FUNC_2(VAR_2, ((void*)0));
  return VAR_0;
 }

 VAR_5 = FUNC_1(VAR_3, &VAR_4);
 if (VAR_5 != VAR_0)
  return VAR_5;


 FUNC_0(VAR_4 != ((void*)0));

 FUNC_2(VAR_2, VAR_4);



 return VAR_0;
}
