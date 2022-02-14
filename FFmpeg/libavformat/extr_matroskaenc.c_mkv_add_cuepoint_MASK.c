
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t num_entries; scalar_t__ segment_offset; TYPE_2__* entries; } ;
typedef TYPE_1__ mkv_cues ;
struct TYPE_7__ {int stream_idx; int tracknum; scalar_t__ duration; scalar_t__ relative_pos; scalar_t__ cluster_pos; scalar_t__ pts; } ;
typedef TYPE_2__ mkv_cuepoint ;
typedef scalar_t__ int64_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (TYPE_2__*,size_t,int) ;

__attribute__((used)) static int FUNC_2(mkv_cues *VAR_1, int VAR_2, int VAR_3, int64_t VAR_4,
                            int64_t VAR_5, int64_t VAR_6, int64_t VAR_7)
{
    mkv_cuepoint *VAR_8 = VAR_1->entries;

    if (VAR_4 < 0)
        return 0;

    VAR_8 = FUNC_1(VAR_8, VAR_1->num_entries + 1, sizeof(mkv_cuepoint));
    if (!VAR_8)
        return FUNC_0(VAR_0);
    VAR_1->entries = VAR_8;

    VAR_1->entries[VAR_1->num_entries].pts = VAR_4;
    VAR_1->entries[VAR_1->num_entries].stream_idx = VAR_2;
    VAR_1->entries[VAR_1->num_entries].tracknum = VAR_3;
    VAR_1->entries[VAR_1->num_entries].cluster_pos = VAR_5 - VAR_1->segment_offset;
    VAR_1->entries[VAR_1->num_entries].relative_pos = VAR_6;
    VAR_1->entries[VAR_1->num_entries++].duration = VAR_7;

    return 0;
}
