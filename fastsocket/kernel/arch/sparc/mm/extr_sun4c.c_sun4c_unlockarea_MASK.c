
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int) ;
 unsigned long VAR_3 ;
 int FUNC_1 (unsigned long,int *) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 unsigned long VAR_4 ;
 int * VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_5 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_6(char *VAR_7, unsigned long VAR_8)
{
 unsigned long VAR_9, VAR_10;
 unsigned long VAR_11;
 int VAR_12, VAR_13;

 VAR_9 = (unsigned long)VAR_7 & VAR_0;
 VAR_10 = (((unsigned long)VAR_7 & ~VAR_0) +
    VAR_8 + (VAR_2-1)) >> VAR_1;

 FUNC_4(VAR_11);
 while (VAR_10 != 0) {
  --VAR_10;


  FUNC_5(VAR_9, 0);
  FUNC_1((VAR_9 - VAR_6) >> VAR_1,
     VAR_5);
  VAR_9 += VAR_2;
 }


 VAR_12 = (VAR_4 - VAR_6) >> VAR_1;
 while (VAR_12 >= 0 && !VAR_5[VAR_12 >> 5])
  VAR_12 -= 32;
 VAR_12 += 32;
 VAR_13 = VAR_6 + (VAR_12 << VAR_1);
 VAR_13 = FUNC_0(VAR_13) + VAR_3;
 while (VAR_13 < VAR_4) {
  VAR_4 -= VAR_3;
  FUNC_2(VAR_4);
 }
 FUNC_3(VAR_11);
}
