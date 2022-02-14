
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int eir_uuid; int eir_complete_list; } ;
typedef TYPE_1__ tBTM_INQ_RESULTS ;
typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT16 ;


 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__,scalar_t__*) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (scalar_t__*,int ) ;
 scalar_t__* FUNC_4 (scalar_t__*,int ,scalar_t__*,scalar_t__*) ;

void FUNC_5( UINT8 *VAR_7, tBTM_INQ_RESULTS *VAR_8 )
{
    UINT8 *VAR_9;
    UINT8 VAR_10;
    UINT16 VAR_11;
    UINT8 VAR_12;
    UINT8 VAR_13 = VAR_1;

    VAR_9 = FUNC_4( VAR_7, VAR_4, &VAR_10, &VAR_13 );

    if (VAR_13 == VAR_0) {
        VAR_8->eir_complete_list = VAR_6;
    } else {
        VAR_8->eir_complete_list = VAR_2;
    }

    FUNC_1("btm_set_eir_uuid eir_complete_list=0x%02X\n", VAR_8->eir_complete_list);

    if ( VAR_9 ) {
        for ( VAR_12 = 0; VAR_12 < VAR_10; VAR_12++ ) {
            FUNC_2(VAR_11, VAR_9);
            FUNC_0( VAR_8->eir_uuid, VAR_11 );
        }
    }

    VAR_9 = FUNC_4( VAR_7, VAR_5, &VAR_10, &VAR_13 );
    if ( VAR_9 ) {
        for ( VAR_12 = 0; VAR_12 < VAR_10; VAR_12++ ) {
            VAR_11 = FUNC_3( VAR_9, VAR_5 );
            VAR_9 += VAR_5;
            if ( VAR_11 ) {
                FUNC_0( VAR_8->eir_uuid, VAR_11 );
            }
        }
    }

    VAR_9 = FUNC_4( VAR_7, VAR_3, &VAR_10, &VAR_13 );
    if ( VAR_9 ) {
        for ( VAR_12 = 0; VAR_12 < VAR_10; VAR_12++ ) {
            VAR_11 = FUNC_3( VAR_9, VAR_3 );
            VAR_9 += VAR_3;
            if ( VAR_11 ) {
                FUNC_0( VAR_8->eir_uuid, VAR_11 );
            }
        }
    }
}
