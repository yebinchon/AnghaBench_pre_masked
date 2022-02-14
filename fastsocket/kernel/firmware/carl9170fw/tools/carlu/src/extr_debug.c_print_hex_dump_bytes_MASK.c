
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum debug_level_t { ____Placeholder_debug_level_t } debug_level_t ;


 int FUNC_0 (int const,char*,char const*,char*,char*) ;
 scalar_t__ FUNC_1 (unsigned char const) ;
 scalar_t__ FUNC_2 (unsigned char const) ;
 int FUNC_3 (char*,char*,...) ;

void FUNC_4(const enum debug_level_t VAR_0, const char *VAR_1,
     const void *VAR_2, size_t VAR_3)
{
 char VAR_4[58];
 char VAR_5[17] = { 0 };
 const unsigned char *VAR_6 = (void *) VAR_2;
 char *VAR_7 = VAR_4;
 size_t VAR_8, VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  if (VAR_8 % 16 == 0) {
   if (VAR_7 != VAR_4) {
    FUNC_0(VAR_0, "%s%s: %s\n", VAR_1, VAR_4, VAR_5);
    VAR_7 = VAR_4;
   }

   VAR_7 += FUNC_3(VAR_7, "0x%04lx: ", (unsigned long)VAR_8);
  }

  VAR_7 += FUNC_3(VAR_7, "%.2x ", VAR_6[VAR_8]);
  VAR_5[VAR_8 % 16] = (FUNC_2(VAR_6[VAR_8]) && FUNC_1(VAR_6[VAR_8])) ? VAR_6[VAR_8] : '.';
 }
 if (VAR_7 != VAR_4) {
  if ((VAR_8 % 16)) {
   VAR_5[VAR_8 % 16] = '\0';

   for (VAR_9 = 0; VAR_9 < (16 - (VAR_8 % 16)); VAR_9++)
    VAR_7 += FUNC_3(VAR_7, "   ");
  }

  FUNC_0(VAR_0, "%s%s: %s\n", VAR_1, VAR_4, VAR_5);
 }
}
