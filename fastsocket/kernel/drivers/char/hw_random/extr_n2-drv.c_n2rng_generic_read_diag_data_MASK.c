
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct n2rng {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (struct n2rng*,unsigned long,unsigned long,unsigned long,unsigned long*) ;

__attribute__((used)) static int FUNC_2(struct n2rng *VAR_9,
     unsigned long VAR_10,
     unsigned long VAR_11,
     unsigned long VAR_12)
{
 unsigned long VAR_13, VAR_14;
 int VAR_15 = 0;

 while (1) {
  VAR_14 = FUNC_1(VAR_9, VAR_10,
        VAR_11, VAR_12,
        &VAR_13);
  if (VAR_14 == VAR_6)
   return 0;

  if (VAR_14 == VAR_7) {
   if (++VAR_15 >= VAR_8)
    return -VAR_3;
   FUNC_0(VAR_13);
  } else if (VAR_14 == VAR_5) {
   return -VAR_2;
  } else if (VAR_14 == VAR_4) {
   return -VAR_0;
  } else
   return -VAR_1;
 }
}
