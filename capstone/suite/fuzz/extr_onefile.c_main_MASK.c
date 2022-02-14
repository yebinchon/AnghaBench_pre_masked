
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int FILE ;


 int FUNC_0 (int *,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,size_t,int,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,long,int ) ;
 size_t FUNC_6 (int *) ;
 int * FUNC_7 (size_t) ;

int FUNC_8(int VAR_2, char** VAR_3)
{
    FILE * VAR_4;
    uint8_t *VAR_5;
    size_t VAR_6;

    if (VAR_2 != 2) {
        return 1;
    }

    VAR_4 = FUNC_2(VAR_3[1], "rb");
    if (VAR_4 == ((void*)0)) {
        return 2;
    }
    if (FUNC_5(VAR_4, 0L, VAR_0) != 0) {
        FUNC_1(VAR_4);
        return 2;
    }
    VAR_6 = FUNC_6(VAR_4);
    if (VAR_6 == (size_t) -1) {
        FUNC_1(VAR_4);
        return 2;
    }
    if (FUNC_5(VAR_4, 0L, VAR_1) != 0) {
        FUNC_1(VAR_4);
        return 2;
    }
    VAR_5 = FUNC_7(VAR_6);
    if (VAR_5 == ((void*)0)) {
        FUNC_1(VAR_4);
        return 2;
    }
    if (FUNC_3(VAR_5, VAR_6, 1, VAR_4) != 1) {
        FUNC_1(VAR_4);
        FUNC_4(VAR_5);
        return 2;
    }


    FUNC_0(VAR_5, VAR_6);
    FUNC_4(VAR_5);
    FUNC_1(VAR_4);
    return 0;
}
