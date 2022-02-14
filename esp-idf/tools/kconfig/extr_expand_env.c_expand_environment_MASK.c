
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int,size_t) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (char*,char const*,int,...) ;
 int FUNC_8 (char*,char const*) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (char*,char const*,size_t) ;

char *FUNC_11(const char *VAR_1, const char *VAR_2, int VAR_3)
{
  char *VAR_4 = FUNC_6(VAR_0);

  char *VAR_5 = VAR_4;
  const char *VAR_6 = VAR_1;

  while (*VAR_6 != '\0') {

    if (VAR_5 >= VAR_4 + VAR_0 - 1) {
      goto too_long;
    }

    if (*VAR_6 != '$') {

      *VAR_5++ = *VAR_6++;
      continue;
    }


    VAR_6++;
    const char *VAR_7 = VAR_6;
    while (FUNC_0(*VAR_6)) {
      VAR_6++;
    }
    size_t VAR_8 = VAR_6 - VAR_7;




    char *VAR_9 = FUNC_2(1, VAR_8 + 1);
    FUNC_1(VAR_9 != ((void*)0));
    FUNC_10(VAR_9, VAR_7, VAR_8);

    const char *VAR_10 = FUNC_5(VAR_9);
    if (VAR_10 == ((void*)0) || FUNC_9(VAR_10) == 0) {
      FUNC_7("%s:%d: undefined environment variable \"%s\"\n",
             VAR_2, VAR_3, VAR_9);
      FUNC_3(1);
    }
    FUNC_4(VAR_9);
    if (VAR_5 + FUNC_9(VAR_10) >= VAR_4 + VAR_0 - 1) {
      goto too_long;
    }
    FUNC_8(VAR_5, VAR_10);
    VAR_5 += FUNC_9(VAR_10);
  }

  *VAR_5 = '\0';

  return VAR_4;

too_long:
  FUNC_7("%s:%d: Expansion is longer than %d bytes\n",
         VAR_2, VAR_3, VAR_0);
  FUNC_4(VAR_4);
  FUNC_3(1);
}
