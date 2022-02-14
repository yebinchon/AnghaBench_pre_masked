
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct in_addr*) ;
 char* FUNC_1 (char*,char) ;

__attribute__((used)) static __inline__ boolean_t
FUNC_2(char * VAR_2, struct in_addr * VAR_3, char const * * VAR_4,
    char * * VAR_5, char * * VAR_6)
{
    char * VAR_7;
    char * VAR_8;


    VAR_7 = VAR_2;
    VAR_8 = FUNC_1(VAR_7, ':');
    if (VAR_8 == ((void*)0)) {
 return (VAR_0);
    }
    *VAR_8 = '\0';
    if (FUNC_0(VAR_7, VAR_3) != 1) {
 return (VAR_0);
    }


    VAR_7 = VAR_8 + 1;
    VAR_8 = FUNC_1(VAR_7, ':');
    if (VAR_8 == ((void*)0)) {
 return (VAR_0);
    }
    *VAR_8 = '\0';
    *VAR_4 = VAR_7;


    VAR_7 = VAR_8 + 1;
    VAR_8 = FUNC_1(VAR_7, ':');
    *VAR_5 = VAR_7;
    if (VAR_8 == ((void*)0)) {
 *VAR_6 = ((void*)0);
    }
    else {

 *VAR_8 = '\0';
 VAR_7 = VAR_8 + 1;
 *VAR_6 = VAR_7;
    }
    return (VAR_1);
}
