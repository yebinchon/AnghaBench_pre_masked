
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ primary_record; int version; int product; int vendor_id_source; int vendor; int documentation_url; int service_description; int client_executable_url; } ;
struct TYPE_12__ {TYPE_1__ rec; int spec_id; } ;
typedef TYPE_4__ tSDP_DI_GET_RECORD ;
typedef int tSDP_DISC_REC ;
struct TYPE_10__ {scalar_t__ u8; int u16; } ;
struct TYPE_11__ {TYPE_2__ v; } ;
struct TYPE_13__ {TYPE_3__ attr_value; } ;
typedef TYPE_5__ tSDP_DISC_ATTR ;
typedef int tSDP_DISCOVERY_DB ;
typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT16 ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,TYPE_5__*,int ) ;
 scalar_t__ VAR_9 ;
 TYPE_5__* FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *,int ,int *) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;

UINT16 FUNC_3( UINT8 VAR_14, tSDP_DI_GET_RECORD *VAR_15,
                        tSDP_DISCOVERY_DB *VAR_16 )
{

    UINT16 VAR_17 = VAR_11;
    UINT8 VAR_18 = 1;

    tSDP_DISC_REC *VAR_19 = ((void*)0);


    do {
        VAR_19 = FUNC_2( VAR_16, VAR_13,
                                             VAR_19 );
        if ( VAR_19 ) {
            if ( VAR_18++ == VAR_14 ) {
                VAR_17 = VAR_12;
                break;
            }
        }
    } while ( VAR_19 );

    if ( VAR_17 == VAR_12 ) {

        tSDP_DISC_ATTR *VAR_20 = ((void*)0);


        VAR_20 = FUNC_1( VAR_19, VAR_0 );
        FUNC_0( VAR_15->rec.client_executable_url, VAR_20,
                            VAR_10 );


        VAR_20 = FUNC_1( VAR_19, VAR_5 );
        FUNC_0( VAR_15->rec.service_description, VAR_20, VAR_10 );


        VAR_20 = FUNC_1( VAR_19, VAR_1 );
        FUNC_0( VAR_15->rec.documentation_url, VAR_20, VAR_10 );

        VAR_20 = FUNC_1( VAR_19, VAR_6 );
        if ( VAR_20 ) {
            VAR_15->spec_id = VAR_20->attr_value.v.u16;
        } else {
            VAR_17 = VAR_9;
        }

        VAR_20 = FUNC_1( VAR_19, VAR_7 );
        if ( VAR_20 ) {
            VAR_15->rec.vendor = VAR_20->attr_value.v.u16;
        } else {
            VAR_17 = VAR_9;
        }

        VAR_20 = FUNC_1( VAR_19, VAR_8 );
        if ( VAR_20 ) {
            VAR_15->rec.vendor_id_source = VAR_20->attr_value.v.u16;
        } else {
            VAR_17 = VAR_9;
        }

        VAR_20 = FUNC_1( VAR_19, VAR_3 );
        if ( VAR_20 ) {
            VAR_15->rec.product = VAR_20->attr_value.v.u16;
        } else {
            VAR_17 = VAR_9;
        }

        VAR_20 = FUNC_1( VAR_19, VAR_4 );
        if ( VAR_20 ) {
            VAR_15->rec.version = VAR_20->attr_value.v.u16;
        } else {
            VAR_17 = VAR_9;
        }

        VAR_20 = FUNC_1( VAR_19, VAR_2 );
        if ( VAR_20 ) {
            VAR_15->rec.primary_record = (BOOLEAN)VAR_20->attr_value.v.u8;
        } else {
            VAR_17 = VAR_9;
        }
    }

    return VAR_17;



}
