
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t tm_wday; size_t tm_mon; int tm_year; int tm_mday; int tm_hour; int tm_min; int tm_sec; int tm_yday; } ;
typedef TYPE_1__ tm_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 char** VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 char** VAR_2 ;
 char** VAR_3 ;
 char** VAR_4 ;
 int FUNC_2 (char*,size_t,char*,int) ;

size_t FUNC_3(char* VAR_5, size_t VAR_6, const char* VAR_7,
                const tm_t* VAR_8){
    size_t VAR_9 = 0;
    int VAR_10;
    int VAR_11;
    char VAR_12[VAR_6];

    VAR_5[0] = '\0';
    VAR_6--;
    VAR_10 = VAR_11 = 0;

    for( ; *VAR_7 != '\0'; VAR_7++){
        switch(VAR_10){
            case 0:
                if(*VAR_7 != '%'){
                    if(VAR_9 < VAR_6){
                        VAR_5[VAR_9++] = *VAR_7;
                        VAR_5[VAR_9] = '\0';
                    } else {
                        VAR_5[VAR_9] = '\0';
                        return 0;
                    }
                    break;
                }
                VAR_10++;
                VAR_7++;
            case 1:
                if(*VAR_7 == '%'){
                    if(VAR_9 < VAR_6){
                        VAR_5[VAR_9++] = '%';
                        VAR_5[VAR_9] = '\0';
                    } else {
                        VAR_5[VAR_9] = '\0';
                        return 0;
                    }
                    VAR_10 = VAR_11 = 0;
                    break;
                }



                if(*VAR_7 == 'O'){
                    VAR_11 |= VAR_0;

                }

                VAR_10++;
            case 2:
                switch(*VAR_7){
                    case 'a':
                        FUNC_0(VAR_3[VAR_8->tm_wday]);
                        break;
                    case 'A':
                        FUNC_0(VAR_1[VAR_8->tm_wday]);
                        break;
                    case 'h':
                    case 'b':
                        FUNC_0(VAR_4[VAR_8->tm_mon]);
                        break;
                    case 'B':
                        FUNC_0(VAR_2[VAR_8->tm_mon]);
                        break;
                    case 'c':

                        FUNC_3(VAR_12, VAR_6-VAR_9, "%a %b %e %H:%M:%S %Z %Y", VAR_8);
                        FUNC_0(VAR_12);
                        break;
                    case 'C':
                        FUNC_2(VAR_12, VAR_6, "%d", VAR_8->tm_year / 100);
                        FUNC_0(VAR_12);
                        break;
                    case 'd':
                        FUNC_2(VAR_12, VAR_6, "%02d", VAR_8->tm_mday);
                        FUNC_0(VAR_12);
                        break;
                    case 'D':
                        FUNC_3(VAR_12, VAR_6-VAR_9, "%m/%d/%y", VAR_8);
                        FUNC_0(VAR_12);
                        break;
                    case 'e':
                        FUNC_2(VAR_12, VAR_6, "%2d", VAR_8->tm_mday);
                        FUNC_0(VAR_12);
                        break;
                    case 'F':
                        FUNC_3(VAR_12, VAR_6-VAR_9, "%Y-%m-%d", VAR_8);
                        FUNC_0(VAR_12);
                        break;
                    case 'G':



                        break;
                    case 'g':

                        break;
                    case 'H':
                        FUNC_2(VAR_12, VAR_6, "%02d", VAR_8->tm_hour);
                        FUNC_0(VAR_12);
                        break;
                    case 'I':
                        FUNC_2(VAR_12, VAR_6, "%02d", VAR_8->tm_hour % 12);
                        FUNC_0(VAR_12);
                        break;
                    case 'j':

                        FUNC_2(VAR_12, VAR_6, "%03d", VAR_8->tm_yday + 1);
                        FUNC_0(VAR_12);
                        break;
                    case 'k':
                        FUNC_2(VAR_12, VAR_6, "%2d", VAR_8->tm_hour);
                        FUNC_0(VAR_12);
                        break;
                    case 'l':
                        FUNC_2(VAR_12, VAR_6, "%2d", VAR_8->tm_hour % 12);
                        FUNC_0(VAR_12);
                        break;
                    case 'm':
                        FUNC_2(VAR_12, VAR_6, "%02d", VAR_8->tm_mon + 1);
                        FUNC_0(VAR_12);
                        break;
                    case 'M':
                        FUNC_2(VAR_12, VAR_6, "%02d", VAR_8->tm_min);
                        FUNC_0(VAR_12);
                        break;
                    case 'n':
                        FUNC_0("\n");
                        break;
                    case 'p':
                        if(VAR_8->tm_hour >= 12){
                            FUNC_0("PM");
                        }else{
                            FUNC_0("AM");
                        }
                        break;
                    case 'P':
                        if(VAR_8->tm_hour >= 12){
                            FUNC_0("pm");
                        }else{
                            FUNC_0("am");
                        }
                        break;
                    case 'r':
                        FUNC_3(VAR_12, VAR_6-VAR_9, "%I:%M:%S %p", VAR_8);
                        FUNC_0(VAR_12);
                        break;
                    case 'R':
                        FUNC_3(VAR_12, VAR_6-VAR_9, "%H:%M", VAR_8);
                        FUNC_0(VAR_12);
                        break;
                    case 's':
                        FUNC_2(VAR_12, VAR_6, "%llu", FUNC_1((tm_t*) VAR_8));
                        FUNC_0(VAR_12);
                        break;
                    case 'S':
                        FUNC_2(VAR_12, VAR_6, "%02d", VAR_8->tm_sec);
                        FUNC_0(VAR_12);
                        break;
                    case 't':
                        FUNC_0("\t");
                        break;
                    case 'T':
                        FUNC_3(VAR_12, VAR_6-VAR_9, "%H:%M:%S", VAR_8);
                        FUNC_0(VAR_12);
                        break;
                    case 'u':

                        FUNC_2(VAR_12, VAR_6, "%d", 1 + (VAR_8->tm_wday + 6 ) % 7);
                        FUNC_0(VAR_12);
                        break;
                    case 'U':


                        break;
                    case 'V':



                        break;
                    case 'w':

                        FUNC_2(VAR_12, VAR_6, "%d", VAR_8->tm_wday);
                        FUNC_0(VAR_12);
                        break;
                    case 'W':


                        break;
                    case 'x':

                        FUNC_3(VAR_12, VAR_6-VAR_9, "%a %b %e %Z %Y", VAR_8);
                        FUNC_0(VAR_12);
                        break;
                    case 'X':

                        FUNC_3(VAR_12, VAR_6-VAR_9, "%H:%M:%S", VAR_8);
                        FUNC_0(VAR_12);
                        break;
                    case 'y':

                        FUNC_2(VAR_12, VAR_6, "%02d", VAR_8->tm_year % 100);
                        FUNC_0(VAR_12);
                        break;
                    case 'Y':

                        FUNC_2(VAR_12, VAR_6, "%d", VAR_8->tm_year);
                        FUNC_0(VAR_12);
                        break;
                    case 'z':


                        break;
                    case 'Z':

                        break;
                    default:
                        break;
                }
            VAR_10 = VAR_11 = 0;
        }
    }

    VAR_5[VAR_9] = '\0';

    return VAR_9;
}
