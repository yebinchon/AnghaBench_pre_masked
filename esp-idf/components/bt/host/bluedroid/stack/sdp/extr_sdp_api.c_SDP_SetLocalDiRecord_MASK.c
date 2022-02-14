
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ primary_record; char* client_executable_url; char* service_description; char* documentation_url; scalar_t__ vendor; scalar_t__ product; scalar_t__ version; scalar_t__ vendor_id_source; } ;
typedef TYPE_2__ tSDP_DI_RECORD ;
typedef int di_specid ;
typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT32 ;
typedef scalar_t__ UINT16 ;
struct TYPE_5__ {scalar_t__ di_primary_handle; } ;
struct TYPE_7__ {TYPE_1__ server_db; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ,int,scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__,int,scalar_t__*) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_4 (scalar_t__*,scalar_t__) ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 TYPE_3__ VAR_22 ;
 scalar_t__ FUNC_5 (char*) ;

UINT16 FUNC_6( tSDP_DI_RECORD *VAR_23, UINT32 *VAR_24 )
{

    UINT16 VAR_25 = VAR_16;
    UINT32 VAR_26;
    UINT16 VAR_27 = VAR_21;
    UINT16 VAR_28 = VAR_9;
    UINT8 VAR_29[2];
    UINT8 *VAR_30;
    UINT8 VAR_31;

    *VAR_24 = 0;
    if ( VAR_23 == ((void*)0) ) {
        return VAR_13;
    }


    if ( VAR_23->primary_record == VAR_18 && VAR_22.server_db.di_primary_handle ) {
        VAR_26 = VAR_22.server_db.di_primary_handle;
    } else {
        if ( (VAR_26 = FUNC_2()) == 0 ) {
            return VAR_15;
        }
    }

    *VAR_24 = VAR_26;



    if ((FUNC_1(VAR_26, 1, &VAR_27)) == VAR_11) {
        VAR_25 = VAR_12;
    }


    if ( VAR_25 == VAR_16) {
        VAR_30 = VAR_29;
        FUNC_4(VAR_30, VAR_28);
        if ( !(FUNC_0(VAR_26, VAR_6,
                                VAR_19, sizeof(VAR_28),
                                VAR_29)) ) {
            VAR_25 = VAR_12;
        }
    }


    if ( VAR_25 == VAR_16 ) {
        if ( VAR_23->client_executable_url[0] != '\0' ) {
            if ( !((FUNC_5(VAR_23->client_executable_url) + 1 <= VAR_14) &&
                    FUNC_0(VAR_26, VAR_0, VAR_20,
                                     (UINT32)(FUNC_5(VAR_23->client_executable_url) + 1),
                                     (UINT8 *)VAR_23->client_executable_url)) ) {
                VAR_25 = VAR_12;
            }
        }
    }


    if ( VAR_25 == VAR_16 ) {
        if ( VAR_23->service_description[0] != '\0' ) {
            if ( !((FUNC_5(VAR_23->service_description) + 1 <= VAR_14) &&
                    FUNC_0(VAR_26, VAR_5,
                                     VAR_17,
                                     (UINT32)(FUNC_5(VAR_23->service_description) + 1),
                                     (UINT8 *)VAR_23->service_description)) ) {
                VAR_25 = VAR_12;
            }
        }
    }


    if ( VAR_25 == VAR_16 ) {
        if ( VAR_23->documentation_url[0] != '\0' ) {
            if ( !((FUNC_5(VAR_23->documentation_url) + 1 <= VAR_14) &&
                    FUNC_0(VAR_26, VAR_1, VAR_20,
                                     (UINT32)(FUNC_5(VAR_23->documentation_url) + 1),
                                     (UINT8 *)VAR_23->documentation_url)) ) {
                VAR_25 = VAR_12;
            }
        }
    }


    if ( VAR_25 == VAR_16) {
        VAR_30 = VAR_29;
        FUNC_4(VAR_30, VAR_23->vendor);
        if ( !(FUNC_0(VAR_26, VAR_7, VAR_19,
                                sizeof(VAR_23->vendor), VAR_29)) ) {
            VAR_25 = VAR_12;
        }
    }


    if ( VAR_25 == VAR_16) {
        VAR_30 = VAR_29;
        FUNC_4 (VAR_30, VAR_23->product);
        if ( !(FUNC_0(VAR_26, VAR_3,
                                VAR_19, sizeof(VAR_23->product), VAR_29)) ) {
            VAR_25 = VAR_12;
        }
    }


    if ( VAR_25 == VAR_16) {
        VAR_30 = VAR_29;
        FUNC_4 (VAR_30, VAR_23->version);
        if ( !(FUNC_0(VAR_26, VAR_4, VAR_19,
                                sizeof(VAR_23->version), VAR_29)) ) {
            VAR_25 = VAR_12;
        }
    }


    if ( VAR_25 == VAR_16) {
        VAR_31 = (UINT8)VAR_23->primary_record;
        if ( !(FUNC_0(VAR_26, VAR_2,
                                VAR_10, 1, &VAR_31)) ) {
            VAR_25 = VAR_12;
        }
    }


    if ( VAR_25 == VAR_16) {
        VAR_30 = VAR_29;
        FUNC_4(VAR_30, VAR_23->vendor_id_source);
        if ( !(FUNC_0(VAR_26, VAR_8, VAR_19,
                                sizeof(VAR_23->vendor_id_source), VAR_29)) ) {
            VAR_25 = VAR_12;
        }
    }

    if ( VAR_25 != VAR_16 ) {
        FUNC_3( VAR_26 );
    } else if (VAR_23->primary_record == VAR_18) {
        VAR_22.server_db.di_primary_handle = VAR_26;
    }

    return VAR_25;



}
