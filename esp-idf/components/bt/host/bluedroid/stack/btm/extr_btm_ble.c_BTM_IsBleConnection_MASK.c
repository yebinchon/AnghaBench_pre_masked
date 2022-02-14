
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ transport; } ;
typedef TYPE_1__ tACL_CONN ;
typedef size_t UINT8 ;
typedef int UINT16 ;
struct TYPE_4__ {TYPE_1__* acl_db; } ;
typedef int BOOLEAN ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 TYPE_2__ VAR_3 ;
 size_t FUNC_1 (int ) ;

BOOLEAN FUNC_2 (UINT16 VAR_4)
{

    UINT8 VAR_5;
    tACL_CONN *VAR_6;

    FUNC_0 ("BTM_IsBleConnection: conn_handle: %d", VAR_4);

    VAR_5 = FUNC_1 (VAR_4);
    if (VAR_5 >= VAR_2) {
        return VAR_1;
    }

    VAR_6 = &VAR_3.acl_db[VAR_5];

    return (VAR_6->transport == VAR_0);



}
