
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (char const*,char*,float*,char*,int*) ;

__attribute__((used)) static uint32_t FUNC_2(AVFormatContext *VAR_1, const char *VAR_2)
{

    uint32_t VAR_3 = 0;
    uint32_t VAR_4 = 0;
    uint32_t VAR_5 = 0;
    uint32_t VAR_6 = 0;
    int VAR_7 = 0;
    float VAR_8 = 0;
    char VAR_9 = '\0';
    const char *VAR_10 = VAR_2;

    while (*VAR_10) {
        if (*VAR_10 == 'P' || *VAR_10 == 'T') {
            VAR_10++;
            continue;
        }

        if (FUNC_1(VAR_10, "%f%c%n", &VAR_8, &VAR_9, &VAR_7) != 2) {
            FUNC_0(VAR_1, VAR_0, "get_duration_insec get a wrong time format\n");
            return 0;
        }
        switch (VAR_9) {
            case 'D':
                VAR_3 = (uint32_t)VAR_8;
                break;
            case 'H':
                VAR_4 = (uint32_t)VAR_8;
                break;
            case 'M':
                VAR_5 = (uint32_t)VAR_8;
                break;
            case 'S':
                VAR_6 = (uint32_t)VAR_8;
                break;
            default:

                break;
        }
        VAR_10 += VAR_7;
    }
    return ((VAR_3 * 24 + VAR_4) * 60 + VAR_5) * 60 + VAR_6;
}
