
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int profile_idc; int cpb_br_nal_factor; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_1(int VAR_1)
{
    int VAR_2;
    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
        if (VAR_0[VAR_2].profile_idc == VAR_1)
            return VAR_0[VAR_2].cpb_br_nal_factor;
    }

    return 1200;
}
