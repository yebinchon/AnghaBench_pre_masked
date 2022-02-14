
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (struct tm*) ;
 int FUNC_2 (char const*,char*,int*,int*,int*,int*,int*,float*) ;

__attribute__((used)) static uint64_t FUNC_3(AVFormatContext *VAR_1, const char *VAR_2)
{
    struct tm VAR_3;
    int VAR_4 = 0;
    int VAR_5 = 0;
    int VAR_6 = 0;
    int VAR_7 = 0;
    int VAR_8 = 0;
    int VAR_9 = 0;
    float VAR_10 = 0.0;


    if (!VAR_2)
        return 0;

    VAR_9 = FUNC_2(VAR_2, "%d-%d-%dT%d:%d:%fZ", &VAR_4, &VAR_5, &VAR_6, &VAR_7, &VAR_8, &VAR_10);

    if (VAR_9 != 6) {
        FUNC_0(VAR_1, VAR_0, "get_utc_date_time_insec get a wrong time format\n");
    }
    VAR_3.tm_year = VAR_4 - 1900;
    VAR_3.tm_mon = VAR_5 - 1;
    VAR_3.tm_mday = VAR_6;
    VAR_3.tm_hour = VAR_7;
    VAR_3.tm_min = VAR_8;
    VAR_3.tm_sec = (int)VAR_10;

    return FUNC_1(&VAR_3);
}
