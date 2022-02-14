
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const**,char const**) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char const*) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (size_t) ;
 char* FUNC_7 (char*) ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short VAR_7 ;
 unsigned short VAR_8 ;
 unsigned short VAR_9 ;
 char const** VAR_10 ;
 int FUNC_8 (char*,char*,size_t) ;
 int VAR_11 ;
 scalar_t__ FUNC_9 (char*,struct stat*) ;
 size_t FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(const char *VAR_12)
{







 VAR_10 = (const char **) FUNC_6(VAR_0 * sizeof(const char *));
 VAR_11 = 0;

 if (FUNC_0(VAR_12)) {
  char VAR_13[VAR_1];
  int VAR_14;

  while (FUNC_1(VAR_13, &VAR_14)) {
   char *VAR_15;

   if (VAR_13[0] == '\0' ||
    (VAR_13[0] == '.' && VAR_13[1] == '\0'))
    continue;

   if (VAR_14) {

    size_t VAR_16 = FUNC_10(VAR_13);
    VAR_15 = (char *) FUNC_6(VAR_16 + 3);
    FUNC_8(VAR_15 + 1, VAR_13, VAR_16);
    VAR_15[0] = '[';
    VAR_15[VAR_16 + 1] = ']';
    VAR_15[VAR_16 + 2] = '\0';
   }
   else
    VAR_15 = FUNC_7(VAR_13);

   FUNC_2(VAR_15);
  }

  FUNC_3(VAR_10, VAR_10 + VAR_11);
 }
 else {
  FUNC_5("Error opening '%s' directory", VAR_12);
 }
}
