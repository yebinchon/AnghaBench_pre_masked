
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int n; scalar_t__* string; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 char* VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char) ;
 scalar_t__ FUNC_4 (char) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (char) ;
 int VAR_11 ;
 char* FUNC_7 (char*,char) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;
 int FUNC_9 (scalar_t__*,char*,int) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,...) ;
 TYPE_1__ VAR_12 ;

int FUNC_12(void) {
 int VAR_13;

 if (VAR_10) {
  char *VAR_14;
  VAR_9 += FUNC_10(VAR_9, " \t\f");
  VAR_14 = FUNC_7(VAR_9, '\n');
  if (VAR_14 == ((void*)0))
   VAR_14 = FUNC_7(VAR_9, '\n');
  while (VAR_14 > VAR_9 && FUNC_6(VAR_14[-1]))
   VAR_14--;
  VAR_12.string = FUNC_0(VAR_14 - VAR_9 + 1);
  FUNC_9(VAR_12.string, VAR_9, VAR_14 - VAR_9);
  VAR_12.string[VAR_14 - VAR_9] = 0;
  VAR_9 = VAR_14;
  VAR_10--;
  return VAR_0;
 }
 while ((VAR_13 = FUNC_2()) != VAR_1) {
  switch (VAR_13) {
  case ' ': case '\f': case '\t':
   continue;
  case '\n':
  case '(': case ')': case ',':
  case ':': case '=':
   return VAR_13;
  }
  if (VAR_13 == '%' && *VAR_9 == '%') {
   VAR_9++;
   return VAR_11++ ? 0 : VAR_5;
  } else if (VAR_13 == '%' && FUNC_8(VAR_9, "term", 4) == 0
  && FUNC_6(VAR_9[4])) {
   VAR_9 += 4;
   return VAR_8;
  } else if (VAR_13 == '%' && FUNC_8(VAR_9, "start", 5) == 0
  && FUNC_6(VAR_9[5])) {
   VAR_9 += 5;
   return VAR_6;
  } else if (VAR_13 == '"') {
   char *VAR_15 = FUNC_7(VAR_9, '"');
   if (VAR_15 == ((void*)0)) {
    FUNC_11("missing \" in assembler template\n");
    VAR_15 = FUNC_7(VAR_9, '\n');
    if (VAR_15 == ((void*)0))
     VAR_15 = FUNC_7(VAR_9, '\0');
   }
   FUNC_1(VAR_15);
   VAR_12.string = FUNC_0(VAR_15 - VAR_9 + 1);
   FUNC_9(VAR_12.string, VAR_9, VAR_15 - VAR_9);
   VAR_12.string[VAR_15 - VAR_9] = 0;
   VAR_9 = *VAR_15 == '"' ? VAR_15 + 1 : VAR_15;
   VAR_10++;
   return VAR_7;
  } else if (FUNC_4(VAR_13)) {
   int VAR_16 = 0;
   do {
    int VAR_17 = VAR_13 - '0';
    if (VAR_16 > (VAR_4 - VAR_17)/10)
     FUNC_11("integer greater than %d\n", VAR_4);
    else
     VAR_16 = 10*VAR_16 + VAR_17;
    VAR_13 = FUNC_2();
   } while (VAR_13 != VAR_1 && FUNC_4(VAR_13));
   VAR_9--;
   VAR_12.n = VAR_16;
   return VAR_3;
  } else if (FUNC_3(VAR_13)) {
   char *VAR_18 = VAR_9 - 1;
   while (FUNC_3(*VAR_9) || FUNC_4(*VAR_9) || *VAR_9 == '_')
    VAR_9++;
   VAR_12.string = FUNC_0(VAR_9 - VAR_18 + 1);
   FUNC_9(VAR_12.string, VAR_18, VAR_9 - VAR_18);
   VAR_12.string[VAR_9 - VAR_18] = 0;
   return VAR_2;
  } else if (FUNC_5(VAR_13))
   FUNC_11("invalid character `%c'\n", VAR_13);
  else
   FUNC_11("invalid character `\\%03o'\n", (unsigned char)VAR_13);
 }
 return 0;
}
