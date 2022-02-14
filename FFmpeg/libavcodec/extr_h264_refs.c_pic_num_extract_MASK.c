
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int picture_structure; } ;
typedef TYPE_1__ H264Context ;


 scalar_t__ FUNC_0 (TYPE_1__ const*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(const H264Context *VAR_1, int VAR_2, int *VAR_3)
{
    *VAR_3 = VAR_1->picture_structure;
    if (FUNC_0(VAR_1)) {
        if (!(VAR_2 & 1))

            *VAR_3 ^= VAR_0;
        VAR_2 >>= 1;
    }

    return VAR_2;
}
