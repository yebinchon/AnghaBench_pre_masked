
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum TwinVQFrameType { ____Placeholder_TwinVQFrameType } TwinVQFrameType ;
typedef int TwinVQContext ;


 int FUNC_0 (int *,int,float*,float const*,int,int,int) ;
 int FUNC_1 (float*,float,float,int) ;
 int FUNC_2 (float*,float,int) ;

__attribute__((used)) static void FUNC_3(TwinVQContext *VAR_0, enum TwinVQFrameType VAR_1,
                               const float *VAR_2, float *VAR_3,
                               int VAR_4, int VAR_5)
{
    FUNC_0(VAR_0, VAR_1, VAR_3, VAR_2, VAR_4 / 2, VAR_5, 0);
    FUNC_0(VAR_0, VAR_1, VAR_3 + VAR_4 / 2, VAR_2, VAR_4 / 2,
                          2 * VAR_5, 1);

    FUNC_1(VAR_3 + VAR_4 / 2 - VAR_5 + 1, VAR_3[VAR_4 / 2],
                VAR_3[VAR_4 / 2 - VAR_5], VAR_5);

    FUNC_2(VAR_3 + VAR_4 - 2 * VAR_5 + 1, VAR_3[VAR_4 - 2 * VAR_5],
                        2 * VAR_5 - 1);
}
