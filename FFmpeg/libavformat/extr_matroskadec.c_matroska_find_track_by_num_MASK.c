
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int nb_elem; TYPE_2__* elem; } ;
struct TYPE_8__ {int ctx; TYPE_1__ tracks; } ;
struct TYPE_7__ {int num; } ;
typedef TYPE_2__ MatroskaTrack ;
typedef TYPE_3__ MatroskaDemuxContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,int) ;

__attribute__((used)) static MatroskaTrack *FUNC_1(MatroskaDemuxContext *VAR_1,
                                                 int VAR_2)
{
    MatroskaTrack *VAR_3 = VAR_1->tracks.elem;
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_1->tracks.nb_elem; VAR_4++)
        if (VAR_3[VAR_4].num == VAR_2)
            return &VAR_3[VAR_4];

    FUNC_0(VAR_1->ctx, VAR_0, "Invalid track number %d\n", VAR_2);
    return ((void*)0);
}
