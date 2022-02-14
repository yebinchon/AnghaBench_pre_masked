
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UID ;
struct TYPE_3__ {int profile; int level; } ;
typedef TYPE_1__ AVCodecParameters ;


 int const* VAR_0 ;

__attribute__((used)) static const UID *FUNC_0(AVCodecParameters *VAR_1)
{
    int VAR_2 = 1;

    if (VAR_1->profile == 4) {
        if (VAR_1->level == 8)
            return &VAR_0[0+VAR_2];
        else if (VAR_1->level == 4)
            return &VAR_0[4+VAR_2];
        else if (VAR_1->level == 6)
            return &VAR_0[8+VAR_2];
    } else if (VAR_1->profile == 0) {
        if (VAR_1->level == 5)
            return &VAR_0[2+VAR_2];
        else if (VAR_1->level == 2)
            return &VAR_0[6+VAR_2];
    }
    return ((void*)0);
}
