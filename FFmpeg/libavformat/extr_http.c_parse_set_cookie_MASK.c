
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int **,char*,char*,int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*) ;
 char* FUNC_4 (char*,char*,char**) ;
 scalar_t__ FUNC_5 (int ,char) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static int FUNC_8(const char *VAR_2, AVDictionary **VAR_3)
{
    char *VAR_4, *VAR_5, *VAR_6, *VAR_7;

    if (!VAR_2[0])
        return 0;

    if (!(VAR_6 = FUNC_3(VAR_2)))
        return FUNC_0(VAR_0);


    VAR_7 = &VAR_6[FUNC_6(VAR_6)-1];
    while (FUNC_5(VAR_1, *VAR_7)) {
        *VAR_7='\0';
        if (VAR_7 == VAR_6)
            break;
        VAR_7--;
    }

    VAR_5 = VAR_6;
    while ((VAR_4 = FUNC_4(VAR_5, ";", &VAR_5))) {
        char *VAR_8, *VAR_9;
        VAR_4 += FUNC_7(VAR_4, VAR_1);
        if ((VAR_8 = FUNC_4(VAR_4, "=", &VAR_9))) {
            if (FUNC_1(VAR_3, VAR_8, VAR_9, 0) < 0) {
                FUNC_2(VAR_6);
                return -1;
            }
        }
    }

    FUNC_2(VAR_6);
    return 0;
}
