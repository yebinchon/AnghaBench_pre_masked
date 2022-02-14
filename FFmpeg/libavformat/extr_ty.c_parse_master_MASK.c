
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int TySeqTable ;
struct TYPE_9__ {int chunk_bitmask; int timestamp; } ;
struct TYPE_8__ {TYPE_1__* priv_data; } ;
struct TYPE_7__ {unsigned int seq_table_size; int cur_chunk_pos; scalar_t__ chunk; TYPE_5__* seq_table; } ;
typedef TYPE_1__ TYDemuxContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 TYPE_5__* FUNC_2 (unsigned int,int) ;
 int FUNC_3 (TYPE_5__**) ;
 int FUNC_4 (TYPE_2__*,int ,char*) ;
 int FUNC_5 (int ,scalar_t__,unsigned int) ;

__attribute__((used)) static void FUNC_6(AVFormatContext *VAR_2)
{
    TYDemuxContext *VAR_3 = VAR_2->priv_data;
    unsigned VAR_4;
    unsigned VAR_5, VAR_6;
    FUNC_3(&VAR_3->seq_table);



    VAR_4 = FUNC_0(VAR_3->chunk + 20);
    VAR_5 = FUNC_0(VAR_3->chunk + 28);

    VAR_3->seq_table_size = VAR_5 / (8LL + VAR_4);

    if (VAR_3->seq_table_size == 0) {
        VAR_3->seq_table = ((void*)0);
        return;
    }


    VAR_3->seq_table = FUNC_2(VAR_3->seq_table_size, sizeof(TySeqTable));
    if (VAR_3->seq_table == ((void*)0)) {
        VAR_3->seq_table_size = 0;
        return;
    }

    VAR_3->cur_chunk_pos = 32;
    for (VAR_6 = 0; VAR_6 < VAR_3->seq_table_size; VAR_6++) {
        if (VAR_3->cur_chunk_pos >= VAR_1 - 8)
            return;
        VAR_3->seq_table[VAR_6].timestamp = FUNC_1(VAR_3->chunk + VAR_3->cur_chunk_pos);
        VAR_3->cur_chunk_pos += 8;
        if (VAR_4 > 8) {
            FUNC_4(VAR_2, VAR_0, "Unsupported SEQ bitmap size in master chunk.\n");
            VAR_3->cur_chunk_pos += VAR_4;
        } else {
            FUNC_5(VAR_3->seq_table[VAR_6].chunk_bitmask, VAR_3->chunk + VAR_3->cur_chunk_pos, VAR_4);
        }
    }
}
