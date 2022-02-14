
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s ;
typedef int prompt ;
typedef int UWORD ;
typedef int UBYTE ;
typedef int SWORD ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;
 char** VAR_1 ;
 int FUNC_3 (char*,int*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,int,char*) ;
 int FUNC_6 (char*,int,char*,int) ;
 int * FUNC_7 (char*,char) ;
 scalar_t__ FUNC_8 (char*,char*) ;

__attribute__((used)) static UWORD FUNC_9(UWORD VAR_2)
{
 FUNC_4("Simple assembler (enter empty line to exit)\n");
 for (;;) {
  char VAR_3[128];
  char VAR_4[128];
  char *VAR_5;
  char *VAR_6;
  char *VAR_7;
  char *VAR_8;
  int VAR_9;
  int VAR_10;
  UWORD VAR_11 = 0;

  char VAR_12[7];
  FUNC_6(VAR_12, sizeof(VAR_12), "%04X: ", (int) VAR_2);
  FUNC_5(VAR_3, sizeof(VAR_3), VAR_12);
  if (VAR_3[0] == '\0')
   return VAR_2;

  FUNC_2(VAR_3);

  VAR_5 = VAR_3;
  VAR_6 = VAR_4;

  for (VAR_9 = 0; VAR_9 < 3 && *VAR_5 != '\0'; VAR_9++)
   *VAR_6++ = *VAR_5++;

  *VAR_6++ = ' ';

  VAR_8 = ((void*)0);
  VAR_10 = VAR_0;


  while (*VAR_5 != '\0') {
   switch (*VAR_5) {
   case ' ':
   case '\t':
   case '$':
   case '@':
    VAR_5++;
    break;
   case '#':
   case '(':
   case ')':
   case ',':
    VAR_10 = VAR_0;
    *VAR_6++ = *VAR_5++;
    break;
   default:
    if (VAR_8 != ((void*)0)) {
     if (*VAR_5 == 'X' || *VAR_5 == 'Y') {
      *VAR_6++ = *VAR_5++;
      break;
     }
     goto invalid_instr;
    }
    VAR_7 = VAR_3;
    do
     *VAR_7++ = *VAR_5++;
    while (FUNC_7(" \t$@#(),", *VAR_5) == ((void*)0) && *VAR_5 != '\0');


    *VAR_7++ = '\0';
    VAR_8 = VAR_6++;
    *VAR_8 = '0';
    VAR_10 = (VAR_3[0] == 'A' && VAR_3[1] == '\0');
    break;
   }
  }
  if (VAR_6[-1] == ' ')
   VAR_6--;
  *VAR_6 = '\0';


  if (VAR_8 != ((void*)0) && !FUNC_3(VAR_3, &VAR_11)) {
   FUNC_4("Invalid operand!\n");
   continue;
  }

  for (;;) {

   for (VAR_9 = 0; VAR_9 < 256; VAR_9++) {
    if (FUNC_8(VAR_1[VAR_9], VAR_4) == 0) {
     if (VAR_8 == ((void*)0)) {
      FUNC_0(VAR_2, (UBYTE) VAR_9);
      VAR_2++;
     }
     else if (*VAR_8 == '0') {
      VAR_11 -= (VAR_2 + 2);
      if ((SWORD) VAR_11 < -128 || (SWORD) VAR_11 > 127)
       FUNC_4("Branch out of range!\n");
      else {
       FUNC_0(VAR_2, (UBYTE) VAR_9);
       VAR_2++;
       FUNC_0(VAR_2, (UBYTE) VAR_11);
       VAR_2++;
      }
     }
     else if (*VAR_8 == '1') {
      VAR_4[3] = '\0';
      if (VAR_10 && (FUNC_8(VAR_4, "ASL") == 0 || FUNC_8(VAR_4, "LSR") == 0 ||
                  FUNC_8(VAR_4, "ROL") == 0 || FUNC_8(VAR_4, "ROR") == 0)) {
       FUNC_4("\"%s A\" is ambiguous.\n"
              "Use \"%s\" for accumulator mode or \"%s 0A\" for zeropage mode.\n", VAR_4, VAR_4, VAR_4);
      }
      else {
       FUNC_0(VAR_2, (UBYTE) VAR_9);
       VAR_2++;
       FUNC_0(VAR_2, (UBYTE) VAR_11);
       VAR_2++;
      }
     }
     else {
      FUNC_0(VAR_2, (UBYTE) VAR_9);
      VAR_2++;
      FUNC_1(VAR_2, VAR_11);
      VAR_2 += 2;
     }
     goto next_instr;
    }
   }

   if (VAR_8 == ((void*)0) || *VAR_8 == '2')
    break;
   if (++*VAR_8 == '1' && VAR_11 > 0xff)
    *VAR_8 = '2';
  }
 invalid_instr:
  FUNC_4("Invalid instruction!\n");
 next_instr:
  ;
 }
}
