
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_8__ {int first_trun; int nb_streams; TYPE_1__* tracks; } ;
struct TYPE_7__ {int entry; } ;
typedef TYPE_1__ MOVTrack ;
typedef TYPE_2__ MOVMuxContext ;
typedef int AVIOContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (int *,TYPE_2__*,TYPE_1__*,int ,int) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(AVIOContext *VAR_0, MOVMuxContext *VAR_1,
                                       int VAR_2, int VAR_3)
{
    int64_t VAR_4 = FUNC_0(VAR_0);
    int VAR_5;

    FUNC_1(VAR_0, 0);
    FUNC_2(VAR_0, "moof");
    VAR_1->first_trun = 1;

    FUNC_3(VAR_0, VAR_1);
    for (VAR_5 = 0; VAR_5 < VAR_1->nb_streams; VAR_5++) {
        MOVTrack *VAR_6 = &VAR_1->tracks[VAR_5];
        if (VAR_2 >= 0 && VAR_5 != VAR_2)
            continue;
        if (!VAR_6->entry)
            continue;
        FUNC_4(VAR_0, VAR_1, VAR_6, VAR_4, VAR_3);
    }

    return FUNC_5(VAR_0, VAR_4);
}
