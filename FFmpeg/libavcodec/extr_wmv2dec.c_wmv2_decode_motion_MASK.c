
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int gb; scalar_t__ mspel; } ;
struct TYPE_5__ {int hshift; TYPE_2__ s; } ;
typedef TYPE_1__ Wmv2Context ;
typedef TYPE_2__ MpegEncContext ;


 int FUNC_0 (TYPE_2__* const,int*,int*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline int FUNC_2(Wmv2Context *VAR_0, int *VAR_1, int *VAR_2)
{
    MpegEncContext *const VAR_3 = &VAR_0->s;
    int VAR_4;

    VAR_4 = FUNC_0(VAR_3, VAR_1, VAR_2);

    if (VAR_4 < 0)
        return VAR_4;

    if ((((*VAR_1) | (*VAR_2)) & 1) && VAR_3->mspel)
        VAR_0->hshift = FUNC_1(&VAR_3->gb);
    else
        VAR_0->hshift = 0;

    return 0;
}
