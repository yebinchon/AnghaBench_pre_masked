
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int ** VAR_2 ;
 int FUNC_0 (size_t*,int) ;

void FUNC_1(uint8_t VAR_3, uint8_t *VAR_4) {
    int VAR_5;
    if(VAR_3 < VAR_1) {
        for(VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
            VAR_2[VAR_5][VAR_3] = FUNC_0(VAR_4,VAR_5);
    }
}
