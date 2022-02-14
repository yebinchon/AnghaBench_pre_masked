
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,scalar_t__*,scalar_t__,int ,int ) ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (scalar_t__*,int const*,scalar_t__) ;

int FUNC_4(uint32_t VAR_2, const uint8_t * VAR_3, uint32_t VAR_4)
{
    if(VAR_1 < 0)
        return VAR_1;

    if(!VAR_3)
        return -1;

    uint32_t *VAR_5 = (uint32_t*)FUNC_2(0x20, VAR_4 + 4);
    if(!VAR_5)
        return -2;

    VAR_5[0] = VAR_2;
    FUNC_3(VAR_5 + 1, VAR_3, VAR_4);

    int VAR_6 = FUNC_0(VAR_1, VAR_0, VAR_5, VAR_4 + 4, 0, 0);

    FUNC_1(VAR_5);
    return VAR_6;
}
