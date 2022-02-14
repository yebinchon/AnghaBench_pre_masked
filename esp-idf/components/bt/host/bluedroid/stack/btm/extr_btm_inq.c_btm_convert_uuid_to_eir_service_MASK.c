
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT8 ;
typedef scalar_t__ UINT16 ;


 size_t VAR_0 ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static UINT8 FUNC_0( UINT16 VAR_2 )
{
    UINT8 VAR_3;

    for ( VAR_3 = 0; VAR_3 < VAR_0; VAR_3++ ) {
        if ( VAR_2 == VAR_1[VAR_3]) {
            return VAR_3;
        }
    }
    return VAR_0;
}
