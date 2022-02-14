
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nb_index_entries; int * stream_offset_entries; void** flag_entries; void** temporal_offset_entries; } ;
typedef TYPE_1__ MXFIndexTableSegment ;
typedef int AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (void***) ;
 scalar_t__ FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static int FUNC_8(AVIOContext *VAR_2, MXFIndexTableSegment *VAR_3)
{
    int VAR_4, VAR_5;

    VAR_3->nb_index_entries = FUNC_5(VAR_2);

    VAR_5 = FUNC_5(VAR_2);
    if(VAR_3->nb_index_entries && VAR_5 < 11)
        return VAR_0;

    if (!(VAR_3->temporal_offset_entries=FUNC_1(VAR_3->nb_index_entries, sizeof(*VAR_3->temporal_offset_entries))) ||
        !(VAR_3->flag_entries = FUNC_1(VAR_3->nb_index_entries, sizeof(*VAR_3->flag_entries))) ||
        !(VAR_3->stream_offset_entries = FUNC_1(VAR_3->nb_index_entries, sizeof(*VAR_3->stream_offset_entries)))) {
        FUNC_2(&VAR_3->temporal_offset_entries);
        FUNC_2(&VAR_3->flag_entries);
        return FUNC_0(VAR_1);
    }

    for (VAR_4 = 0; VAR_4 < VAR_3->nb_index_entries; VAR_4++) {
        if(FUNC_3(VAR_2))
            return VAR_0;
        VAR_3->temporal_offset_entries[VAR_4] = FUNC_4(VAR_2);
        FUNC_4(VAR_2);
        VAR_3->flag_entries[VAR_4] = FUNC_4(VAR_2);
        VAR_3->stream_offset_entries[VAR_4] = FUNC_6(VAR_2);
        FUNC_7(VAR_2, VAR_5 - 11);
    }
    return 0;
}
