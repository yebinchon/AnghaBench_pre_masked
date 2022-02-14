
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ thread_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (char*) ;

int
FUNC_5(thread_t VAR_0, uint32_t VAR_1)
{

 if (VAR_0 != FUNC_1()) {
  FUNC_4("pending to non-current thread");
 }


 uint32_t VAR_2 = FUNC_2(VAR_0);


 if (!(VAR_2 & VAR_1)) {

  VAR_2 |= VAR_1;
  FUNC_3(VAR_0, VAR_2);


  FUNC_0(VAR_0);
  return 1;
 }

 return 0;
}
