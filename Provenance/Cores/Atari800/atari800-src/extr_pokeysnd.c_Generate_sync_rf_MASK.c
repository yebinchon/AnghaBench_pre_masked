
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UBYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 double FUNC_0 (double,double*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_8)
{
 double VAR_9;
 unsigned int VAR_10;
 UBYTE *VAR_11 = VAR_2 + VAR_3;
 UBYTE *VAR_12 = VAR_2 + VAR_4;

 for (;;) {
  double VAR_13;
  VAR_9 = VAR_6 + VAR_7;
  VAR_9 = FUNC_0(VAR_9, &VAR_13);
  VAR_10 = (unsigned int)VAR_13;
  if (VAR_10 > VAR_8) {
   VAR_6 -= VAR_8;
   break;
  }
  if (VAR_11 >= VAR_12)
   break;

  VAR_6 = VAR_9;
  VAR_8 -= VAR_10;

  if (VAR_5 & VAR_0) {
   FUNC_1(VAR_11, 1);
   VAR_11 += 2 * VAR_1;
  }
  else {
   FUNC_2(VAR_11, 1);
   VAR_11 += VAR_1;
  }

 }

 VAR_3 = VAR_11 - VAR_2;
}
