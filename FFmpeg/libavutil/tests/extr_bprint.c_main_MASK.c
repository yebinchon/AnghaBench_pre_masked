
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct tm {int tm_year; int tm_mon; int tm_mday; } ;
typedef int buf ;
struct TYPE_7__ {char* str; int len; } ;
typedef TYPE_1__ AVBPrint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (TYPE_1__*,char*,struct tm*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (char*) ;

int FUNC_7(void)
{
    AVBPrint VAR_3;
    char VAR_4[256];
    struct tm VAR_5 = { .tm_year = 100, .tm_mon = 11, .tm_mday = 20 };

    FUNC_1(&VAR_3, 0, VAR_2);
    FUNC_4(&VAR_3, 5);
    FUNC_5("Short text in unlimited buffer: %u/%u\n", (unsigned)FUNC_6(VAR_3.str), VAR_3.len);
    FUNC_5("%s\n", VAR_3.str);
    FUNC_0(&VAR_3, ((void*)0));

    FUNC_1(&VAR_3, 0, VAR_2);
    FUNC_4(&VAR_3, 25);
    FUNC_5("Long text in unlimited buffer: %u/%u\n", (unsigned)FUNC_6(VAR_3.str), VAR_3.len);
    FUNC_0(&VAR_3, ((void*)0));

    FUNC_1(&VAR_3, 0, 2048);
    FUNC_4(&VAR_3, 25);
    FUNC_5("Long text in limited buffer: %u/%u\n", (unsigned)FUNC_6(VAR_3.str), VAR_3.len);
    FUNC_0(&VAR_3, ((void*)0));

    FUNC_1(&VAR_3, 0, VAR_0);
    FUNC_4(&VAR_3, 5);
    FUNC_5("Short text in automatic buffer: %u/%u\n", (unsigned)FUNC_6(VAR_3.str), VAR_3.len);

    FUNC_1(&VAR_3, 0, VAR_0);
    FUNC_4(&VAR_3, 25);
    FUNC_5("Long text in automatic buffer: %u/%u\n", (unsigned)FUNC_6(VAR_3.str)/8*8, VAR_3.len);


    FUNC_1(&VAR_3, 0, VAR_1);
    FUNC_4(&VAR_3, 25);
    FUNC_5("Long text count only buffer: %u/%u\n", (unsigned)FUNC_6(VAR_3.str), VAR_3.len);

    FUNC_2(&VAR_3, VAR_4, sizeof(VAR_4));
    FUNC_4(&VAR_3, 25);
    FUNC_5("Long text count only buffer: %u/%u\n", (unsigned)FUNC_6(VAR_4), VAR_3.len);

    FUNC_1(&VAR_3, 0, VAR_2);
    FUNC_3(&VAR_3, "%Y-%m-%d", &VAR_5);
    FUNC_5("strftime full: %u/%u \"%s\"\n", (unsigned)FUNC_6(VAR_4), VAR_3.len, VAR_3.str);
    FUNC_0(&VAR_3, ((void*)0));

    FUNC_1(&VAR_3, 0, 8);
    FUNC_3(&VAR_3, "%Y-%m-%d", &VAR_5);
    FUNC_5("strftime truncated: %u/%u \"%s\"\n", (unsigned)FUNC_6(VAR_4), VAR_3.len, VAR_3.str);

    return 0;
}
