
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_2__ {scalar_t__* btm_scn; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;

UINT8 FUNC_1(void)
{
    UINT8 VAR_3;
    FUNC_0 ("BTM_AllocateSCN\n");
    for (VAR_3 = 1; VAR_3 < VAR_0; VAR_3++) {
        if (!VAR_2.btm_scn[VAR_3 - 1]) {
            VAR_2.btm_scn[VAR_3 - 1] = VAR_1;
            return VAR_3;
        }
    }
    return (0);
}
