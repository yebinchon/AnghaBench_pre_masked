
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_6__ {int flags; int nb_streams; TYPE_1__* tracks; } ;
struct TYPE_5__ {scalar_t__ nb_frag_info; } ;
typedef TYPE_1__ MOVTrack ;
typedef TYPE_2__ MOVMuxContext ;
typedef int AVIOContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(AVIOContext *VAR_1, MOVMuxContext *VAR_2)
{
    int64_t VAR_3 = FUNC_0(VAR_1);
    int VAR_4;

    FUNC_1(VAR_1, 0);
    FUNC_2(VAR_1, "mfra");


    if (VAR_2->flags & VAR_0)
        return FUNC_4(VAR_1, VAR_3);

    for (VAR_4 = 0; VAR_4 < VAR_2->nb_streams; VAR_4++) {
        MOVTrack *VAR_5 = &VAR_2->tracks[VAR_4];
        if (VAR_5->nb_frag_info)
            FUNC_3(VAR_1, VAR_5);
    }

    FUNC_1(VAR_1, 16);
    FUNC_2(VAR_1, "mfro");
    FUNC_1(VAR_1, 0);
    FUNC_1(VAR_1, FUNC_0(VAR_1) + 4 - VAR_3);

    return FUNC_4(VAR_1, VAR_3);
}
