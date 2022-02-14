
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float VAR_0 ;
 float FUNC_0 (int ,int ) ;
 int FUNC_1 (float) ;
 int FUNC_2 (float) ;

__attribute__((used)) static int FUNC_3(const float *VAR_1, const float *VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5;
    float VAR_6[2] = { 0.0f, 0.0f };
    if (VAR_3) {
        for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
            VAR_6[0] += (VAR_1[VAR_5] + VAR_2[VAR_5])*(VAR_1[VAR_5] + VAR_2[VAR_5]);
            VAR_6[1] += (VAR_1[VAR_5] - VAR_2[VAR_5])*(VAR_1[VAR_5] - VAR_2[VAR_5]);
        }
    } else {
        for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
            VAR_6[0] += VAR_1[VAR_5]*VAR_1[VAR_5];
            VAR_6[1] += VAR_2[VAR_5]*VAR_2[VAR_5];
        }
    }
    return FUNC_1(32768.0f*FUNC_0(FUNC_2(VAR_6[1]), FUNC_2(VAR_6[0]))/VAR_0);
}
