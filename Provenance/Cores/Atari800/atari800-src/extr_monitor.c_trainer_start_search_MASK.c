
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UWORD ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__* FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int* VAR_0 ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static void FUNC_4(void)
{
 UWORD VAR_2 = 0;
 int VAR_3 = FUNC_1(&VAR_2);


 if (VAR_1 == ((void*)0)) {
  VAR_1 = FUNC_2(65536*2);
  if (VAR_1 != ((void*)0)) {
   VAR_0 = VAR_1 + 65536;
  } else {
   FUNC_3("Memory allocation failed!\n"
   "Trainer not available.\n");
  }
 }
 if (VAR_1 != ((void*)0)) {

  long int VAR_4 = 65535;
  do {
   *(VAR_1+VAR_4) = FUNC_0((UWORD) VAR_4);
   *(VAR_0+VAR_4) = 0xff;
  } while (--VAR_4 > -1);
  if (VAR_3) {
   VAR_4 = 65535;
   do {
    if (VAR_2 != *(VAR_1+VAR_4)) {
     *(VAR_0+VAR_4) = 0;
    }
   } while (--VAR_4 > -1);
  }
 }
}
