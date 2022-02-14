
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef int UWORD ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,int,int *) ;
 int * FUNC_4 (char const*,char*) ;
 int FUNC_5 () ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_8(const char *VAR_1)
{
 FILE *VAR_2;
 char VAR_3[256];
 if (VAR_1 == ((void*)0)) {
  FUNC_7("You must specify a filename\n");
  return;
 }


 VAR_2 = FUNC_4(VAR_1, "rb");
 if (VAR_2 == ((void*)0)) {
  FUNC_6(VAR_1);
  return;
 }
 FUNC_5();
 while (FUNC_3(VAR_3, sizeof(VAR_3), VAR_2)) {
  char *VAR_4;
  unsigned int VAR_5 = 0;
  int VAR_6 = 0;


  for (VAR_4 = VAR_3; *VAR_4 != '\0'; VAR_4++) {
   if (*VAR_4 >= '0' && *VAR_4 <= '9') {
    VAR_5 = (VAR_5 << 4) + *VAR_4 - '0';
    VAR_6++;
   }
   else if (*VAR_4 >= 'A' && *VAR_4 <= 'F') {
    VAR_5 = (VAR_5 << 4) + *VAR_4 - 'A' + 10;
    VAR_6++;
   }
   else if (*VAR_4 >= 'a' && *VAR_4 <= 'f') {
    VAR_5 = (VAR_5 << 4) + *VAR_4 - 'a' + 10;
    VAR_6++;
   }
   else if (VAR_6 >= 4)
    break;
   else if (*VAR_4 == '-')
    break;
   else {

    VAR_5 = 0;
    VAR_6 = 0;
   }
  }
  if (*VAR_4 != ' ' && *VAR_4 != '\t')
   continue;
  if (VAR_5 > 0xffff || VAR_6 > 8)
   continue;
  do
   VAR_4++;
  while (*VAR_4 == ' ' || *VAR_4 == '\t');
  FUNC_0(VAR_4);
  if (*VAR_4 == '\0')
   continue;
  FUNC_1(VAR_4, (UWORD) VAR_5);
 }
 FUNC_2(VAR_2);
 FUNC_7("Loaded %d labels\n", VAR_0);
}
