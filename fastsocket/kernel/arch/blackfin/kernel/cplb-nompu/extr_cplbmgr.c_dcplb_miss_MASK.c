
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long eaddr; unsigned long data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int * VAR_9 ;
 int * VAR_10 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,int,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(int VAR_11)
{
 unsigned long VAR_12 = FUNC_0();
 int VAR_13 = FUNC_1();
 int VAR_14;
 unsigned long VAR_15, VAR_16, VAR_17, VAR_18;

 VAR_9[VAR_11]++;
 if (FUNC_3(VAR_13 & VAR_2))
  VAR_10[VAR_11]++;

 VAR_16 = 0;
 VAR_14 = 0;
 do {
  VAR_18 = VAR_7[VAR_14].eaddr;
  if (VAR_12 < VAR_18)
   break;
  VAR_16 = VAR_18;
 } while (++VAR_14 < VAR_8);

 if (FUNC_3(VAR_14 == VAR_8))
  return VAR_0;

 VAR_15 = VAR_7[VAR_14].data;
 if (FUNC_3(VAR_15 == 0))
  return VAR_0;

 VAR_17 = VAR_12 & ~(VAR_6 - 1);
 VAR_12 &= ~(VAR_5 - 1);
 VAR_15 |= VAR_3;
 if (VAR_17 >= VAR_16 && (VAR_17 + VAR_6) <= VAR_18) {




  VAR_15 |= VAR_4;
  VAR_12 = VAR_17;
 }


 VAR_14 = FUNC_2(VAR_11);

 FUNC_4(VAR_11, VAR_14, VAR_15, VAR_12);

 return VAR_1;
}
