
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int HintSampleQueue ;
typedef int AVIOContext ;


 scalar_t__ FUNC_0 (int const*,int,int *,int*,int*,int*,int*) ;
 int FUNC_1 (int const*,int,int *,int*) ;
 int FUNC_2 (int *,int,int,int,int*) ;

__attribute__((used)) static void FUNC_3(const uint8_t *VAR_0, int VAR_1,
                             AVIOContext *VAR_2, int *VAR_3,
                             HintSampleQueue *VAR_4)
{

    while (VAR_1 > 0) {
        int VAR_5, VAR_6, VAR_7, VAR_8;
        if (FUNC_0(VAR_0, VAR_1, VAR_4, &VAR_8, &VAR_5,
                              &VAR_6, &VAR_7) < 0)
            break;
        FUNC_1(VAR_0, VAR_8, VAR_2, VAR_3);
        VAR_0 += VAR_8;
        VAR_1 -= VAR_8;
        FUNC_2(VAR_2, VAR_5, VAR_6, VAR_7, VAR_3);
        VAR_0 += VAR_7;
        VAR_1 -= VAR_7;
    }
    FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
}
