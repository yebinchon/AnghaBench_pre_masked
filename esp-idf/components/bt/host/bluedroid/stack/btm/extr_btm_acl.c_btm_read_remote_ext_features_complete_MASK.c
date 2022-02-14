
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * peer_lmp_features; } ;
typedef TYPE_1__ tACL_CONN ;
typedef size_t UINT8 ;
typedef size_t UINT16 ;
struct TYPE_6__ {TYPE_1__* acl_db; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,size_t) ;
 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (int ,size_t*,int ) ;
 int FUNC_3 (size_t,size_t*) ;
 int FUNC_4 (size_t,size_t*) ;
 TYPE_4__ VAR_3 ;
 int FUNC_5 (TYPE_1__*) ;
 size_t FUNC_6 (size_t) ;
 int FUNC_7 (TYPE_1__*,size_t) ;
 int FUNC_8 (size_t,size_t) ;

void FUNC_9 (UINT8 *VAR_4)
{
    tACL_CONN *VAR_5;
    UINT8 VAR_6, VAR_7;
    UINT16 VAR_8;
    UINT8 VAR_9;

    FUNC_0 ("btm_read_remote_ext_features_complete\n");

    ++VAR_4;
    FUNC_3 (VAR_8, VAR_4);
    FUNC_4 (VAR_6, VAR_4);
    FUNC_4 (VAR_7, VAR_4);


    if ((VAR_9 = FUNC_6(VAR_8)) >= VAR_2) {
        FUNC_1("btm_read_remote_ext_features_complete handle=%d invalid\n", VAR_8);
        return;
    }

    if (VAR_7 > VAR_0) {
        FUNC_1("btm_read_remote_ext_features_complete page=%d unknown", VAR_7);
        return;
    }

    VAR_5 = &VAR_3.acl_db[VAR_9];


    FUNC_2(VAR_5->peer_lmp_features[VAR_6], VAR_4, VAR_1);



    if ((VAR_6 < VAR_7) && (VAR_6 < VAR_0)) {
        VAR_6++;
        FUNC_0("BTM reads next remote extended features page (%d)\n", VAR_6);
        FUNC_8 (VAR_8, VAR_6);
        return;
    }


    FUNC_0("BTM reached last remote extended features page (%d)\n", VAR_6);


    FUNC_7 (VAR_5, (UINT8) (VAR_6 + 1));


    FUNC_5 (VAR_5);
}
