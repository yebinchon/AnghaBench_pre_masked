
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UBYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__ VAR_8 ;
 long FUNC_3 (int *) ;
 int ** VAR_9 ;
 size_t VAR_10 ;
 scalar_t__* VAR_11 ;
 char* VAR_12 ;

__attribute__((used)) static void FUNC_4(void)
{
 if (VAR_8)
  FUNC_1("NOTE Command");
 if (!FUNC_0())
  return;
 if (VAR_9[VAR_10] != ((void*)0)) {
  long VAR_13 = FUNC_3(VAR_9[VAR_10]);
  if (VAR_13 >= 0) {
   int VAR_14 = VAR_6 + VAR_10 * 16;

   if (VAR_12[VAR_10] == 'r' && VAR_11[VAR_10] != VAR_7)
    --VAR_13;
   FUNC_2(VAR_14 + VAR_5, (UBYTE) VAR_13);
   FUNC_2(VAR_14 + VAR_3, (UBYTE) (VAR_13 >> 8));
   FUNC_2(VAR_14 + VAR_4, (UBYTE) (VAR_13 >> 16));
   VAR_2 = 1;
   VAR_0;
  }
  else {
   VAR_2 = 144;
   VAR_1;
  }
 }
 else {
  VAR_2 = 130;
  VAR_1;
 }
}
