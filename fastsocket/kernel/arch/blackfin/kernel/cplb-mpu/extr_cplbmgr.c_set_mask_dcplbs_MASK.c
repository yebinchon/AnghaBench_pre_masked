
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long addr; unsigned long data; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 scalar_t__ VAR_11 ;
 unsigned long VAR_12 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__,unsigned long) ;
 unsigned long** VAR_13 ;
 TYPE_1__** VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;

void FUNC_5(unsigned long *VAR_17, unsigned int VAR_18)
{
 int VAR_19;
 unsigned long VAR_20 = (unsigned long)VAR_17;
 unsigned long VAR_21;
 unsigned long VAR_22;

 if (!VAR_17) {
  VAR_13[VAR_18] = VAR_17;
  return;
 }

 FUNC_4(VAR_22);
 VAR_13[VAR_18] = VAR_17;

 if (VAR_9 && VAR_20 >= VAR_10 && VAR_20 < VAR_10 + VAR_9) {
  VAR_20 = VAR_10;
  VAR_21 = VAR_8;
 } else {
  VAR_21 = VAR_3 | VAR_4 | VAR_0 | VAR_12;






 }

 FUNC_0();
 for (VAR_19 = VAR_15; VAR_19 < VAR_16; VAR_19++) {
  VAR_14[VAR_18][VAR_19].addr = VAR_20;
  VAR_14[VAR_18][VAR_19].data = VAR_21;
  FUNC_2(VAR_7 + VAR_19 * 4, VAR_21);
  FUNC_2(VAR_6 + VAR_19 * 4, VAR_20);
  VAR_20 += VAR_11;
 }
 FUNC_1();
 FUNC_3(VAR_22);
}
