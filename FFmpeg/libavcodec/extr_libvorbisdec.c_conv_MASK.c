
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ogg_int16_t ;


 int FUNC_0 (float) ;

__attribute__((used)) static inline int FUNC_1(int VAR_0, float **VAR_1, char *VAR_2, int VAR_3) {
    int VAR_4, VAR_5;
    ogg_int16_t *VAR_6, *VAR_7 = (ogg_int16_t*)VAR_2 ;
    float *VAR_8 ;

    for(VAR_4 = 0 ; VAR_4 < VAR_3 ; VAR_4++){
        VAR_6 = &VAR_7[VAR_4];
        VAR_8 = VAR_1[VAR_4] ;

        for(VAR_5 = 0 ; VAR_5 < VAR_0 ; VAR_5++) {
            *VAR_6 = FUNC_0(VAR_8[VAR_5] * 32767.f);
            VAR_6 += VAR_3;
        }
    }

    return 0 ;
}
