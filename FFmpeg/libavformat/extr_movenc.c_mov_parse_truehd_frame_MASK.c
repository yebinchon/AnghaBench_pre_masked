
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int size; scalar_t__ data; } ;
struct TYPE_7__ {size_t entry; int has_keyframes; TYPE_1__* cluster; } ;
struct TYPE_6__ {int flags; } ;
typedef TYPE_2__ MOVTrack ;
typedef TYPE_3__ AVPacket ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(AVPacket *VAR_1, MOVTrack *VAR_2)
{
    int VAR_3;

    if (VAR_1->size < 8)
        return;

    VAR_3 = (FUNC_0(VAR_1->data) & 0xFFF) * 2;
    if (VAR_3 < 8 || VAR_3 > VAR_1->size)
        return;

    if (FUNC_1(VAR_1->data + 4) == 0xF8726FBA) {
        VAR_2->cluster[VAR_2->entry].flags |= VAR_0;
        VAR_2->has_keyframes++;
    }

    return;
}
