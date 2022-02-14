
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_2__ {scalar_t__* btm_scn; } ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;

BOOLEAN FUNC_0(UINT8 VAR_4)
{
    if (VAR_4 >= VAR_0) {
        return VAR_1;
    }


    if (!VAR_3.btm_scn[VAR_4 - 1]) {
        VAR_3.btm_scn[VAR_4 - 1] = VAR_2;
        return VAR_2;
    }

    return (VAR_1);
}
