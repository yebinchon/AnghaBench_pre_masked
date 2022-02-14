
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * peer_lmp_features; } ;
typedef TYPE_1__ tACL_CONN ;
typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_8__ {TYPE_1__* acl_db; } ;
struct TYPE_7__ {scalar_t__ (* supports_reading_remote_extended_features ) () ;} ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,scalar_t__*,int ) ;
 int FUNC_4 (scalar_t__,scalar_t__*) ;
 int FUNC_5 (scalar_t__,scalar_t__*) ;
 TYPE_5__ VAR_5 ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (scalar_t__,int ) ;
 TYPE_2__* FUNC_10 () ;
 scalar_t__ FUNC_11 () ;

void FUNC_12 (UINT8 *VAR_6)
{
    tACL_CONN *VAR_7;
    UINT8 VAR_8;
    UINT16 VAR_9;
    UINT8 VAR_10;

    FUNC_0 ("btm_read_remote_features_complete\n");
    FUNC_5 (VAR_8, VAR_6);

    if (VAR_8 != VAR_3) {
        FUNC_1 ("btm_read_remote_features_complete failed (status 0x%02x)\n", VAR_8);
        return;
    }

    FUNC_4 (VAR_9, VAR_6);

    if ((VAR_10 = FUNC_7(VAR_9)) >= VAR_4) {
        FUNC_1("btm_read_remote_features_complete handle=%d invalid\n", VAR_9);
        return;
    }

    VAR_7 = &VAR_5.acl_db[VAR_10];


    FUNC_3(VAR_7->peer_lmp_features[VAR_0], VAR_6,
                    VAR_2);

    if ((FUNC_2(VAR_7->peer_lmp_features[VAR_0])) &&
            (FUNC_10()->supports_reading_remote_extended_features())) {



        FUNC_0 ("Start reading remote extended features\n");
        FUNC_9(VAR_9, VAR_1);
        return;
    }



    FUNC_8 (VAR_7, 1);


    FUNC_6 (VAR_7);
}
