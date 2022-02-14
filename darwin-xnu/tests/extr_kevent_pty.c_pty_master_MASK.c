
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_6(void)
{
 pid_t VAR_2;
 int VAR_3;

 VAR_2 = FUNC_2();
 if (VAR_2 == 0) {
  FUNC_0();
 }
 VAR_3 = FUNC_3(VAR_2, VAR_2);
 if (VAR_3 < 0) {
  FUNC_1(1);
 }
 VAR_3 = FUNC_5(VAR_0, VAR_2);
 if (VAR_3 < 0) {
  FUNC_1(1);
 }

 FUNC_4(VAR_1);
 FUNC_1(1);
}
