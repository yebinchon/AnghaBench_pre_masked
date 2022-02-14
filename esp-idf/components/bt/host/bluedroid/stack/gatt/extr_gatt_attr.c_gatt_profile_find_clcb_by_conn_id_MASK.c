
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ conn_id; scalar_t__ in_use; } ;
typedef TYPE_1__ tGATT_PROFILE_CLCB ;
typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_5__ {TYPE_1__* profile_clcb; } ;


 scalar_t__ VAR_0 ;
 TYPE_3__ VAR_1 ;

__attribute__((used)) static tGATT_PROFILE_CLCB *FUNC_0(UINT16 VAR_2)
{
    UINT8 VAR_3;
    tGATT_PROFILE_CLCB *VAR_4 = ((void*)0);

    for (VAR_3 = 0, VAR_4 = VAR_1.profile_clcb; VAR_3 < VAR_0; VAR_3++, VAR_4++) {
        if (VAR_4->in_use && VAR_4->conn_id == VAR_2) {
            return VAR_4;
        }
    }

    return ((void*)0);
}
