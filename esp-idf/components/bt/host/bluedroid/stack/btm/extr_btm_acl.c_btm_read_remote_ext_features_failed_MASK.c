
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tACL_CONN ;
typedef size_t UINT8 ;
typedef int UINT16 ;
struct TYPE_2__ {int * acl_db; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,size_t,int ) ;
 size_t VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int *,int) ;

void FUNC_5 (UINT8 VAR_2, UINT16 VAR_3)
{
    tACL_CONN *VAR_4;
    UINT8 VAR_5;

    FUNC_1 ("btm_read_remote_ext_features_failed (status 0x%02x) for handle %d\n",
                       VAR_2, VAR_3);

    if ((VAR_5 = FUNC_3(VAR_3)) >= VAR_0) {
        FUNC_0("btm_read_remote_ext_features_failed handle=%d invalid\n", VAR_3);
        return;
    }

    VAR_4 = &VAR_1.acl_db[VAR_5];


    FUNC_4 (VAR_4, 1);


    FUNC_2 (VAR_4);
}
