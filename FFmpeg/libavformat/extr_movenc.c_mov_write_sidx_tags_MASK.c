
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nb_streams; TYPE_1__* tracks; } ;
struct TYPE_5__ {int entry; } ;
typedef TYPE_1__ MOVTrack ;
typedef TYPE_2__ MOVMuxContext ;
typedef int AVIOContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*,int,int) ;

__attribute__((used)) static int FUNC_3(AVIOContext *VAR_0, MOVMuxContext *VAR_1,
                               int VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, VAR_6;
    AVIOContext *VAR_7;
    int VAR_8 = 0;
    for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {




        if (VAR_5 == 0) {
            if ((VAR_6 = FUNC_1(&VAR_7)) < 0)
                return VAR_6;
        } else {
            VAR_7 = VAR_0;
        }
        for (VAR_4 = 0; VAR_4 < VAR_1->nb_streams; VAR_4++) {
            MOVTrack *VAR_9 = &VAR_1->tracks[VAR_4];
            if (VAR_2 >= 0 && VAR_4 != VAR_2)
                continue;



            if (!VAR_9->entry && VAR_3 > 0)
                continue;
            VAR_8 -= FUNC_2(VAR_7, VAR_9, VAR_3,
                                             VAR_8);
        }
        if (VAR_5 == 0)
            VAR_8 = FUNC_0(VAR_7);
    }
    return 0;
}
