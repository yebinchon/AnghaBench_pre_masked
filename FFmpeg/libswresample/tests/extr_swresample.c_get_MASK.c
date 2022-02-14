
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double uint8_t ;
typedef double int32_t ;
typedef double int16_t ;
typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;







 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static double FUNC_3(uint8_t *VAR_0[], int VAR_1, int VAR_2, int VAR_3, enum AVSampleFormat VAR_4){
    const uint8_t *VAR_5;
    if(FUNC_2(VAR_4)){
        VAR_4= FUNC_1(VAR_4, 0);
        VAR_5= VAR_0[VAR_1];
    }else{
        VAR_5= VAR_0[0];
        VAR_2= VAR_1 + VAR_2*VAR_3;
    }

    switch(VAR_4){
    case 128 : return ((const uint8_t*)VAR_5)[VAR_2]/127.0-1.0;
    case 130: return ((const int16_t*)VAR_5)[VAR_2]/32767.0;
    case 129: return ((const int32_t*)VAR_5)[VAR_2]/2147483647.0;
    case 131: return ((const float *)VAR_5)[VAR_2];
    case 132: return ((const double *)VAR_5)[VAR_2];
    default: FUNC_0(0);
    }
}
