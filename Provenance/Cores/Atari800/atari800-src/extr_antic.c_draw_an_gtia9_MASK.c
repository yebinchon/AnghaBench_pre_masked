
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;
typedef int ULONG ;
typedef int UBYTE ;


 int* VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int const* VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int* VAR_6 ;
 int* VAR_7 ;
 int FUNC_3 () ;
 int* VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;

__attribute__((used)) static void FUNC_4(const ULONG *VAR_11)
{
 int VAR_12 = ((const UBYTE *) VAR_11 - VAR_4) & ~1;
 while (VAR_12 < VAR_9) {
  UWORD *VAR_13 = VAR_10 + VAR_12;
  int VAR_14 = (VAR_6[VAR_12] << 2) + VAR_6[VAR_12 + 1];
  UBYTE VAR_15;
  FUNC_2((ULONG *) VAR_13, VAR_1[VAR_14]);
  VAR_15 = VAR_4[VAR_12];
  if (VAR_15) {
   VAR_15 = VAR_8[VAR_15];
   if (VAR_15 == VAR_5) {



    FUNC_1(VAR_13, VAR_14 | (VAR_14 << 8) | VAR_0[VAR_2]);

   }
   else {
    FUNC_1(VAR_13, FUNC_0(VAR_15));
   }
  }
  VAR_12++;
  VAR_15 = VAR_4[VAR_12];
  if (VAR_15) {
   VAR_15 = VAR_8[VAR_15];
   if (VAR_15 == VAR_5) {



    FUNC_1(VAR_13 + 1, VAR_14 | (VAR_14 << 8) | VAR_0[VAR_2]);

   }
   else {
    FUNC_1(VAR_13 + 1, FUNC_0(VAR_15));
   }
  }
  VAR_12++;
 }
 FUNC_3();
}
