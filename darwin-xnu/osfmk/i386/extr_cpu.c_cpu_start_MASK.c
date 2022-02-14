
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*,int) ;

kern_return_t
FUNC_5(
 int VAR_1)
{
 kern_return_t VAR_2;

 if (VAR_1 == FUNC_1()) {
  FUNC_0();
  return VAR_0;
 }






 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2 != VAR_0) {




  VAR_2 = FUNC_2(VAR_1);
 }

 if (VAR_2 != VAR_0)
  FUNC_4("cpu: cpu_start(%d) returning failure!\n", VAR_1);

 return(VAR_2);
}
