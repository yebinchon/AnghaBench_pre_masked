
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 long FUNC_0 (int ,unsigned long,unsigned long*,unsigned long*) ;
 long FUNC_1 (int ,unsigned long,int ,unsigned long*,unsigned long*) ;
 unsigned long VAR_4 ;

__attribute__((used)) static void FUNC_2(void)
{
 unsigned long VAR_5 = 1UL << VAR_4;
 unsigned long VAR_6 = VAR_5 >> 4;
 unsigned long VAR_7, VAR_8, VAR_9;
 long VAR_10;
 unsigned long VAR_11;


 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {

  VAR_10 = FUNC_1(VAR_2, VAR_11, VAR_0,
      &VAR_7, &VAR_8);
  if (VAR_10 == VAR_3) {
   VAR_10 = FUNC_0(0, VAR_11, &VAR_9, &VAR_7);
   if (!VAR_10 && ((VAR_9 & VAR_1)
    != VAR_1))

    FUNC_1(0, VAR_11, 0, &VAR_7, &VAR_8);
  }
 }
}
