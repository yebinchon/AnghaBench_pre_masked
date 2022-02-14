
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static float FUNC_1(int16_t *VAR_2, int16_t VAR_3) {
    int VAR_4;
    float VAR_5 = 0;
    float VAR_6 = 0.000001f;
    float VAR_7;

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++){
        VAR_5 += FUNC_0(VAR_2[VAR_1 - VAR_0 + VAR_4]);
        VAR_6 += FUNC_0(VAR_2[VAR_3 + VAR_4]);
    }
    VAR_7 = VAR_5 / VAR_6;

    if (VAR_7 < 0.75f) {
        VAR_7 = 0.75f;
    }
    if (VAR_7 > 1.2f) {
        VAR_7 = 1.2f;
    }
    return VAR_7;
}
