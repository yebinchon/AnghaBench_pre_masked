
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 long VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 () ;
 unsigned long* VAR_3 ;
 unsigned long FUNC_1 () ;

__attribute__((used)) static inline long
FUNC_2 (long *VAR_4, long *VAR_5)
{
 unsigned long VAR_6 = 0, VAR_7 = ~0UL, VAR_8 = 0;
 unsigned long VAR_9, VAR_10, VAR_11, VAR_12;
 long VAR_13;

 for (VAR_13 = 0; VAR_13 < VAR_1; ++VAR_13) {
  VAR_10 = FUNC_1();
  VAR_3[VAR_0] = 1;
  while (!(VAR_12 = VAR_3[VAR_2]))
   FUNC_0();
  VAR_3[VAR_2] = 0;
  VAR_11 = FUNC_1();

  if (VAR_11 - VAR_10 < VAR_7 - VAR_6)
   VAR_6 = VAR_10, VAR_7 = VAR_11, VAR_8 = VAR_12;
 }

 *VAR_4 = VAR_7 - VAR_6;
 *VAR_5 = VAR_8 - VAR_6;


 VAR_9 = (VAR_6/2 + VAR_7/2);
 if (VAR_6 % 2 + VAR_7 % 2 == 2)
  ++VAR_9;
 return VAR_9 - VAR_8;
}
