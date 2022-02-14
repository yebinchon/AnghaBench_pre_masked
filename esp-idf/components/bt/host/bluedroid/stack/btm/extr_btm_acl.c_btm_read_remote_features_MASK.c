
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int peer_lmp_features; scalar_t__ num_read_pages; } ;
typedef TYPE_1__ tACL_CONN ;
typedef size_t UINT8 ;
typedef int UINT16 ;
struct TYPE_4__ {TYPE_1__* acl_db; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 size_t VAR_0 ;
 TYPE_2__ VAR_1 ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;

void FUNC_5 (UINT16 VAR_2)
{
    UINT8 VAR_3;
    tACL_CONN *VAR_4;

    FUNC_0("btm_read_remote_features() handle: %d\n", VAR_2);

    if ((VAR_3 = FUNC_2(VAR_2)) >= VAR_0) {
        FUNC_1("btm_read_remote_features handle=%d invalid\n", VAR_2);
        return;
    }

    VAR_4 = &VAR_1.acl_db[VAR_3];
    VAR_4->num_read_pages = 0;
    FUNC_4 (VAR_4->peer_lmp_features, 0, sizeof(VAR_4->peer_lmp_features));



    FUNC_3 (VAR_2);
}
