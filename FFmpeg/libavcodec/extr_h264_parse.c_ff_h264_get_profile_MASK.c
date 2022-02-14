
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int profile_idc; int constraint_set_flags; } ;
typedef TYPE_1__ SPS ;



 int VAR_0 ;



 int VAR_1 ;

int FUNC_0(const SPS *VAR_2)
{
    int VAR_3 = VAR_2->profile_idc;

    switch (VAR_2->profile_idc) {
    case 131:

        VAR_3 |= (VAR_2->constraint_set_flags & 1 << 1) ? VAR_0 : 0;
        break;
    case 130:
    case 129:
    case 128:

        VAR_3 |= (VAR_2->constraint_set_flags & 1 << 3) ? VAR_1 : 0;
        break;
    }

    return VAR_3;
}
