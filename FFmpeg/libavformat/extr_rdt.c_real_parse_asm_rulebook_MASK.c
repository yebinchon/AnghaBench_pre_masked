
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVStream ;
typedef int AVFormatContext ;


 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,char const*,char const*) ;
 char* FUNC_2 (char const*,char) ;

__attribute__((used)) static void
FUNC_3(AVFormatContext *VAR_0, AVStream *VAR_1,
                        const char *VAR_2)
{
    const char *VAR_3;
    int VAR_4 = 0, VAR_5 = 0;
    AVStream *VAR_6;
    if (*VAR_2 == '\"') VAR_2++;
    while (1) {
        if (!(VAR_3 = FUNC_2(VAR_2, ';')))
            break;
        if (!VAR_5 && VAR_3 != VAR_2) {
            if (VAR_4 > 0)
                VAR_6 = FUNC_0(VAR_0, VAR_1);
            else
                VAR_6 = VAR_1;
            if (!VAR_6)
                break;
            FUNC_1(VAR_6, VAR_2, VAR_3);
            VAR_4++;
        }
        VAR_2 = VAR_3 + 1;
        VAR_5 ^= 1;
    }
}
