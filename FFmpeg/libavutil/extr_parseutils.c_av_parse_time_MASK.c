
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_hour; int tm_min; int tm_sec; int tm_isdst; int member_0; } ;
typedef int int64_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char const* const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char const) ;
 scalar_t__ FUNC_4 (char const) ;
 char* FUNC_5 (char const*,char const* const,struct tm*) ;
 int FUNC_6 (char const*,char*) ;
 int FUNC_7 (struct tm*) ;
 scalar_t__ VAR_4 ;
 struct tm* FUNC_8 (int*,struct tm*) ;
 struct tm* FUNC_9 (int*,struct tm*) ;
 int FUNC_10 (struct tm*) ;
 int FUNC_11 (char const*,char**,int) ;

int FUNC_12(int64_t *VAR_5, const char *VAR_6, int VAR_7)
{
    const char *VAR_8, *VAR_9;
    int64_t VAR_10, VAR_11;
    time_t VAR_12;
    struct tm VAR_13 = { 0 }, VAR_14;
    int VAR_15 = 0, VAR_16 = 0, VAR_17 = 0, VAR_18 = 1000000;
    int VAR_19;
    static const char * const VAR_20[] = {
        "%Y - %m - %d",
        "%Y%m%d",
    };
    static const char * const VAR_21[] = {
        "%H:%M:%S",
        "%H%M%S",
    };
    static const char * const VAR_22[] = {
        "%H:%M",
        "%H%M",
        "%H",
    };

    VAR_8 = VAR_6;
    VAR_9 = ((void*)0);
    *VAR_5 = VAR_3;
    if (!VAR_7) {
        VAR_11 = FUNC_2();
        VAR_12 = VAR_11 / 1000000;

        if (!FUNC_6(VAR_6, "now")) {
            *VAR_5 = VAR_11;
            return 0;
        }


        for (VAR_19 = 0; VAR_19 < FUNC_1(VAR_20); VAR_19++) {
            VAR_9 = FUNC_5(VAR_8, VAR_20[VAR_19], &VAR_13);
            if (VAR_9)
                break;
        }



        if (!VAR_9) {
            VAR_15 = 1;
            VAR_9 = VAR_8;
        }
        VAR_8 = VAR_9;

        if (*VAR_8 == 'T' || *VAR_8 == 't')
            VAR_8++;
        else
            while (FUNC_4(*VAR_8))
                VAR_8++;


        for (VAR_19 = 0; VAR_19 < FUNC_1(VAR_21); VAR_19++) {
            VAR_9 = FUNC_5(VAR_8, VAR_21[VAR_19], &VAR_13);
            if (VAR_9)
                break;
        }
    } else {

        if (VAR_8[0] == '-') {
            VAR_16 = 1;
            ++VAR_8;
        }

        VAR_9 = FUNC_5(VAR_8, "%J:%M:%S", &VAR_13);
        if (!VAR_9) {

            VAR_9 = FUNC_5(VAR_8, "%M:%S", &VAR_13);
            VAR_13.tm_hour = 0;
        }
        if (!VAR_9) {
            char *VAR_23;

            VAR_4 = 0;
            VAR_10 = FUNC_11(VAR_8, &VAR_23, 10);
            if (VAR_23 == VAR_8)
                return FUNC_0(VAR_0);
            if (VAR_4 == VAR_1)
                return FUNC_0(VAR_1);
            VAR_9 = VAR_23;
        } else {
            VAR_10 = VAR_13.tm_hour * 3600 + VAR_13.tm_min * 60 + VAR_13.tm_sec;
        }
    }


    if (!VAR_9)
        return FUNC_0(VAR_0);


    if (*VAR_9 == '.') {
        int VAR_24;
        VAR_9++;
        for (VAR_24 = 100000; VAR_24 >= 1; VAR_24 /= 10, VAR_9++) {
            if (!FUNC_3(*VAR_9))
                break;
            VAR_17 += VAR_24 * (*VAR_9 - '0');
        }
        while (FUNC_3(*VAR_9))
            VAR_9++;
    }

    if (VAR_7) {
        if (VAR_9[0] == 'm' && VAR_9[1] == 's') {
            VAR_18 = 1000;
            VAR_17 /= 1000;
            VAR_9 += 2;
        } else if (VAR_9[0] == 'u' && VAR_9[1] == 's') {
            VAR_18 = 1;
            VAR_17 = 0;
            VAR_9 += 2;
        } else if (*VAR_9 == 's')
            VAR_9++;
    } else {
        int VAR_25 = *VAR_9 == 'Z' || *VAR_9 == 'z';
        int VAR_26 = 0;
        VAR_9 += VAR_25;
        if (!VAR_15 && !VAR_25 && (*VAR_9 == '+' || *VAR_9 == '-')) {
            struct tm VAR_27 = { 0 };
            int VAR_28 = (*VAR_9 == '+' ? -1 : 1);
            VAR_9++;
            VAR_8 = VAR_9;
            for (VAR_19 = 0; VAR_19 < FUNC_1(VAR_22); VAR_19++) {
                VAR_9 = FUNC_5(VAR_8, VAR_22[VAR_19], &VAR_27);
                if (VAR_9)
                    break;
            }
            if (!VAR_9)
                return FUNC_0(VAR_0);
            VAR_26 = VAR_28 * (VAR_27.tm_hour * 60 + VAR_27.tm_min) * 60;
            VAR_25 = 1;
        }
        if (VAR_15) {
            struct tm VAR_29 = VAR_25 ? *FUNC_8(&VAR_12, &VAR_14) : *FUNC_9(&VAR_12, &VAR_14);
            VAR_29 = VAR_13.tm_hour;
            VAR_29 = VAR_13.tm_min;
            VAR_29 = VAR_13.tm_sec;
            VAR_13 = VAR_29;
        }
        VAR_13.tm_isdst = VAR_25 ? 0 : -1;
        VAR_10 = VAR_25 ? FUNC_7(&VAR_13) : FUNC_10(&VAR_13);
        VAR_10 += VAR_26;
    }


    if (*VAR_9)
        return FUNC_0(VAR_0);

    if (VAR_2 / VAR_18 < VAR_10)
        return FUNC_0(VAR_1);
    VAR_10 *= VAR_18;
    if (VAR_2 - VAR_17 < VAR_10)
        return FUNC_0(VAR_1);
    VAR_10 += VAR_17;
    *VAR_5 = VAR_16 ? -VAR_10 : VAR_10;
    return 0;
}
