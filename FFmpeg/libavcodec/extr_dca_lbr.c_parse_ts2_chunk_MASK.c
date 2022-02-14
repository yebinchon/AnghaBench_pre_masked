
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int min_mono_subband; int nsubbands; int max_mono_subband; int gb; } ;
struct TYPE_8__ {int len; int data; } ;
typedef TYPE_1__ LBRChunk ;
typedef TYPE_2__ DCALbrDecoder ;


 scalar_t__ FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int,int,int,int,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int,int,int,int ,int) ;

__attribute__((used)) static int FUNC_4(DCALbrDecoder *VAR_0, LBRChunk *VAR_1, int VAR_2, int VAR_3)
{
    if (!VAR_1->len)
        return 0;
    if (FUNC_0(&VAR_0->gb, VAR_1->data, VAR_1->len) < 0)
        return -1;
    if (FUNC_2(VAR_0, VAR_2, VAR_3, 1, 3, 0) < 0)
        return -1;
    if (FUNC_3(VAR_0, VAR_2, VAR_3, 6, VAR_0->max_mono_subband, 0) < 0)
        return -1;
    if (VAR_2 != VAR_3) {
        if (FUNC_1(VAR_0, VAR_3) < 0)
            return -1;
        if (FUNC_2(VAR_0, VAR_2, VAR_3, 0, 3, 1) < 0)
            return -1;
    }
    if (FUNC_3(VAR_0, VAR_2, VAR_3, VAR_0->min_mono_subband, VAR_0->nsubbands, 1) < 0)
        return -1;
    return 0;
}
