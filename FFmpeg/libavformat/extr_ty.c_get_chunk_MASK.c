
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * pb; TYPE_1__* priv_data; } ;
struct TYPE_6__ {int cur_chunk; int* chunk; int num_recs; int seq_rec; int cur_chunk_pos; int rec_hdrs; scalar_t__ first_chunk; scalar_t__ cur_rec; } ;
typedef TYPE_1__ TYDemuxContext ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int*,int) ;
 int FUNC_5 (TYPE_2__*,char*,int) ;
 int FUNC_6 (int*,int) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_5)
{
    TYDemuxContext *VAR_6 = VAR_5->priv_data;
    AVIOContext *VAR_7 = VAR_5->pb;
    int VAR_8, VAR_9;

    FUNC_5(VAR_5, "parsing ty chunk #%d\n", VAR_6->cur_chunk);


    if (FUNC_3(VAR_7))
        return VAR_0;


    VAR_8 = FUNC_4(VAR_7, VAR_6->chunk, VAR_2);
    VAR_6->cur_chunk++;

    if ((VAR_8 < 4) || (FUNC_1(VAR_6->chunk) == 0)) {
        return VAR_0;
    }


    if (FUNC_1(VAR_6->chunk) == VAR_4) {
        FUNC_7(VAR_5);
        return FUNC_8(VAR_5);
    }


    if (VAR_6->chunk[3] & 0x80) {

        VAR_6->num_recs = VAR_9 = (VAR_6->chunk[1] << 8) + VAR_6->chunk[0];
        VAR_6->seq_rec = (VAR_6->chunk[3] << 8) + VAR_6->chunk[2];
        if (VAR_6->seq_rec != 0xffff) {
            VAR_6->seq_rec &= ~0x8000;
        }
    } else {

        VAR_6->num_recs = VAR_9 = VAR_6->chunk[0];
        VAR_6->seq_rec = VAR_6->chunk[1];
    }
    VAR_6->cur_rec = 0;
    VAR_6->first_chunk = 0;

    FUNC_5(VAR_5, "chunk has %d records\n", VAR_9);
    VAR_6->cur_chunk_pos = 4;

    FUNC_2(&VAR_6->rec_hdrs);

    if (VAR_9 * 16 >= VAR_2 - 4)
        return VAR_1;

    VAR_6->rec_hdrs = FUNC_6(VAR_6->chunk + 4, VAR_9);
    if (!VAR_6->rec_hdrs)
        return FUNC_0(VAR_3);
    VAR_6->cur_chunk_pos += 16 * VAR_9;

    return 0;
}
