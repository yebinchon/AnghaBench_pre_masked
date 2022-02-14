
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_13__ {int stream_index; int const* data; } ;
struct TYPE_12__ {int index; } ;
struct TYPE_11__ {size_t cur_au_index; size_t nb_au_headers; size_t buf_size; size_t buf_pos; scalar_t__ timestamp; int const* buf; TYPE_1__* au_headers; scalar_t__ au_headers_length_bytes; } ;
struct TYPE_10__ {size_t size; } ;
typedef TYPE_2__ PayloadContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVPacket ;
typedef int AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (int const*,int const*,int) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int const*,int) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_5, PayloadContext *VAR_6,
                            AVStream *VAR_7, AVPacket *VAR_8, uint32_t *VAR_9,
                            const uint8_t *VAR_10, int VAR_11, uint16_t VAR_12,
                            int VAR_13)
{
    int VAR_14;


    if (!VAR_10) {
        if (VAR_6->cur_au_index > VAR_6->nb_au_headers) {
            FUNC_2(VAR_5, VAR_1, "Invalid parser state\n");
            return VAR_0;
        }
        if (VAR_6->buf_size - VAR_6->buf_pos < VAR_6->au_headers[VAR_6->cur_au_index].size) {
            FUNC_2(VAR_5, VAR_1, "Invalid AU size\n");
            return VAR_0;
        }
        if ((VAR_14 = FUNC_3(VAR_8, VAR_6->au_headers[VAR_6->cur_au_index].size)) < 0) {
            FUNC_2(VAR_5, VAR_1, "Out of memory\n");
            return VAR_14;
        }
        FUNC_4(VAR_8->data, &VAR_6->buf[VAR_6->buf_pos], VAR_6->au_headers[VAR_6->cur_au_index].size);
        VAR_6->buf_pos += VAR_6->au_headers[VAR_6->cur_au_index].size;
        VAR_8->stream_index = VAR_7->index;
        VAR_6->cur_au_index++;

        if (VAR_6->cur_au_index == VAR_6->nb_au_headers) {
            VAR_6->buf_pos = 0;
            return 0;
        }

        return 1;
    }

    if (FUNC_5(VAR_6, VAR_10, VAR_11)) {
        FUNC_2(VAR_5, VAR_1, "Error parsing AU headers\n");
        return -1;
    }

    VAR_10 += VAR_6->au_headers_length_bytes + 2;
    VAR_11 -= VAR_6->au_headers_length_bytes + 2;
    if (VAR_6->nb_au_headers == 1 && VAR_11 < VAR_6->au_headers[0].size) {


        if (!VAR_6->buf_pos) {
            if (VAR_6->au_headers[0].size > VAR_3) {
                FUNC_2(VAR_5, VAR_1, "Invalid AU size\n");
                return VAR_0;
            }

            VAR_6->buf_size = VAR_6->au_headers[0].size;
            VAR_6->timestamp = *VAR_9;
        }

        if (VAR_6->timestamp != *VAR_9 ||
            VAR_6->au_headers[0].size != VAR_6->buf_size ||
            VAR_6->buf_pos + VAR_11 > VAR_3) {
            VAR_6->buf_pos = 0;
            VAR_6->buf_size = 0;
            FUNC_2(VAR_5, VAR_1, "Invalid packet received\n");
            return VAR_0;
        }

        FUNC_4(&VAR_6->buf[VAR_6->buf_pos], VAR_10, VAR_11);
        VAR_6->buf_pos += VAR_11;

        if (!(VAR_13 & VAR_4))
            return FUNC_0(VAR_2);

        if (VAR_6->buf_pos != VAR_6->buf_size) {
            VAR_6->buf_pos = 0;
            FUNC_2(VAR_5, VAR_1, "Missed some packets, discarding frame\n");
            return VAR_0;
        }

        VAR_6->buf_pos = 0;
        VAR_14 = FUNC_3(VAR_8, VAR_6->buf_size);
        if (VAR_14 < 0) {
            FUNC_2(VAR_5, VAR_1, "Out of memory\n");
            return VAR_14;
        }
        VAR_8->stream_index = VAR_7->index;

        FUNC_4(VAR_8->data, VAR_6->buf, VAR_6->buf_size);

        return 0;
    }

    if (VAR_11 < VAR_6->au_headers[0].size) {
        FUNC_2(VAR_5, VAR_1, "First AU larger than packet size\n");
        return VAR_0;
    }
    if ((VAR_14 = FUNC_3(VAR_8, VAR_6->au_headers[0].size)) < 0) {
        FUNC_2(VAR_5, VAR_1, "Out of memory\n");
        return VAR_14;
    }
    FUNC_4(VAR_8->data, VAR_10, VAR_6->au_headers[0].size);
    VAR_11 -= VAR_6->au_headers[0].size;
    VAR_10 += VAR_6->au_headers[0].size;
    VAR_8->stream_index = VAR_7->index;

    if (VAR_11 > 0 && VAR_6->nb_au_headers > 1) {
        VAR_6->buf_size = FUNC_1(VAR_11, sizeof(VAR_6->buf));
        FUNC_4(VAR_6->buf, VAR_10, VAR_6->buf_size);
        VAR_6->cur_au_index = 1;
        VAR_6->buf_pos = 0;
        return 1;
    }

    return 0;
}
