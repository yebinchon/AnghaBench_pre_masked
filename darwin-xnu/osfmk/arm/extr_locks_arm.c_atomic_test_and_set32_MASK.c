
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef enum memory_order { ____Placeholder_memory_order } memory_order ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int*,int*,int) ;
 scalar_t__ FUNC_2 (int*,int,int,int) ;
 int FUNC_3 () ;

__attribute__((used)) static boolean_t
FUNC_4(uint32_t *VAR_2, uint32_t VAR_3, uint32_t VAR_4, enum memory_order VAR_5, boolean_t VAR_6)
{
 uint32_t VAR_7, VAR_8;

 for ( ; ; ) {
  VAR_7 = FUNC_1(VAR_2, &VAR_8, VAR_5);
  if (VAR_7 & VAR_3) {
   if (VAR_6)
    FUNC_3();
   else
    FUNC_0();
   return VAR_0;
  }
  VAR_7 |= VAR_4;
  if (FUNC_2(VAR_2, VAR_8, VAR_7, VAR_5))
   return VAR_1;
 }
}
