
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float int16_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (float) ;

__attribute__((used)) static float FUNC_1(int16_t *VAR_1, int16_t *VAR_2){
    int VAR_3;
    float VAR_4 = 0;
    float VAR_5 = 0;
    float VAR_6 = 0;
    float VAR_7 = 0;

    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        VAR_4 += ((float)VAR_1[VAR_3]) * VAR_2[VAR_3];
        VAR_6 += ((float)VAR_1[VAR_3]) * VAR_1[VAR_3];
        VAR_7 += ((float)VAR_2[VAR_3]) * VAR_2[VAR_3];
    }
    VAR_5 = (float)FUNC_0(VAR_6 * VAR_7);
    return VAR_4 / VAR_5;
}
