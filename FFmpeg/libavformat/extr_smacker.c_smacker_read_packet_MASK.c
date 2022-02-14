
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* uint8_t ;
typedef long long uint32_t ;
struct TYPE_10__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_9__ {int* data; scalar_t__ stream_index; size_t pts; int size; } ;
struct TYPE_8__ {size_t cur_frame; size_t frames; int curstream; int nextpos; int* frm_size; int* frm_flags; void** pal; void*** bufs; long long* buf_sizes; scalar_t__* stream_id; scalar_t__* indexes; scalar_t__ videoindex; size_t* aud_pts; } ;
typedef TYPE_1__ SmackerContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (void**) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_3__*,int ,char*,...) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (void***,long long) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,void**,int) ;
 long long FUNC_8 (int ) ;
 int FUNC_9 (int ,int,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (void**,void**,int) ;
 void** VAR_7 ;

__attribute__((used)) static int FUNC_12(AVFormatContext *VAR_8, AVPacket *VAR_9)
{
    SmackerContext *VAR_10 = VAR_8->priv_data;
    int VAR_11;
    int VAR_12;
    int VAR_13;
    int VAR_14 = 0;
    int VAR_15 = 0;

    if (FUNC_5(VAR_8->pb) || VAR_10->cur_frame >= VAR_10->frames)
        return VAR_0;


    if(VAR_10->curstream < 0) {
        FUNC_9(VAR_8->pb, VAR_10->nextpos, 0);
        VAR_14 = VAR_10->frm_size[VAR_10->cur_frame] & (~3);
        VAR_11 = VAR_10->frm_flags[VAR_10->cur_frame];

        if(VAR_11 & VAR_6){
            int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
            uint8_t *VAR_22 = VAR_10->pal;
            uint8_t VAR_23[768];

            FUNC_11(VAR_23, VAR_22, 768);
            VAR_16 = FUNC_6(VAR_8->pb);
            VAR_16 = VAR_16 * 4 - 1;
            if(VAR_16 + 1 > VAR_14)
                return VAR_1;
            VAR_14 -= VAR_16;
            VAR_14--;
            VAR_17 = 0;
            VAR_21 = FUNC_10(VAR_8->pb) + VAR_16;
            while(VAR_17 < 256){
                VAR_18 = FUNC_6(VAR_8->pb);
                if(VAR_18 & 0x80){
                    VAR_17 += (VAR_18 & 0x7F) + 1;
                    VAR_22 += ((VAR_18 & 0x7F) + 1) * 3;
                } else if(VAR_18 & 0x40){
                    VAR_19 = FUNC_6(VAR_8->pb);
                    VAR_20 = (VAR_18 & 0x3F) + 1;
                    if (VAR_19 + VAR_20 > 0x100) {
                        FUNC_2(VAR_8, VAR_2,
                               "Invalid palette update, offset=%d length=%d extends beyond palette size\n",
                               VAR_19, VAR_20);
                        return VAR_1;
                    }
                    VAR_19 *= 3;
                    while(VAR_20-- && VAR_17 < 256) {
                        *VAR_22++ = VAR_23[VAR_19 + 0];
                        *VAR_22++ = VAR_23[VAR_19 + 1];
                        *VAR_22++ = VAR_23[VAR_19 + 2];
                        VAR_17++;
                        VAR_19 += 3;
                    }
                } else {
                    *VAR_22++ = VAR_7[VAR_18];
                    *VAR_22++ = VAR_7[FUNC_6(VAR_8->pb) & 0x3F];
                    *VAR_22++ = VAR_7[FUNC_6(VAR_8->pb) & 0x3F];
                    VAR_17++;
                }
            }
            FUNC_9(VAR_8->pb, VAR_21, 0);
            VAR_15 |= 1;
        }
        VAR_11 >>= 1;
        VAR_10->curstream = -1;

        for(VAR_13 = 0; VAR_13 < 7; VAR_13++) {
            if(VAR_11 & 1) {
                uint32_t VAR_24;
                int VAR_25;

                VAR_24 = FUNC_8(VAR_8->pb) - 4;
                if (!VAR_24 || VAR_24 + 4LL > VAR_14) {
                    FUNC_2(VAR_8, VAR_2, "Invalid audio part size\n");
                    return VAR_1;
                }
                VAR_14 -= VAR_24;
                VAR_14 -= 4;
                VAR_10->curstream++;
                if ((VAR_25 = FUNC_4(&VAR_10->bufs[VAR_10->curstream], VAR_24)) < 0) {
                    VAR_10->buf_sizes[VAR_10->curstream] = 0;
                    return VAR_25;
                }
                VAR_10->buf_sizes[VAR_10->curstream] = VAR_24;
                VAR_12 = FUNC_7(VAR_8->pb, VAR_10->bufs[VAR_10->curstream], VAR_24);
                if(VAR_12 != VAR_24)
                    return FUNC_0(VAR_3);
                VAR_10->stream_id[VAR_10->curstream] = VAR_10->indexes[VAR_13];
            }
            VAR_11 >>= 1;
        }
        if (VAR_14 < 0 || VAR_14 >= VAR_5/2)
            return VAR_1;
        if (FUNC_3(VAR_9, VAR_14 + 769))
            return FUNC_0(VAR_4);
        if(VAR_10->frm_size[VAR_10->cur_frame] & 1)
            VAR_15 |= 2;
        VAR_9->data[0] = VAR_15;
        FUNC_11(VAR_9->data + 1, VAR_10->pal, 768);
        VAR_12 = FUNC_7(VAR_8->pb, VAR_9->data + 769, VAR_14);
        if(VAR_12 != VAR_14)
            return FUNC_0(VAR_3);
        VAR_9->stream_index = VAR_10->videoindex;
        VAR_9->pts = VAR_10->cur_frame;
        VAR_9->size = VAR_12 + 769;
        VAR_10->cur_frame++;
        VAR_10->nextpos = FUNC_10(VAR_8->pb);
    } else {
        if (VAR_10->stream_id[VAR_10->curstream] < 0 || !VAR_10->bufs[VAR_10->curstream])
            return VAR_1;
        if (FUNC_3(VAR_9, VAR_10->buf_sizes[VAR_10->curstream]))
            return FUNC_0(VAR_4);
        FUNC_11(VAR_9->data, VAR_10->bufs[VAR_10->curstream], VAR_10->buf_sizes[VAR_10->curstream]);
        VAR_9->size = VAR_10->buf_sizes[VAR_10->curstream];
        VAR_9->stream_index = VAR_10->stream_id[VAR_10->curstream];
        VAR_9->pts = VAR_10->aud_pts[VAR_10->curstream];
        VAR_10->aud_pts[VAR_10->curstream] += FUNC_1(VAR_9->data);
        VAR_10->curstream--;
    }

    return 0;
}
