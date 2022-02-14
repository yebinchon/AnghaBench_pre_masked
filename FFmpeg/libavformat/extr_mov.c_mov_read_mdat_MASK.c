
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ size; } ;
struct TYPE_5__ {int found_mdat; } ;
typedef TYPE_1__ MOVContext ;
typedef TYPE_2__ MOVAtom ;
typedef int AVIOContext ;



__attribute__((used)) static int FUNC_0(MOVContext *VAR_0, AVIOContext *VAR_1, MOVAtom VAR_2)
{
    if (VAR_2.size == 0)
        return 0;
    VAR_0->found_mdat=1;
    return 0;
}
