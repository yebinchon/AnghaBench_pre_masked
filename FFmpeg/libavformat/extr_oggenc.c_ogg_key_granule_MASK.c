
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {int kfgshift; scalar_t__ isvp8; } ;
typedef TYPE_1__ OGGStreamContext ;



__attribute__((used)) static int FUNC_0(OGGStreamContext *VAR_0, int64_t VAR_1)
{
    return (VAR_0->kfgshift && !(VAR_1 & ((1<<VAR_0->kfgshift)-1))) ||
           (VAR_0->isvp8 && !((VAR_1 >> 3) & 0x07ffffff));
}
