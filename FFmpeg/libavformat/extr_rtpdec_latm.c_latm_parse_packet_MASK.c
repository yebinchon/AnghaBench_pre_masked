
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_10__ {int stream_index; int data; } ;
struct TYPE_9__ {int index; } ;
struct TYPE_8__ {scalar_t__ timestamp; int* buf; scalar_t__ len; scalar_t__ pos; int * dyn_buf; } ;
typedef TYPE_1__ PayloadContext ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVPacket ;
typedef int AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int**) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (TYPE_3__*,int) ;
 scalar_t__ FUNC_4 (int *,int**) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (int *,int const*,int) ;
 int FUNC_7 (int **) ;
 int FUNC_8 (int ,int*,int) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_4, PayloadContext *VAR_5,
                             AVStream *VAR_6, AVPacket *VAR_7, uint32_t *VAR_8,
                             const uint8_t *VAR_9, int VAR_10, uint16_t VAR_11,
                             int VAR_12)
{
    int VAR_13, VAR_14;

    if (VAR_9) {
        if (!VAR_5->dyn_buf || VAR_5->timestamp != *VAR_8) {
            FUNC_1(&VAR_5->buf);
            FUNC_7(&VAR_5->dyn_buf);

            VAR_5->timestamp = *VAR_8;
            if ((VAR_13 = FUNC_5(&VAR_5->dyn_buf)) < 0)
                return VAR_13;
        }
        FUNC_6(VAR_5->dyn_buf, VAR_9, VAR_10);

        if (!(VAR_12 & VAR_3))
            return FUNC_0(VAR_1);
        FUNC_1(&VAR_5->buf);
        VAR_5->len = FUNC_4(VAR_5->dyn_buf, &VAR_5->buf);
        VAR_5->dyn_buf = ((void*)0);
        VAR_5->pos = 0;
    }

    if (!VAR_5->buf) {
        FUNC_2(VAR_4, VAR_0, "No data available yet\n");
        return FUNC_0(VAR_2);
    }

    VAR_14 = 0;
    while (VAR_5->pos < VAR_5->len) {
        uint8_t VAR_15 = VAR_5->buf[VAR_5->pos++];
        VAR_14 += VAR_15;
        if (VAR_15 != 0xff)
            break;
    }
    if (VAR_5->pos + VAR_14 > VAR_5->len) {
        FUNC_2(VAR_4, VAR_0, "Malformed LATM packet\n");
        return FUNC_0(VAR_2);
    }

    if ((VAR_13 = FUNC_3(VAR_7, VAR_14)) < 0)
        return VAR_13;
    FUNC_8(VAR_7->data, VAR_5->buf + VAR_5->pos, VAR_14);
    VAR_5->pos += VAR_14;
    VAR_7->stream_index = VAR_6->index;
    return VAR_5->pos < VAR_5->len;
}
