
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*,char*,struct tm*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_2, struct tm *VAR_3)
{
    char VAR_4[VAR_1];
    int VAR_5, VAR_6, VAR_7 = VAR_1-1;
    char *VAR_8;


    for (VAR_5 = 0, VAR_6 = 0; VAR_2[VAR_5] != '\0' && VAR_6 < VAR_7; VAR_5++) {
        if ((VAR_2[VAR_5] >= '0' && VAR_2[VAR_5] <= '9') ||
            (VAR_2[VAR_5] >= 'A' && VAR_2[VAR_5] <= 'Z') ||
            (VAR_2[VAR_5] >= 'a' && VAR_2[VAR_5] <= 'z')) {
            VAR_4[VAR_6] = VAR_2[VAR_5];
            VAR_6++;
        }
    }
    VAR_4[VAR_6] = '\0';
    VAR_8 = VAR_4;


    while ((*VAR_8 < '0' || *VAR_8 > '9') && *VAR_8 != '\0')
        VAR_8++;

    return FUNC_1(VAR_8, "%d%b%Y%H%M%S", VAR_3) ? 0 : FUNC_0(VAR_0);
}
