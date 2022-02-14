
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ int64_t ;
struct TYPE_6__ {unsigned int n_sb_blocks; TYPE_5__* sb_blocks; void* sb_entries; } ;
typedef TYPE_1__ VividasDemuxContext ;
typedef int VIV_SB_entry ;
typedef int VIV_SB_block ;
struct TYPE_8__ {scalar_t__ size; scalar_t__ n_packets; scalar_t__ packet_offset; scalar_t__ byte_offset; } ;
struct TYPE_7__ {int pb; } ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_5__**) ;
 int * FUNC_4 (int *,unsigned int,int ,int *,int *,int *,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 void* FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(VividasDemuxContext *VAR_3, AVFormatContext *VAR_4, uint8_t *VAR_5, unsigned VAR_6)
{
    int64_t VAR_7;
    int64_t VAR_8;
    int VAR_9=0;
    AVIOContext *VAR_10;
    int VAR_11;
    int64_t VAR_12 = FUNC_6(VAR_4->pb);

    VAR_10 = FUNC_4(VAR_5, VAR_6, 0, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    if (!VAR_10)
        return FUNC_0(VAR_1);

    FUNC_7(VAR_10);
    FUNC_5(VAR_10);
    VAR_3->n_sb_blocks = FUNC_7(VAR_10);
    if (VAR_3->n_sb_blocks < 0 || VAR_3->n_sb_blocks > VAR_6 / 2)
        goto error;
    VAR_3->sb_blocks = FUNC_1(VAR_3->n_sb_blocks, sizeof(VIV_SB_block));
    if (!VAR_3->sb_blocks) {
        VAR_3->n_sb_blocks = 0;
        FUNC_2(VAR_10);
        return FUNC_0(VAR_1);
    }

    VAR_7 = 0;
    VAR_8 = 0;

    for (VAR_11 = 0; VAR_11 < VAR_3->n_sb_blocks; VAR_11++) {
        uint64_t VAR_13 = FUNC_7(VAR_10);
        uint64_t VAR_14 = FUNC_7(VAR_10);

        if (VAR_13 > VAR_2 || VAR_14 > VAR_2)
            goto error;

        VAR_3->sb_blocks[VAR_11].byte_offset = VAR_7;
        VAR_3->sb_blocks[VAR_11].packet_offset = VAR_8;

        VAR_3->sb_blocks[VAR_11].size = VAR_13;
        VAR_3->sb_blocks[VAR_11].n_packets = VAR_14;

        VAR_7 += VAR_3->sb_blocks[VAR_11].size;
        VAR_8 += VAR_3->sb_blocks[VAR_11].n_packets;

        if (VAR_9 < VAR_3->sb_blocks[VAR_11].n_packets)
            VAR_9 = VAR_3->sb_blocks[VAR_11].n_packets;
    }

    if (VAR_12 > 0 && VAR_8 > VAR_12)
        goto error;

    VAR_3->sb_entries = FUNC_1(VAR_9, sizeof(VIV_SB_entry));
    FUNC_2(VAR_10);

    return 0;
error:
    FUNC_2(VAR_10);
    VAR_3->n_sb_blocks = 0;
    FUNC_3(&VAR_3->sb_blocks);
    return VAR_0;
}
