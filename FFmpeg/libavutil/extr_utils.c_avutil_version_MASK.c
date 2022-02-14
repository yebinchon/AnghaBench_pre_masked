
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int,int) ;
 long long FUNC_4 (long long) ;

unsigned FUNC_5(void)
{
    static int VAR_9;
    if (VAR_9)
        return VAR_7;

    FUNC_1(VAR_4 == 9);
    FUNC_1(VAR_0 == 4);
    FUNC_1(VAR_3 == 7);
    FUNC_1(VAR_8 >= 100);
    FUNC_1(VAR_5 == VAR_6);

    FUNC_1(((size_t)-1) > 0);

    if (FUNC_3(1, 2) != 5) {
        FUNC_2(((void*)0), VAR_2, "Libavutil has been built with a broken binutils, please upgrade binutils and rebuild\n");
        FUNC_0();
    }

    if (FUNC_4(1LL<<60) != 1LL<<60) {
        FUNC_2(((void*)0), VAR_1, "Libavutil has been linked to a broken llrint()\n");
    }

    VAR_9 = 1;
    return VAR_7;
}
