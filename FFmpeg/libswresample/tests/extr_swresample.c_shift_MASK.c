
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(uint8_t *VAR_0[], int VAR_1, int VAR_2, enum AVSampleFormat VAR_3){
    int VAR_4;

    if(FUNC_2(VAR_3)){
        VAR_3= FUNC_0(VAR_3, 0);
        for(VAR_4= 0; VAR_4<VAR_2; VAR_4++)
            VAR_0[VAR_4] += VAR_1*FUNC_1(VAR_3);
    }else{
        VAR_0[0] += VAR_1*VAR_2*FUNC_1(VAR_3);
    }
}
