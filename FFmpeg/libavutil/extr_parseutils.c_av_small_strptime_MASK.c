
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_hour; int tm_min; int tm_sec; int tm_year; int tm_mon; int tm_mday; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char const**) ;
 int FUNC_2 (char const**,int,int,int) ;

char *FUNC_3(const char *VAR_1, const char *VAR_2, struct tm *VAR_3)
{
    int VAR_4, VAR_5;

    while((VAR_4 = *VAR_2++)) {
        if (VAR_4 != '%') {
            if (FUNC_0(VAR_4))
                for (; *VAR_1 && FUNC_0(*VAR_1); VAR_1++);
            else if (*VAR_1 != VAR_4)
                return ((void*)0);
            else VAR_1++;
            continue;
        }

        VAR_4 = *VAR_2++;
        switch(VAR_4) {
        case 'H':
        case 'J':
            VAR_5 = FUNC_2(&VAR_1, 0, VAR_4 == 'H' ? 23 : VAR_0, VAR_4 == 'H' ? 2 : 4);

            if (VAR_5 == -1)
                return ((void*)0);
            VAR_3->tm_hour = VAR_5;
            break;
        case 'M':
            VAR_5 = FUNC_2(&VAR_1, 0, 59, 2);
            if (VAR_5 == -1)
                return ((void*)0);
            VAR_3->tm_min = VAR_5;
            break;
        case 'S':
            VAR_5 = FUNC_2(&VAR_1, 0, 59, 2);
            if (VAR_5 == -1)
                return ((void*)0);
            VAR_3->tm_sec = VAR_5;
            break;
        case 'Y':
            VAR_5 = FUNC_2(&VAR_1, 0, 9999, 4);
            if (VAR_5 == -1)
                return ((void*)0);
            VAR_3->tm_year = VAR_5 - 1900;
            break;
        case 'm':
            VAR_5 = FUNC_2(&VAR_1, 1, 12, 2);
            if (VAR_5 == -1)
                return ((void*)0);
            VAR_3->tm_mon = VAR_5 - 1;
            break;
        case 'd':
            VAR_5 = FUNC_2(&VAR_1, 1, 31, 2);
            if (VAR_5 == -1)
                return ((void*)0);
            VAR_3->tm_mday = VAR_5;
            break;
        case 'T':
            VAR_1 = FUNC_3(VAR_1, "%H:%M:%S", VAR_3);
            if (!VAR_1)
                return ((void*)0);
            break;
        case 'b':
        case 'B':
        case 'h':
            VAR_5 = FUNC_1(&VAR_1);
            if (VAR_5 == -1)
                return ((void*)0);
            VAR_3->tm_mon = VAR_5;
            break;
        case '%':
            if (*VAR_1++ != '%')
                return ((void*)0);
            break;
        default:
            return ((void*)0);
        }
    }

    return (char*)VAR_1;
}
