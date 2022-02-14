
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT8 ;
typedef int UINT32 ;
typedef int UINT16 ;
typedef int BOOLEAN ;


 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;

BOOLEAN FUNC_2( UINT32 *VAR_2, UINT16 VAR_3 )
{
    UINT8 VAR_4;

    VAR_4 = FUNC_1(VAR_3);
    if ( VAR_4 < VAR_0 ) {
        return ( FUNC_0( VAR_2, VAR_4 ));
    } else {
        return ( VAR_1 );
    }
}
