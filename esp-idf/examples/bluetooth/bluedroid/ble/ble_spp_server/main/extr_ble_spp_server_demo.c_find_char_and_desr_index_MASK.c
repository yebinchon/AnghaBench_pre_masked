
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static uint8_t FUNC_0(uint16_t VAR_2)
{
    uint8_t VAR_3 = 0xff;

    for(int VAR_4 = 0; VAR_4 < VAR_0 ; VAR_4++){
        if(VAR_2 == VAR_1[VAR_4]){
            return VAR_4;
        }
    }

    return VAR_3;
}
