
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (int) ;

int
FUNC_6(int VAR_2, char **VAR_3)
{
    int VAR_4 = FUNC_0();
    FUNC_3(VAR_1, VAR_4);
    FUNC_5(VAR_4);
    int VAR_5 = FUNC_1(VAR_1);
    if (VAR_5 != 0) {
        return VAR_5;
    }
    if (VAR_2 == 2 && FUNC_4(VAR_3[1], "-b") == 0) {
        FUNC_2(VAR_0);
    }
    return 0;
}
