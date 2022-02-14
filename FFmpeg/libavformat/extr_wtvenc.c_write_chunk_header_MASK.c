
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ff_asf_guid ;
struct TYPE_5__ {int nb_index; int serial; scalar_t__ last_chunk_pos; TYPE_2__* index; scalar_t__ timeline_start_pos; } ;
typedef TYPE_1__ WtvContext ;
struct TYPE_6__ {int stream_id; int const* guid; int serial; scalar_t__ pos; } ;
typedef TYPE_2__ WtvChunkEntry ;
struct TYPE_7__ {int * pb; TYPE_1__* priv_data; } ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 int const VAR_1 ;
 int FUNC_4 (int *,int const*) ;

__attribute__((used)) static void FUNC_5(AVFormatContext *VAR_2, const ff_asf_guid *VAR_3, int VAR_4, int VAR_5)
{
    WtvContext *VAR_6 = VAR_2->priv_data;
    AVIOContext *VAR_7 = VAR_2->pb;

    VAR_6->last_chunk_pos = FUNC_1(VAR_7) - VAR_6->timeline_start_pos;
    FUNC_4(VAR_7, VAR_3);
    FUNC_2(VAR_7, 32 + VAR_4);
    FUNC_2(VAR_7, VAR_5);
    FUNC_3(VAR_7, VAR_6->serial);

    if ((VAR_5 & 0x80000000) && VAR_3 != &VAR_1) {
        WtvChunkEntry *VAR_8 = VAR_6->index + VAR_6->nb_index;
        FUNC_0(VAR_6->nb_index < VAR_0);
        VAR_8->pos = VAR_6->last_chunk_pos;
        VAR_8->serial = VAR_6->serial;
        VAR_8->guid = VAR_3;
        VAR_8->stream_id = VAR_5 & 0x3FFFFFFF;
        VAR_6->nb_index++;
    }
}
