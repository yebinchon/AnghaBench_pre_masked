
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {int kfgshift; scalar_t__ isvp8; } ;
typedef TYPE_1__ OGGStreamContext ;



__attribute__((used)) static int64_t FUNC_0(OGGStreamContext *VAR_0, int64_t VAR_1)
{
    if (VAR_0->kfgshift)
        return (VAR_1>>VAR_0->kfgshift) +
            (VAR_1 & ((1<<VAR_0->kfgshift)-1));
    else if (VAR_0->isvp8)
        return VAR_1 >> 32;
    else
        return VAR_1;
}
