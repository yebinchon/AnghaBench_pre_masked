
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_2__ {scalar_t__ byChannelNumber; } ;
typedef int PVOID ;
typedef scalar_t__ CARD_PHY_TYPE ;
typedef scalar_t__ BYTE ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;

BYTE FUNC_0 (PVOID VAR_5, BYTE VAR_6, CARD_PHY_TYPE VAR_7)
{
    UINT VAR_8;

    if ((VAR_7 == VAR_2) || (VAR_7 == VAR_3)) {
        return (VAR_6);
    }

    for(VAR_8 = (VAR_1 + 1); VAR_8 <= VAR_0; ) {
        if (VAR_4[VAR_8].byChannelNumber == VAR_6) {
            return ((BYTE) VAR_8);
        }
        VAR_8++;
    }
    return (0);
}
