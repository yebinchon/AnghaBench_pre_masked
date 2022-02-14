
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ VAR_7 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void
FUNC_6(void)
{
 uint64_t VAR_8, VAR_9;
 int VAR_10 = 0;
 boolean_t VAR_11 = FUNC_3(VAR_5);
 if (VAR_7 == VAR_1 || VAR_7 == VAR_0) {
  VAR_8 = FUNC_4(VAR_6);
  VAR_9 = (VAR_7 == VAR_1) ? VAR_2 : VAR_3;
  FUNC_0((FUNC_2() & VAR_4) != 0);
  if (VAR_8 != VAR_9) {
   VAR_10 = 1;
   FUNC_5(VAR_9 >> 32, VAR_9 & 0xFFFFFFFFUL);
  }
 }

 FUNC_1();

 if (VAR_10) {
  FUNC_5(VAR_8 >> 32, VAR_8 & 0xFFFFFFFFUL);
 }

 FUNC_3(VAR_11);
}
