
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;

void FUNC_2(uint16_t *VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
    if (VAR_7!=VAR_0) {


        for (int VAR_9=0; VAR_9<320; VAR_9++) VAR_2[VAR_9]=FUNC_1(VAR_7*0.15+VAR_9*0.06)*4;
        for (int VAR_10=0; VAR_10<240; VAR_10++) VAR_4[VAR_10]=FUNC_1(VAR_7*0.1+VAR_10*0.05)*4;
        for (int VAR_11=0; VAR_11<320; VAR_11++) VAR_1[VAR_11]=FUNC_1(VAR_7*0.11+VAR_11*0.12)*4;
        for (int VAR_12=0; VAR_12<240; VAR_12++) VAR_3[VAR_12]=FUNC_1(VAR_7*0.07+VAR_12*0.15)*4;
        VAR_0=VAR_7;
    }
    for (int VAR_13=VAR_6; VAR_13<VAR_6+VAR_8; VAR_13++) {
        for (int VAR_14=0; VAR_14<320; VAR_14++) {
            *VAR_5++=FUNC_0(VAR_14+VAR_4[VAR_13]+VAR_1[VAR_14], VAR_13+VAR_2[VAR_14]+VAR_3[VAR_13]);
        }
    }
}
