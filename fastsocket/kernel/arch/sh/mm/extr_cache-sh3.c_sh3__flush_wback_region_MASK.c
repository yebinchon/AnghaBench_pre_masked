
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long ways; unsigned long entry_mask; scalar_t__ way_incr; } ;
struct TYPE_4__ {TYPE_1__ dcache; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long,unsigned long) ;
 TYPE_2__ VAR_4 ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;

__attribute__((used)) static void FUNC_5(void *VAR_5, int VAR_6)
{
 unsigned long VAR_7, VAR_8;
 unsigned long VAR_9, VAR_10;
 unsigned long VAR_11;

 VAR_9 = (unsigned long)VAR_5 & ~(VAR_2-1);
 VAR_10 = ((unsigned long)VAR_5 + VAR_6 + VAR_2-1)
  & ~(VAR_2-1);

 for (VAR_7 = VAR_9; VAR_7 < VAR_10; VAR_7+=VAR_2) {
  unsigned long VAR_12 = VAR_0;
  for (VAR_8 = 0; VAR_8 < VAR_4.dcache.ways; VAR_8++) {
   unsigned long VAR_13, VAR_14, VAR_15;

   VAR_15 = FUNC_0(VAR_7);
   VAR_14 = VAR_12 | (VAR_7 & VAR_4.dcache.entry_mask);
   FUNC_4(VAR_11);
   VAR_13 = FUNC_1(VAR_14);

   if ((VAR_13 & VAR_1) ==
       (VAR_15 & VAR_1)) {
    VAR_13 &= ~VAR_3;
    FUNC_2(VAR_13, VAR_14);
    FUNC_3(VAR_11);
    break;
   }
   FUNC_3(VAR_11);
   VAR_12 += VAR_4.dcache.way_incr;
  }
 }
}
