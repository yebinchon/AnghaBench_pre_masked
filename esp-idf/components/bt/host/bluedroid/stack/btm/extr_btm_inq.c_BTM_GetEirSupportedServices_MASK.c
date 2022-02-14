
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT8 ;
typedef int UINT32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (scalar_t__*,int ) ;

UINT8 FUNC_2( UINT32 *VAR_4, UINT8 **VAR_5,
                                   UINT8 VAR_6, UINT8 *VAR_7)
{
    UINT8 VAR_8;

    *VAR_7 = 0;

    for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
        if ( FUNC_0( VAR_4, VAR_8 )) {
            if ( *VAR_7 < VAR_6 ) {
                FUNC_1(*VAR_5, VAR_3[VAR_8]);
                (*VAR_7)++;
            }

            else {
                return VAR_2;
            }
        }
    }
    return VAR_0;
}
