
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int nb_index; scalar_t__ last_chunk_pos; scalar_t__ first_index_pos; TYPE_2__* index; } ;
typedef TYPE_1__ WtvContext ;
struct TYPE_8__ {int serial; int stream_id; int pos; int guid; } ;
typedef TYPE_2__ WtvChunkEntry ;
struct TYPE_9__ {TYPE_1__* priv_data; int * pb; } ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int *,int) ;

__attribute__((used)) static void FUNC_5(AVFormatContext *VAR_1)
{
    AVIOContext *VAR_2 = VAR_1->pb;
    WtvContext *VAR_3 = VAR_1->priv_data;
    int VAR_4;

    FUNC_4(VAR_1, &VAR_0, 0x80000000);
    FUNC_0(VAR_2, 0);
    FUNC_0(VAR_2, 0);

    for (VAR_4 = 0; VAR_4 < VAR_3->nb_index; VAR_4++) {
        WtvChunkEntry *VAR_5 = VAR_3->index + VAR_4;
        FUNC_2(VAR_2, VAR_5->guid);
        FUNC_1(VAR_2, VAR_5->pos);
        FUNC_0(VAR_2, VAR_5->stream_id);
        FUNC_0(VAR_2, 0);
        FUNC_1(VAR_2, VAR_5->serial);
    }
    VAR_3->nb_index = 0;
    FUNC_3(VAR_1);

    if (!VAR_3->first_index_pos)
        VAR_3->first_index_pos = VAR_3->last_chunk_pos;
}
