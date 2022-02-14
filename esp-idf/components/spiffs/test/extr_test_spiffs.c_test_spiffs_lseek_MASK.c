
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ref_buf ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char const*,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char const*,char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (char*,int,int,int *) ;
 int FUNC_8 (int *,int,int ) ;
 int FUNC_9 (int *) ;

void FUNC_10(const char* VAR_3)
{
    FILE* VAR_4 = FUNC_5(VAR_3, "wb+");
    FUNC_2(VAR_4);
    FUNC_0(11, FUNC_6(VAR_4, "0123456789\n"));
    FUNC_0(0, FUNC_8(VAR_4, -2, VAR_0));
    FUNC_0('9', FUNC_4(VAR_4));
    FUNC_0(0, FUNC_8(VAR_4, 3, VAR_2));
    FUNC_0('3', FUNC_4(VAR_4));
    FUNC_0(0, FUNC_8(VAR_4, -3, VAR_1));
    FUNC_0('8', FUNC_4(VAR_4));
    FUNC_0(0, FUNC_8(VAR_4, 0, VAR_1));
    FUNC_0(11, FUNC_9(VAR_4));
    FUNC_0(4, FUNC_6(VAR_4, "abc\n"));
    FUNC_0(0, FUNC_8(VAR_4, 0, VAR_1));
    FUNC_0(15, FUNC_9(VAR_4));
    FUNC_0(0, FUNC_8(VAR_4, 0, VAR_2));
    char VAR_5[20];
    FUNC_0(15, FUNC_7(VAR_5, 1, sizeof(VAR_5), VAR_4));
    const char VAR_6[] = "0123456789\nabc\n";
    FUNC_1(VAR_6, VAR_5, sizeof(VAR_6) - 1);

    FUNC_0(0, FUNC_3(VAR_4));
}
