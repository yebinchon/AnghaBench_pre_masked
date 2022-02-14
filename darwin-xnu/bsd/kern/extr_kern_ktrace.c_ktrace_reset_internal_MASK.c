
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_4(uint32_t VAR_9)
{
 if (!VAR_6) {
  VAR_5 &= ~VAR_9;
 }

 if (VAR_9 & VAR_1) {
  FUNC_1();
 }
 if (VAR_9 & VAR_0) {
  FUNC_0();
 }

 if (VAR_5 == 0) {
  if (VAR_7 == VAR_3) {

   FUNC_2();
  } else if (VAR_7 == VAR_2) {

   VAR_8 = 1;
   FUNC_3();
   VAR_7 = VAR_4;
  }
 }
}
