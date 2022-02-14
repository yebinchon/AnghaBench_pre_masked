
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ int16_t ;


 int FUNC_0 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int) ;
 size_t* VAR_0 ;

void FUNC_2(uint8_t **VAR_1, const int *VAR_2,
        int16_t *VAR_3, int VAR_4, const uint8_t VAR_5[15*8])
{
    int VAR_6, VAR_7;
    for(VAR_7=1; VAR_7<3; VAR_7++){
        for(VAR_6=VAR_7*16; VAR_6<VAR_7*16+4; VAR_6++){
            if(VAR_5[ VAR_0[VAR_6] ])
                FUNC_0(VAR_1[VAR_7-1] + VAR_2[VAR_6],
                        VAR_3 + VAR_6*16, VAR_4);
            else if(((int16_t*)VAR_3)[VAR_6*16])
                FUNC_1(VAR_1[VAR_7-1] + VAR_2[VAR_6],
                        VAR_3 + VAR_6*16, VAR_4);
        }
    }
}
