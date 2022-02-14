
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
struct timeval {scalar_t__ tv_sec; } ;
struct stat {int st_mode; scalar_t__ st_mtime; } ;
typedef int st ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 char* FUNC_4 (struct tm*) ;
 int FUNC_5 (scalar_t__*,struct tm*) ;
 int FUNC_6 (struct stat*,int ,int) ;
 scalar_t__ FUNC_7 (struct tm*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (struct timeval*,int *) ;
 int FUNC_10 (char const*,struct stat*) ;
 int FUNC_11 (char const*,char*) ;

void FUNC_12(const char* VAR_2, const char* VAR_3)
{
    struct tm VAR_4;
    VAR_4.tm_year = 2017 - 1900;
    VAR_4.tm_mon = 11;
    VAR_4.tm_mday = 8;
    VAR_4.tm_hour = 19;
    VAR_4.tm_min = 51;
    VAR_4.tm_sec = 10;
    time_t VAR_5 = FUNC_7(&VAR_4);
    FUNC_8("Setting time: %s", FUNC_4(&VAR_4));
    struct timeval VAR_6 = { .tv_sec = VAR_5 };
    FUNC_9(&VAR_6, ((void*)0));

    FUNC_11(VAR_2, "foo\n");

    struct stat VAR_7;
    FUNC_1(0, FUNC_10(VAR_2, &VAR_7));
    time_t VAR_8 = VAR_7.st_mtime;
    struct tm VAR_9;
    FUNC_5(&VAR_8, &VAR_9);
    FUNC_8("File time: %s", FUNC_4(&VAR_9));
    FUNC_0(FUNC_3(VAR_8 - VAR_5) < 2);

    FUNC_0(VAR_7.st_mode & VAR_1);
    FUNC_2(VAR_7.st_mode & VAR_0);

    FUNC_6(&VAR_7, 0, sizeof(VAR_7));
    FUNC_1(0, FUNC_10(VAR_3, &VAR_7));
    FUNC_0(VAR_7.st_mode & VAR_0);
    FUNC_2(VAR_7.st_mode & VAR_1);
}
