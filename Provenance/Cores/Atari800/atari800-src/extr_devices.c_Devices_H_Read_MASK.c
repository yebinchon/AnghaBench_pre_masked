
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UBYTE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_2 (int *) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int ** VAR_9 ;
 size_t VAR_10 ;
 int* VAR_11 ;
 char* VAR_12 ;
 scalar_t__* VAR_13 ;
 int * VAR_14 ;

__attribute__((used)) static void FUNC_5(void)
{
 if (VAR_8)
  FUNC_1("HHREAD");
 if (!FUNC_0())
  return;
 if (VAR_9[VAR_10] != ((void*)0)) {
  int VAR_15;
  if (VAR_12[VAR_10] != 'r') {
   if (VAR_12[VAR_10] == 'w')
    FUNC_4(VAR_9[VAR_10], 0, VAR_6);
   VAR_11[VAR_10] = FUNC_3(VAR_9[VAR_10]);
   VAR_12[VAR_10] = 'r';
  }
  VAR_15 = VAR_11[VAR_10];
  if (VAR_15 != VAR_4) {
   if (VAR_13[VAR_10]) {
    switch (VAR_15) {
    case 0x0d:
     VAR_14[VAR_10] = VAR_7;
     VAR_15 = 0x9b;
     break;
    case 0x0a:
     if (VAR_14[VAR_10]) {

      VAR_15 = FUNC_3(VAR_9[VAR_10]);
      if (VAR_15 != VAR_4) {
       if (VAR_15 == 0x0d) {
        VAR_14[VAR_10] = VAR_7;
        VAR_15 = 0x9b;
       }
       else
        VAR_14[VAR_10] = VAR_5;
      }
      else {
       VAR_3 = 136;
       VAR_1;
       break;
      }
     }
     else
      VAR_15 = 0x9b;
     break;
    default:
     VAR_14[VAR_10] = VAR_5;
     break;
    }
   }
   VAR_2 = (UBYTE) VAR_15;


   VAR_11[VAR_10] = FUNC_3(VAR_9[VAR_10]);
   VAR_3 = FUNC_2(VAR_9[VAR_10]) ? 3 : 1;
   VAR_0;
  }
  else {
   VAR_3 = 136;
   VAR_1;
  }
 }
 else {
  VAR_3 = 136;
  VAR_1;
 }
}
