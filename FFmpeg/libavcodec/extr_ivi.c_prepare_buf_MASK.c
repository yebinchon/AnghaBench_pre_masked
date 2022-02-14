
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int luma_bands; } ;
struct TYPE_8__ {TYPE_1__ pic_conf; } ;
struct TYPE_7__ {void** bufs; int bufsize; } ;
typedef TYPE_2__ IVIBandDesc ;
typedef TYPE_3__ IVI45DecContext ;


 void* FUNC_0 (int) ;

__attribute__((used)) static void *FUNC_1(IVI45DecContext *VAR_0, IVIBandDesc *VAR_1, int VAR_2)
{
    if (VAR_0->pic_conf.luma_bands <= 1 && VAR_2 == 2)
        return ((void*)0);
    if (!VAR_1->bufs[VAR_2])
        VAR_1->bufs[VAR_2] = FUNC_0(2 * VAR_1->bufsize);
    return VAR_1->bufs[VAR_2];
}
