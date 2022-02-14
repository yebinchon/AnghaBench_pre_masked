
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_0 (unsigned long) ;
 scalar_t__ VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long FUNC_1 (int ,unsigned long,unsigned long) ;
 int FUNC_2 (unsigned long) ;
 unsigned long VAR_7 ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (char*) ;
 unsigned long FUNC_6 (int ) ;
 int FUNC_7 (char*,char*,unsigned long) ;
 int FUNC_8 (unsigned long,int ) ;
 int FUNC_9 (unsigned long) ;
 unsigned long VAR_8 ;
 int VAR_9 ;
 unsigned long VAR_10 ;
 int FUNC_10 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_11 (unsigned long,int ) ;

__attribute__((used)) static char *FUNC_12(char *VAR_11, unsigned long VAR_12)
{
 unsigned long VAR_13, VAR_14;
 unsigned long VAR_15;
 unsigned long VAR_16;
 unsigned long VAR_17;
 unsigned long VAR_18;
 unsigned long VAR_19;
 unsigned long VAR_20;

 VAR_15 = (((unsigned long)VAR_11 & ~VAR_0) +
    VAR_12 + (VAR_3-1)) >> VAR_2;

 VAR_14 = 0;
 FUNC_4(VAR_20);
 for (;;) {
  VAR_14 = FUNC_1(VAR_9,
       VAR_7, VAR_14);
  if ((VAR_13 = VAR_14) + VAR_15 > VAR_7) goto abend;
  for (;;) {
   if (VAR_14 >= VAR_13 + VAR_15) goto found;
   if (FUNC_11(VAR_14, VAR_9)) break;
   VAR_14++;
  }
 }

found:
 VAR_19 = ((VAR_13 + VAR_15) << VAR_2) + VAR_10;
 VAR_19 = FUNC_0(VAR_19);
 while (VAR_19 > VAR_8) {
  FUNC_2(VAR_8);
  VAR_8 += VAR_5;
 }

 VAR_16 = ((unsigned long) VAR_11) & VAR_0;
 for (VAR_14 = VAR_13; VAR_14 < VAR_13+VAR_15; VAR_14++) {
  VAR_17 = ((VAR_16-VAR_1) >> VAR_2);
   VAR_17 |= FUNC_6(VAR_4);
  VAR_17 |= VAR_6;
  FUNC_8(VAR_14, VAR_9);
  VAR_18 = (VAR_14 << VAR_2) + VAR_10;


  FUNC_9(VAR_16);

  FUNC_10(VAR_18, VAR_17);
  VAR_16 += VAR_3;
 }
 FUNC_3(VAR_20);
 return (char *) ((VAR_13 << VAR_2) + VAR_10 +
    (((unsigned long) VAR_11) & ~VAR_0));

abend:
 FUNC_3(VAR_20);
 FUNC_7("DMA vaddr=0x%p size=%08lx\n", VAR_11, VAR_12);
 FUNC_5("Out of iobuffer table");
 return ((void*)0);
}
