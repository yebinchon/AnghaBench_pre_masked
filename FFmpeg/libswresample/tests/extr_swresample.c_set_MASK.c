
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int32_t ;
typedef int int16_t ;
typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;







 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (double) ;
 int FUNC_7 (double) ;

__attribute__((used)) static void FUNC_8(uint8_t *VAR_0[], int VAR_1, int VAR_2, int VAR_3, enum AVSampleFormat VAR_4, double VAR_5){
    uint8_t *VAR_6;
    if(FUNC_5(VAR_4)){
        VAR_4= FUNC_4(VAR_4, 0);
        VAR_6= VAR_0[VAR_1];
    }else{
        VAR_6= VAR_0[0];
        VAR_2= VAR_1 + VAR_2*VAR_3;
    }
    switch(VAR_4){
    case 128 : ((uint8_t*)VAR_6)[VAR_2]= FUNC_2 (FUNC_7((VAR_5+1.0)*127)); break;
    case 130: ((int16_t*)VAR_6)[VAR_2]= FUNC_1 (FUNC_7(VAR_5*32767)); break;
    case 129: ((int32_t*)VAR_6)[VAR_2]= FUNC_3(FUNC_6(VAR_5*2147483647)); break;
    case 131: ((float *)VAR_6)[VAR_2]= VAR_5; break;
    case 132: ((double *)VAR_6)[VAR_2]= VAR_5; break;
    default: FUNC_0(0);
    }
}
