
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {int track_id; int nb_frag_info; scalar_t__ data_offset; TYPE_1__* frag_info; } ;
struct TYPE_4__ {scalar_t__ offset; scalar_t__ time; } ;
typedef TYPE_2__ MOVTrack ;
typedef int AVIOContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(AVIOContext *VAR_0, MOVTrack *VAR_1)
{
    int64_t VAR_2 = FUNC_0(VAR_0);
    int VAR_3;

    FUNC_3(VAR_0, 0);
    FUNC_5(VAR_0, "tfra");
    FUNC_1(VAR_0, 1);
    FUNC_2(VAR_0, 0);

    FUNC_3(VAR_0, VAR_1->track_id);
    FUNC_3(VAR_0, 0);
    FUNC_3(VAR_0, VAR_1->nb_frag_info);
    for (VAR_3 = 0; VAR_3 < VAR_1->nb_frag_info; VAR_3++) {
        FUNC_4(VAR_0, VAR_1->frag_info[VAR_3].time);
        FUNC_4(VAR_0, VAR_1->frag_info[VAR_3].offset + VAR_1->data_offset);
        FUNC_1(VAR_0, 1);
        FUNC_1(VAR_0, 1);
        FUNC_1(VAR_0, 1);
    }

    return FUNC_6(VAR_0, VAR_2);
}
