
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT8 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__* VAR_4 ;

UINT8 *FUNC_0(UINT8 VAR_5)
{
    UINT8 VAR_6 = VAR_5 & (~VAR_3);

    if (VAR_5 == VAR_0 ) {
        VAR_6 = 0x14;

    }

    if (VAR_5 == VAR_2) {
        VAR_6 = 0x15;
    }

    if (VAR_6 <= VAR_1) {
        return (UINT8 *) VAR_4[VAR_6];
    } else {
        return (UINT8 *)"Op Code Exceed Max";
    }
}
