
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long (* get_tick ) () ;} ;


 size_t VAR_0 ;
 unsigned long VAR_1 ;
 size_t VAR_2 ;
 unsigned long* VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 unsigned long FUNC_2 () ;
 unsigned long FUNC_3 () ;
 TYPE_1__* VAR_4 ;
 int FUNC_4 () ;

__attribute__((used)) static inline long FUNC_5 (long *VAR_5, long *VAR_6)
{
 unsigned long VAR_7 = 0, VAR_8 = ~0UL, VAR_9 = 0;
 unsigned long VAR_10, VAR_11, VAR_12, VAR_13;
 unsigned long VAR_14;

 for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++) {
  VAR_11 = VAR_4->get_tick();
  VAR_3[VAR_0] = 1;
  FUNC_0("#StoreLoad");
  while (!(VAR_13 = VAR_3[VAR_2]))
   FUNC_1();
  VAR_3[VAR_2] = 0;
  FUNC_4();
  VAR_12 = VAR_4->get_tick();

  if (VAR_12 - VAR_11 < VAR_8 - VAR_7)
   VAR_7 = VAR_11, VAR_8 = VAR_12, VAR_9 = VAR_13;
 }

 *VAR_5 = VAR_8 - VAR_7;
 *VAR_6 = VAR_9 - VAR_7;


 VAR_10 = (VAR_7/2 + VAR_8/2);
 if (VAR_7 % 2 + VAR_8 % 2 == 2)
  VAR_10++;
 return VAR_10 - VAR_9;
}
