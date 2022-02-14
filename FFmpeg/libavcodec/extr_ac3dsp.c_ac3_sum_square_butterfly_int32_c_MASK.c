
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64_t ;
typedef int int32_t ;


 int FUNC_0 (scalar_t__,int,int) ;

__attribute__((used)) static void FUNC_1(int64_t VAR_0[4],
                                             const int32_t *VAR_1,
                                             const int32_t *VAR_2,
                                             int VAR_3)
{
    int VAR_4;

    VAR_0[0] = VAR_0[1] = VAR_0[2] = VAR_0[3] = 0;

    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        int VAR_5 = VAR_1[VAR_4];
        int VAR_6 = VAR_2[VAR_4];
        int VAR_7 = VAR_5 + VAR_6;
        int VAR_8 = VAR_5 - VAR_6;
        FUNC_0(VAR_0[0], VAR_5, VAR_5);
        FUNC_0(VAR_0[1], VAR_6, VAR_6);
        FUNC_0(VAR_0[2], VAR_7, VAR_7);
        FUNC_0(VAR_0[3], VAR_8, VAR_8);
    }
}
