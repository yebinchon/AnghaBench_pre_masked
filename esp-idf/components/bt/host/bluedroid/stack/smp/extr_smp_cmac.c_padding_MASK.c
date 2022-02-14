
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT8 ;
typedef scalar_t__* BT_OCTET16 ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0 ( BT_OCTET16 VAR_1, UINT8 VAR_2 )
{
    UINT8 VAR_3, *VAR_4 = VAR_1;

    for ( VAR_3 = VAR_2 ; VAR_3 < VAR_0; VAR_3++ ) {
        VAR_4[VAR_0 - VAR_3 - 1] = ( VAR_3 == VAR_2 ) ? 0x80 : 0;
    }
}
