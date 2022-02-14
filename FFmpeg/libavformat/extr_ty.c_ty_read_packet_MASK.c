
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_11__ {scalar_t__ rec_size; int rec_type; } ;
typedef TYPE_1__ TyRecHdr ;
struct TYPE_13__ {int * pb; TYPE_2__* priv_data; } ;
struct TYPE_12__ {size_t cur_rec; size_t num_recs; scalar_t__ cur_chunk_pos; TYPE_1__* rec_hdrs; scalar_t__ first_chunk; } ;
typedef TYPE_2__ TYDemuxContext ;
typedef int AVPacket ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;



 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_3__*,char*,int) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_3, AVPacket *VAR_4)
{
    TYDemuxContext *VAR_5 = VAR_3->priv_data;
    AVIOContext *VAR_6 = VAR_3->pb;
    TyRecHdr *VAR_7;
    int64_t VAR_8 = 0;
    int VAR_9 = 0;

    if (FUNC_0(VAR_6))
        return VAR_0;

    while (VAR_9 <= 0) {
        if (!VAR_5->rec_hdrs || VAR_5->first_chunk || VAR_5->cur_rec >= VAR_5->num_recs) {
            if (FUNC_4(VAR_3) < 0 || VAR_5->num_recs <= 0)
                return VAR_0;
        }

        VAR_7 = &VAR_5->rec_hdrs[VAR_5->cur_rec];
        VAR_8 = VAR_7->rec_size;
        VAR_5->cur_rec++;

        if (VAR_8 <= 0)
            continue;

        if (VAR_5->cur_chunk_pos + VAR_7->rec_size > VAR_2)
            return VAR_1;

        if (FUNC_0(VAR_6))
            return VAR_0;

        switch (VAR_7->rec_type) {
        case 128:
            VAR_9 = FUNC_2(VAR_3, VAR_7, VAR_4);
            break;
        case 129:
            VAR_9 = FUNC_1(VAR_3, VAR_7, VAR_4);
            break;
        default:
            FUNC_3(VAR_3, "Invalid record type 0x%02x\n", VAR_7->rec_type);
        case 0x01:
        case 0x02:
        case 0x03:
        case 0x05:
            VAR_5->cur_chunk_pos += VAR_7->rec_size;
            break;
        }
    }

    return 0;
}
