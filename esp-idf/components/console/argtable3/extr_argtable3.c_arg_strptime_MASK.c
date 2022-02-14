
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_wday; int tm_mon; int tm_year; int tm_mday; int tm_hour; int tm_yday; int tm_min; int tm_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ,char const*,size_t) ;
 int FUNC_3 (char const**,int*,int,int) ;
 int * VAR_6 ;
 scalar_t__ FUNC_4 (int) ;
 int * VAR_7 ;
 size_t FUNC_5 (int ) ;

char * FUNC_6(const char *VAR_8, const char *VAR_9, struct tm *VAR_10)
{
    char VAR_11;
    const char *VAR_12;
    size_t VAR_13 = 0;
    int VAR_14, VAR_15, VAR_16 = 0;

    VAR_12 = VAR_8;

    while ((VAR_11 = *VAR_9) != '\0') {

        VAR_14 = 0;


        if (FUNC_4((int) VAR_11)) {
            while (FUNC_4((int) *VAR_12))
                VAR_12++;

            VAR_9++;
            continue;
        }

        if ((VAR_11 = *VAR_9++) != '%')
            goto literal;


again:
        switch (VAR_11 = *VAR_9++)
        {
        case '%':
literal:
            if (VAR_11 != *VAR_12++)
                return (0);
            break;





        case 'E':
            FUNC_0(0);
            VAR_14 |= VAR_0;
            goto again;

        case 'O':
            FUNC_0(0);
            VAR_14 |= VAR_1;
            goto again;




        case 'c':
            FUNC_0(VAR_0);
            VAR_12 = FUNC_6(VAR_12, "%x %X", VAR_10);
            if (!VAR_12)
                return (0);
            break;

        case 'D':
            FUNC_0(0);
            VAR_12 = FUNC_6(VAR_12, "%m/%d/%y", VAR_10);
            if (!VAR_12)
                return (0);
            break;

        case 'R':
            FUNC_0(0);
            VAR_12 = FUNC_6(VAR_12, "%H:%M", VAR_10);
            if (!VAR_12)
                return (0);
            break;

        case 'r':
            FUNC_0(0);
            VAR_12 = FUNC_6(VAR_12, "%I:%M:%S %p", VAR_10);
            if (!VAR_12)
                return (0);
            break;

        case 'T':
            FUNC_0(0);
            VAR_12 = FUNC_6(VAR_12, "%H:%M:%S", VAR_10);
            if (!VAR_12)
                return (0);
            break;

        case 'X':
            FUNC_0(VAR_0);
            VAR_12 = FUNC_6(VAR_12, "%H:%M:%S", VAR_10);
            if (!VAR_12)
                return (0);
            break;

        case 'x':
            FUNC_0(VAR_0);
            VAR_12 = FUNC_6(VAR_12, "%m/%d/%y", VAR_10);
            if (!VAR_12)
                return (0);
            break;




        case 'A':
        case 'a':
            FUNC_0(0);
            for (VAR_15 = 0; VAR_15 < 7; VAR_15++) {

                VAR_13 = FUNC_5(VAR_6[VAR_15]);
                if (FUNC_2(VAR_6[VAR_15], VAR_12, VAR_13) == 0)
                    break;


                VAR_13 = FUNC_5(VAR_3[VAR_15]);
                if (FUNC_2(VAR_3[VAR_15], VAR_12, VAR_13) == 0)
                    break;
            }


            if (VAR_15 == 7)
                return (0);

            VAR_10->tm_wday = VAR_15;
            VAR_12 += VAR_13;
            break;

        case 'B':
        case 'b':
        case 'h':
            FUNC_0(0);
            for (VAR_15 = 0; VAR_15 < 12; VAR_15++) {

                VAR_13 = FUNC_5(VAR_7[VAR_15]);
                if (FUNC_2(VAR_7[VAR_15], VAR_12, VAR_13) == 0)
                    break;


                VAR_13 = FUNC_5(VAR_4[VAR_15]);
                if (FUNC_2(VAR_4[VAR_15], VAR_12, VAR_13) == 0)
                    break;
            }


            if (VAR_15 == 12)
                return (0);

            VAR_10->tm_mon = VAR_15;
            VAR_12 += VAR_13;
            break;

        case 'C':
            FUNC_0(VAR_0);
            if (!(FUNC_3(&VAR_12, &VAR_15, 0, 99)))
                return (0);

            if (VAR_16) {
                VAR_10->tm_year = (VAR_10->tm_year % 100) + (VAR_15 * 100);
            } else {
                VAR_10->tm_year = VAR_15 * 100;
                VAR_16 = 1;
            }
            break;

        case 'd':
        case 'e':
            FUNC_0(VAR_1);
            if (!(FUNC_3(&VAR_12, &VAR_10->tm_mday, 1, 31)))
                return (0);
            break;

        case 'k':
            FUNC_0(0);

        case 'H':
            FUNC_0(VAR_1);
            if (!(FUNC_3(&VAR_12, &VAR_10->tm_hour, 0, 23)))
                return (0);
            break;

        case 'l':
            FUNC_0(0);

        case 'I':
            FUNC_0(VAR_1);
            if (!(FUNC_3(&VAR_12, &VAR_10->tm_hour, 1, 12)))
                return (0);
            if (VAR_10->tm_hour == 12)
                VAR_10->tm_hour = 0;
            break;

        case 'j':
            FUNC_0(0);
            if (!(FUNC_3(&VAR_12, &VAR_15, 1, 366)))
                return (0);
            VAR_10->tm_yday = VAR_15 - 1;
            break;

        case 'M':
            FUNC_0(VAR_1);
            if (!(FUNC_3(&VAR_12, &VAR_10->tm_min, 0, 59)))
                return (0);
            break;

        case 'm':
            FUNC_0(VAR_1);
            if (!(FUNC_3(&VAR_12, &VAR_15, 1, 12)))
                return (0);
            VAR_10->tm_mon = VAR_15 - 1;
            break;

        case 'p':
            FUNC_0(0);

            if (FUNC_1(VAR_5[0], VAR_12) == 0) {
                if (VAR_10->tm_hour > 11)
                    return (0);

                VAR_12 += FUNC_5(VAR_5[0]);
                break;
            }

            else if (FUNC_1(VAR_5[1], VAR_12) == 0) {
                if (VAR_10->tm_hour > 11)
                    return (0);

                VAR_10->tm_hour += 12;
                VAR_12 += FUNC_5(VAR_5[1]);
                break;
            }


            return (0);

        case 'S':
            FUNC_0(VAR_1);
            if (!(FUNC_3(&VAR_12, &VAR_10->tm_sec, 0, 61)))
                return (0);
            break;

        case 'U':
        case 'W':
            FUNC_0(VAR_1);






            if (!(FUNC_3(&VAR_12, &VAR_15, 0, 53)))
                return (0);
            break;

        case 'w':
            FUNC_0(VAR_1);
            if (!(FUNC_3(&VAR_12, &VAR_10->tm_wday, 0, 6)))
                return (0);
            break;

        case 'Y':
            FUNC_0(VAR_0);
            if (!(FUNC_3(&VAR_12, &VAR_15, 0, 9999)))
                return (0);

            VAR_10->tm_year = VAR_15 - VAR_2;
            break;

        case 'y':
            FUNC_0(VAR_0 | VAR_1);
            if (!(FUNC_3(&VAR_12, &VAR_15, 0, 99)))
                return (0);

            if (VAR_16) {
                VAR_10->tm_year = ((VAR_10->tm_year / 100) * 100) + VAR_15;
                break;
            }
            VAR_16 = 1;
            if (VAR_15 <= 68)
                VAR_10->tm_year = VAR_15 + 2000 - VAR_2;
            else
                VAR_10->tm_year = VAR_15 + 1900 - VAR_2;
            break;




        case 'n':
        case 't':
            FUNC_0(0);
            while (FUNC_4((int) *VAR_12))
                VAR_12++;
            break;


        default:
            return (0);
        }


    }


    return ((char *)VAR_12);
}
