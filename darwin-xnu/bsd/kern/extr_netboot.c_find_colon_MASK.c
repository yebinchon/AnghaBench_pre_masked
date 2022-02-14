
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char) ;

__attribute__((used)) static __inline__ char *
FUNC_1(char * VAR_0)
{
    char * VAR_1 = VAR_0;
    char * VAR_2;

    while ((VAR_2 = FUNC_0(VAR_1, ':')) != ((void*)0)) {
 char * VAR_3;
 char * VAR_4;

 if (VAR_2 == VAR_1) {
     break;
 }
 if (VAR_2[-1] != '\\')
     break;
 for (VAR_3 = VAR_2 - 1, VAR_4 = VAR_2; *VAR_3 != '\0'; VAR_3++, VAR_4++) {
     *VAR_3 = *VAR_4;
 }
 VAR_1 = VAR_2;
    }
    return (VAR_2);
}
