
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (unsigned long,unsigned long,unsigned long*,unsigned long*,unsigned long*,unsigned long*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static unsigned long FUNC_3(unsigned long VAR_5,
         unsigned long VAR_6)
{
 unsigned long VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12 = 0, VAR_13 = 0;

 while (1) {
  VAR_7 = FUNC_1(VAR_5, VAR_6, &VAR_8,
            &VAR_9,
            &VAR_10,
            &VAR_11);
  if (VAR_7 == VAR_1)
   break;

  if (VAR_7 == VAR_0) {
   if (++VAR_13 >= VAR_4)
    break;

   FUNC_2(1);
  } else if (VAR_7 == VAR_2) {
   if (++VAR_12 >= VAR_3)
    break;

   FUNC_0(VAR_9);
  } else
   break;
 }

 return VAR_7;
}
