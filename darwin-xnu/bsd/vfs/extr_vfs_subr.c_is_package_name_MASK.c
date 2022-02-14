
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*,int) ;

int FUNC_4(const char *VAR_4, int VAR_5)
{
    int VAR_6, VAR_7;
    const char *VAR_8, *VAR_9;

    if (VAR_5 <= 3) {
 return 0;
    }

    VAR_9 = ((void*)0);
    for(VAR_8=VAR_4; *VAR_8 != '\0'; VAR_8++) {
 if (*VAR_8 == '.') {
     VAR_9 = VAR_8;
 }
    }


    if (VAR_9 == ((void*)0)) {
 return 0;
    }


    VAR_9++;

    FUNC_0(VAR_3);


    VAR_8 = &VAR_0[0];
    for(VAR_6=0; VAR_6 < VAR_2; VAR_6++, VAR_8+=VAR_1) {
 VAR_7 = FUNC_2(VAR_8);
 if (FUNC_3(VAR_9, VAR_8, VAR_7) == 0 && VAR_9[VAR_7] == '\0') {

     FUNC_1(VAR_3);
     return 1;
 }
    }

    FUNC_1(VAR_3);


    return 0;
}
