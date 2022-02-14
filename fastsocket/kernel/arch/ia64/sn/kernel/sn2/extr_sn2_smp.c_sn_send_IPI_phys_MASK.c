
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 unsigned long VAR_4 ;
 long VAR_5 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (long volatile*,long) ;
 int VAR_6 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 () ;

void FUNC_7(int VAR_7, long VAR_8, int VAR_9, int VAR_10)
{
 long VAR_11;
 unsigned long VAR_12 = 0;
 volatile long *VAR_13;

 VAR_13 = (long *)FUNC_0(VAR_7, VAR_0);
 VAR_11 = (1UL << VAR_4) |
     (VAR_8 << VAR_3) |
     ((long)VAR_10 << VAR_5) |
     ((long)VAR_9 << VAR_2) |
     (0x000feeUL << VAR_1);

 FUNC_2();
 if (FUNC_1()) {
  FUNC_4(&VAR_6, VAR_12);
 }
 FUNC_3(VAR_13, VAR_11);
 if (FUNC_1()) {
  FUNC_6();
  FUNC_5(&VAR_6, VAR_12);
 }

}
