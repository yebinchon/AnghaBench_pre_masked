
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 () ;
 unsigned long FUNC_2 (char const*,char**,int ) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_4)
{
 char *VAR_5 = ((void*)0);

 FUNC_1();

 FUNC_0(VAR_4 != ((void*)0));

 FUNC_5(VAR_3);
 FUNC_3(VAR_3, VAR_0);


 if (VAR_4[0] >= '0' && VAR_4[0] <= '9'){
  unsigned long VAR_6 = FUNC_2(VAR_4, ((void*)0), 0);
  if (VAR_4 != VAR_5 && VAR_6 <= VAR_2) {
   FUNC_4(VAR_3, VAR_6);
  }
  return;
 }

 while (VAR_4[0] != '\0') {
  unsigned long VAR_7;

  char VAR_8 = VAR_4[0];
  if (VAR_8 != 'C' && VAR_8 != 'S') {
   return;
  }
  VAR_4++;

  VAR_7 = FUNC_2(VAR_4, &VAR_5, 0);
  if (VAR_4 == VAR_5) {

   return;
  }

  switch (VAR_8) {
   case 'C':
    if (VAR_7 <= VAR_1) {
     FUNC_3(VAR_3, VAR_7);
    } else {

     return;
    }
    break;
   case 'S':
    if (VAR_7 <= VAR_2) {
     FUNC_4(VAR_3, VAR_7);
    } else {

     return;
    }
    break;
   default:
    return;
  }


  VAR_4 = VAR_5;
  if (VAR_4[0] == ',') {
   VAR_4++;
  }
 }
}
