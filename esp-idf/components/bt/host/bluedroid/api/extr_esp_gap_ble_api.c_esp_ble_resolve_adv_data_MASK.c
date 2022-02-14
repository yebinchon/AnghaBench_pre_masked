
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 scalar_t__* FUNC_0 (scalar_t__*,scalar_t__,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,...) ;

uint8_t *FUNC_2( uint8_t *VAR_3, uint8_t VAR_4, uint8_t *VAR_5)
{
    if (((VAR_4 < VAR_2) || (VAR_4 > VAR_1)) &&
            (VAR_4 != VAR_0)) {
        FUNC_1("the eir type not define, type = %x\n", VAR_4);
        return ((void*)0);
    }

    if (VAR_3 == ((void*)0)) {
        FUNC_1("Invalid p_eir data.\n");
        return ((void*)0);
    }

    return (FUNC_0( VAR_3, VAR_4, VAR_5));
}
