
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int image ;


 scalar_t__ FUNC_0 (float) ;
 float FUNC_1 (int ,int,int,int) ;

__attribute__((used)) static float FUNC_2(image VAR_0, float VAR_1, float VAR_2, int VAR_3)
{
    int VAR_4 = (int) FUNC_0(VAR_1);
    int VAR_5 = (int) FUNC_0(VAR_2);

    float VAR_6 = VAR_1 - VAR_4;
    float VAR_7 = VAR_2 - VAR_5;

    float VAR_8 = (1-VAR_7) * (1-VAR_6) * FUNC_1(VAR_0, VAR_4, VAR_5, VAR_3) +
        VAR_7 * (1-VAR_6) * FUNC_1(VAR_0, VAR_4, VAR_5+1, VAR_3) +
        (1-VAR_7) * VAR_6 * FUNC_1(VAR_0, VAR_4+1, VAR_5, VAR_3) +
        VAR_7 * VAR_6 * FUNC_1(VAR_0, VAR_4+1, VAR_5+1, VAR_3);
    return VAR_8;
}
