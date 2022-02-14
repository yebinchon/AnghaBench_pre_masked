
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_13__ {int subrec_type; int rec_size; } ;
typedef TYPE_1__ TyRecHdr ;
struct TYPE_16__ {TYPE_2__* priv_data; } ;
struct TYPE_15__ {scalar_t__ pts; int stream_index; scalar_t__ size; int * data; } ;
struct TYPE_14__ {scalar_t__ pes_buf_cnt; int pes_length; scalar_t__ audio_type; scalar_t__ last_audio_pts; int pts_offset; scalar_t__ tivo_series; scalar_t__ ac3_pkt_size; scalar_t__ first_audio_pts; scalar_t__ cur_chunk_pos; scalar_t__ chunk; int * pes_buffer; } ;
typedef TYPE_2__ TYDemuxContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_3__*,int const) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*,int,int const) ;
 int FUNC_4 (TYPE_4__*,char*) ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (int ,int *,int) ;
 int FUNC_7 (int *,scalar_t__,int const) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_9, TyRecHdr *VAR_10, AVPacket *VAR_11)
{
    TYDemuxContext *VAR_12 = VAR_9->priv_data;
    const int VAR_13 = VAR_10->subrec_type;
    const int64_t VAR_14 = VAR_10->rec_size;
    int VAR_15;

    if (VAR_13 == 2) {
        int VAR_16 = 0;





        if (VAR_12->pes_buf_cnt > 0) {
            VAR_16 = VAR_12->pes_length - VAR_12->pes_buf_cnt;

            FUNC_4(VAR_9, "continuing PES header\n");

            if (VAR_16 >= VAR_14) {

                FUNC_7(VAR_12->pes_buffer + VAR_12->pes_buf_cnt, VAR_12->chunk + VAR_12->cur_chunk_pos, VAR_14);
                VAR_12->cur_chunk_pos += VAR_14;
                VAR_12->pes_buf_cnt += VAR_14;
                return 0;
            }


            FUNC_7(VAR_12->pes_buffer + VAR_12->pes_buf_cnt, VAR_12->chunk + VAR_12->cur_chunk_pos, VAR_16);
            VAR_12->cur_chunk_pos += VAR_16;

            if (VAR_12->audio_type == VAR_5) {
                VAR_15 = FUNC_6(VAR_8,
                        VAR_12->pes_buffer, 5);
            } else {
                VAR_15 = FUNC_6(VAR_7,
                        VAR_12->pes_buffer, 5);
            }
            if (VAR_15 < 0) {
                FUNC_4(VAR_9, "Can't find audio PES header in packet.\n");
            } else {
                VAR_12->last_audio_pts = FUNC_5(
                    &VAR_12->pes_buffer[VAR_15 + VAR_12->pts_offset]);
                VAR_11->pts = VAR_12->last_audio_pts;
            }
            VAR_12->pes_buf_cnt = 0;

        }
        if (FUNC_1(VAR_11, VAR_14 - VAR_16) < 0)
            return FUNC_0(VAR_2);
        FUNC_7(VAR_11->data, VAR_12->chunk + VAR_12->cur_chunk_pos, VAR_14 - VAR_16);
        VAR_12->cur_chunk_pos += VAR_14 - VAR_16;
        VAR_11->stream_index = 1;







        if (VAR_12->audio_type == VAR_4 &&
                VAR_12->tivo_series == VAR_6) {
            if (VAR_12->ac3_pkt_size + VAR_11->size > VAR_0) {
                VAR_11->size -= 2;
                VAR_12->ac3_pkt_size = 0;
            } else {
                VAR_12->ac3_pkt_size += VAR_11->size;
            }
        }
    } else if (VAR_13 == 0x03) {
        if (FUNC_1(VAR_11, VAR_14) < 0)
            return FUNC_0(VAR_2);
        FUNC_7(VAR_11->data, VAR_12->chunk + VAR_12->cur_chunk_pos, VAR_14);
        VAR_12->cur_chunk_pos += VAR_14;
        VAR_11->stream_index = 1;


        VAR_15 = FUNC_6(VAR_8, VAR_11->data, 5);



        if ((VAR_15 == 0) && (VAR_14 == 16)) {
            VAR_12->last_audio_pts = FUNC_5(&VAR_11->data[VAR_3]);
            if (VAR_12->first_audio_pts == VAR_1)
                VAR_12->first_audio_pts = VAR_12->last_audio_pts;
            FUNC_2(VAR_11);
            return 0;
        }




        if (FUNC_3(VAR_9, VAR_11, VAR_15, VAR_14) == -1) {


            FUNC_2(VAR_11);
            return 0;
        }
    } else if (VAR_13 == 0x04) {


        if (FUNC_1(VAR_11, VAR_14) < 0)
            return FUNC_0(VAR_2);
        FUNC_7(VAR_11->data, VAR_12->chunk + VAR_12->cur_chunk_pos, VAR_14);
        VAR_12->cur_chunk_pos += VAR_14;
        VAR_11->stream_index = 1;
        VAR_11->pts = VAR_12->last_audio_pts;
    } else if (VAR_13 == 0x09) {
        if (FUNC_1(VAR_11, VAR_14) < 0)
            return FUNC_0(VAR_2);
        FUNC_7(VAR_11->data, VAR_12->chunk + VAR_12->cur_chunk_pos, VAR_14);
        VAR_12->cur_chunk_pos += VAR_14 ;
        VAR_11->stream_index = 1;



        VAR_15 = FUNC_6(VAR_7, VAR_11->data, 5);


        if (FUNC_3(VAR_9, VAR_11, VAR_15, VAR_14) == -1) {

            FUNC_2(VAR_11);
            return 0;
        }

        if (VAR_12->tivo_series == VAR_6) {
            if (VAR_11->size > VAR_0) {
                VAR_11->size -= 2;
                VAR_12->ac3_pkt_size = 0;
            } else {
                VAR_12->ac3_pkt_size = VAR_11->size;
            }
        }
    } else {

        VAR_12->cur_chunk_pos += VAR_14;
        return 0;
    }

    return 1;
}
