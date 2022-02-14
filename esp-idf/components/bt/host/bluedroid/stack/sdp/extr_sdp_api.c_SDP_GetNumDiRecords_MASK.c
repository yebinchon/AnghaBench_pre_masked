
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tSDP_DISC_REC ;
typedef int tSDP_DISCOVERY_DB ;
typedef scalar_t__ UINT8 ;


 int * FUNC_0 (int *,int ,int *) ;
 int VAR_0 ;

UINT8 FUNC_1( tSDP_DISCOVERY_DB *VAR_1 )
{

    UINT8 VAR_2 = 0;
    tSDP_DISC_REC *VAR_3 = ((void*)0);

    do {
        VAR_3 = FUNC_0( VAR_1, VAR_0,
                                             VAR_3 );
        if ( VAR_3 ) {
            VAR_2++;
        }
    } while ( VAR_3 );

    return VAR_2;



}
