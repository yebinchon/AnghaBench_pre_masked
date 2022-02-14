
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UWORD ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (char*) ;
 scalar_t__* VAR_0 ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static void FUNC_3(void)
{
 UWORD VAR_2 = 0;
 int VAR_3 = FUNC_1(&VAR_2);

 if (VAR_1 != ((void*)0)) {
  long int VAR_4 = 65535;
  do {
   if (VAR_3) {
    if (VAR_2 != FUNC_0((UWORD) VAR_4)) {
     *(VAR_0+VAR_4) = 0;
    }
   } else {
    if (*(VAR_1+VAR_4) != FUNC_0((UWORD) VAR_4)) {
     *(VAR_0+VAR_4) = 0;
    }
   }
   *(VAR_1+VAR_4) = FUNC_0((UWORD) VAR_4);
  } while (--VAR_4 > -1);
 } else {
  FUNC_2("Use tss first.\n");
 }
}
