
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(uint8_t *VAR_1[VAR_0], uint8_t *VAR_2, enum AVSampleFormat VAR_3, int VAR_4){
    if(FUNC_1(VAR_3)){
        int VAR_5;
        int VAR_6= FUNC_0(VAR_3&0xFF)*VAR_4;
        VAR_3&=0xFF;
        for(VAR_5=0; VAR_5<VAR_0; VAR_5++){
            VAR_1[VAR_5]= VAR_2 + VAR_5*VAR_6;
        }
    }else{
        VAR_1[0]= VAR_2;
    }
}
