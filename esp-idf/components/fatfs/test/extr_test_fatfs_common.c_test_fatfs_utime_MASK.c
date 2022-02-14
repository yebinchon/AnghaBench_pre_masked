
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct utimbuf {void* modtime; int actime; } ;
struct tm {int tm_mon; int tm_mday; int tm_year; int tm_hour; int tm_min; int tm_sec; } ;
struct timeval {int tv_sec; } ;
struct stat {int st_mtime; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (void*,int) ;
 int FUNC_3 (void*,int) ;
 char* FUNC_4 (struct tm*) ;
 char* FUNC_5 (int*) ;
 int VAR_1 ;
 int FUNC_6 (struct tm*,int ,int) ;
 void* FUNC_7 (struct tm*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (struct timeval*,int *) ;
 int FUNC_10 (char const*,struct stat*) ;
 int FUNC_11 (char const*,char*) ;
 int FUNC_12 (char const*,struct utimbuf*) ;

void FUNC_13(const char* VAR_2, const char* VAR_3)
{
    struct stat VAR_4;
    struct tm VAR_5;
    struct utimbuf VAR_6 = {
        .actime = 0,
        .modtime = 0,
    };
    time_t VAR_7 = 0;
    FUNC_6(&VAR_5, 0, sizeof(struct tm));

    {

        VAR_5.tm_mon = 10 - 1;
        VAR_5.tm_mday = 31;
        VAR_5.tm_year = 2018 - 1900;
        VAR_5.tm_hour = 10;
        VAR_5.tm_min = 35;
        VAR_5.tm_sec = 23;

        VAR_7 = FUNC_7(&VAR_5);

        struct timeval VAR_8 = { .tv_sec = VAR_7 };
        FUNC_9(&VAR_8, ((void*)0));
    }
    FUNC_11(VAR_2, "");


    VAR_5.tm_mon = 1 - 1;
    VAR_5.tm_mday = 1;
    VAR_5.tm_year = 1980 - 1900;
    VAR_5.tm_hour = 0;
    VAR_5.tm_min = 0;
    VAR_5.tm_sec = 0;
    FUNC_8("Testing mod. time: %s", FUNC_4(&VAR_5));
    VAR_6.modtime = FUNC_7(&VAR_5);
    FUNC_1(0, FUNC_12(VAR_2, &VAR_6));
    FUNC_1(0, FUNC_10(VAR_2, &VAR_4));
    FUNC_2(VAR_6.modtime, VAR_4.st_mtime);


    FUNC_1(0, FUNC_12(VAR_2, ((void*)0)));
    FUNC_1(0, FUNC_10(VAR_2, &VAR_4));
    FUNC_8("Mod. time changed to (false actual time): %s", FUNC_5(&VAR_4.st_mtime));
    FUNC_3(VAR_6.modtime, VAR_4.st_mtime);
    FUNC_0(VAR_7 - VAR_4.st_mtime <= 2);


    VAR_5.tm_mon = 12 - 1;
    VAR_5.tm_mday = 31;
    VAR_5.tm_year = 2037 - 1900;
    VAR_5.tm_hour = 23;
    VAR_5.tm_min = 59;
    VAR_5.tm_sec = 8;
    FUNC_8("Testing mod. time: %s", FUNC_4(&VAR_5));
    VAR_6.modtime = FUNC_7(&VAR_5);
    FUNC_1(0, FUNC_12(VAR_2, &VAR_6));
    FUNC_1(0, FUNC_10(VAR_2, &VAR_4));
    FUNC_2(VAR_6.modtime, VAR_4.st_mtime);




    VAR_5.tm_mon = 1 - 1;
    VAR_5.tm_mday = 1;
    VAR_5.tm_year = 1970 - 1900;
    VAR_5.tm_hour = 0;
    VAR_5.tm_min = 0;
    VAR_5.tm_sec = 0;
    FUNC_8("Testing mod. time: %s", FUNC_4(&VAR_5));
    VAR_6.modtime = FUNC_7(&VAR_5);
    FUNC_1(-1, FUNC_12(VAR_2, &VAR_6));
    FUNC_1(VAR_0, VAR_1);
}
