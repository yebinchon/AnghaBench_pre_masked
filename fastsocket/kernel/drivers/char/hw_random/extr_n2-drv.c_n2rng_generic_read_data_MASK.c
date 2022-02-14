
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (unsigned long,unsigned long*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(unsigned long VAR_10)
{
 unsigned long VAR_11, VAR_12;
 int VAR_13 = 0, VAR_14 = 0;

 while (1) {
  VAR_12 = FUNC_1(VAR_10, &VAR_11);
  if (VAR_12 == VAR_6)
   return 0;

  if (VAR_12 == VAR_7) {
   if (++VAR_13 >= VAR_8)
    return -VAR_3;
   FUNC_0(VAR_11);
  } else if (VAR_12 == VAR_5) {
   return -VAR_2;
  } else if (VAR_12 == VAR_4) {
   if (++VAR_14 >= VAR_9)
    return -VAR_0;
   FUNC_2(10000);
  } else
   return -VAR_1;
 }
}
