
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int int64_t ;
typedef int NUTContext ;
typedef int AVIOContext ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,scalar_t__ (*) (int ,int *,int),scalar_t__) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(NUTContext *VAR_0, AVIOContext *VAR_1,
                            int VAR_2, uint64_t VAR_3)
{
    int64_t VAR_4;

    VAR_3 = FUNC_0(VAR_3);
    VAR_3 = FUNC_2(0, (uint8_t*) &VAR_3, 8);

    FUNC_4(VAR_1, FUNC_2, VAR_3);
    VAR_4 = FUNC_5(VAR_1);
    if (VAR_4 > 4096)
        FUNC_1(VAR_1);
    if (FUNC_3(VAR_1) && VAR_4 > 4096)
        return -1;

    FUNC_4(VAR_1, VAR_2 ? FUNC_2 : ((void*)0), 0);

    return VAR_4;
}
