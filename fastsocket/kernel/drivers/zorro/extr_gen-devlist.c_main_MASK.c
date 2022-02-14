
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int ) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*,int *) ;
 int FUNC_5 (int *,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;

int
FUNC_9(void)
{
 char VAR_3[1024], *VAR_4, *VAR_5, VAR_6[8];
 int VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9 = 0;
 int VAR_10 = 0;
 FILE *VAR_11;

 VAR_11 = FUNC_2("devlist.h", "w");
 if (!VAR_11) {
  FUNC_3(VAR_1, "Cannot create output file!\n");
  return 1;
 }

 while (FUNC_1(VAR_3, sizeof(VAR_3)-1, VAR_2)) {
  VAR_9++;
  if ((VAR_4 = FUNC_6(VAR_3, '\n')))
   *VAR_4 = 0;
  if (!VAR_3[0] || VAR_3[0] == '#')
   continue;
  if (VAR_3[0] == '\t') {
   switch (VAR_8) {
   case 1:
    if (FUNC_8(VAR_3) > 5 && VAR_3[5] == ' ') {
     VAR_4 = VAR_3 + 5;
     while (*VAR_4 == ' ')
      *VAR_4++ = 0;
     if (VAR_10 + FUNC_8(VAR_4) + 1 > VAR_0) {

      VAR_5 = FUNC_6(VAR_4, '[');
      if (VAR_5 && VAR_5 > VAR_4 && VAR_5[-1] == ' ')
       VAR_5[-1] = 0;
      if (VAR_10 + FUNC_8(VAR_4) + 1 > VAR_0) {
       FUNC_3(VAR_1, "Line %d: Product name too long\n", VAR_9);
       return 1;
      }
     }
     FUNC_3(*VAR_11, "\tPRODUCT(%s,%s,\"", VAR_6, VAR_3+1);
     FUNC_5(VAR_11, VAR_4);
     FUNC_4("\")\n", VAR_11);
    } else goto err;
    break;
   default:
    goto err;
   }
  } else if (FUNC_8(VAR_3) > 4 && VAR_3[4] == ' ') {
   VAR_4 = VAR_3 + 4;
   while (*VAR_4 == ' ')
    *VAR_4++ = 0;
   if (VAR_7)
    FUNC_4("ENDMANUF()\n\n", VAR_11);
   VAR_7++;
   FUNC_7(VAR_6, VAR_3);
   VAR_10 = FUNC_8(VAR_4);
   if (VAR_10 + 24 > VAR_0) {
    FUNC_3(VAR_1, "Line %d: manufacturer name too long\n", VAR_9);
    return 1;
   }
   FUNC_3(*VAR_11, "MANUF(%s,\"", VAR_6);
   FUNC_5(VAR_11, VAR_4);
   FUNC_4("\")\n", VAR_11);
   VAR_8 = 1;
  } else {
  err:
   FUNC_3(VAR_1, "Line %d: Syntax error in mode %d: %s\n", VAR_9, VAR_8, VAR_3);
   return 1;
  }
 }
 FUNC_4("ENDMANUF()\n\n#undef MANUF\n#undef PRODUCT\n#undef ENDMANUF\n", VAR_11);





 FUNC_0(VAR_11);

 return 0;
}
