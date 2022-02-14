
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32_t ;
typedef int buf ;
typedef int AVIOContext ;


 int FUNC_0 (int,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,char*,int) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (int ,char*,int,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_7(AVIOContext *VAR_1, AVIOContext *VAR_2, int32_t VAR_3)
{
    int32_t VAR_4, VAR_5;

    VAR_4 = FUNC_1(VAR_1);
    VAR_5 = FUNC_1(VAR_1);
    FUNC_3(VAR_2, VAR_4);
    FUNC_3(VAR_2, VAR_5);
    if (FUNC_5(VAR_5, VAR_3) != 0)
        return -1;
    VAR_4 -= 8;
    while (VAR_4 > 0) {
        char VAR_6[1024];
        int VAR_7 = FUNC_0(sizeof(VAR_6), VAR_4);
        int VAR_8;
        if ((VAR_8 = FUNC_2(VAR_1, VAR_6, VAR_7)) != VAR_7) {
            FUNC_6(VAR_0, "short read, wanted %d, got %d\n", VAR_7, VAR_8);
            break;
        }
        FUNC_4(VAR_2, VAR_6, VAR_7);
        VAR_4 -= VAR_7;
    }
    return 0;
}
