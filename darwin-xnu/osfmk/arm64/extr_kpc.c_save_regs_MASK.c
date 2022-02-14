
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int) ;
 int** VAR_5 ;
 int** VAR_6 ;
 int * VAR_7 ;
 int ** VAR_8 ;

__attribute__((used)) static void
FUNC_6(void)
{
 int VAR_9 = FUNC_2();

 __asm__ volatile("dmb ish");

 FUNC_1(FUNC_4() == VAR_0);


 VAR_5[VAR_9][0] = FUNC_0(VAR_2) | 0x3;


 VAR_6[VAR_9][0] = FUNC_0(VAR_3);
 VAR_6[VAR_9][1] = FUNC_0(VAR_4);

 FUNC_3(VAR_7[VAR_9]);





 for (int VAR_10 = 2; VAR_10 < VAR_1; VAR_10++) {
  VAR_8[VAR_9][VAR_10] = FUNC_5(VAR_10);
 }
}
