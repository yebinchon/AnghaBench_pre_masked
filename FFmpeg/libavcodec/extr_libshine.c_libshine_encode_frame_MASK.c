
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;


typedef int int16_t ;
struct TYPE_21__ {int frame_size; TYPE_1__* priv_data; } ;
struct TYPE_20__ {scalar_t__ data; } ;
struct TYPE_19__ {unsigned char* data; int size; int duration; int pts; } ;
struct TYPE_18__ {int frame_size; } ;
struct TYPE_16__ {int frame_count; } ;
struct TYPE_17__ {int buffer_index; unsigned char* buffer; TYPE_11__ afq; int shine; } ;
typedef TYPE_1__ SHINEContext ;
typedef TYPE_2__ MPADecodeHeader ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_5__*,int ,char*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_11__*,TYPE_4__ const*) ;
 int FUNC_4 (TYPE_11__*,int ,int *,int *) ;
 int FUNC_5 (TYPE_5__*,TYPE_3__*,int,int ) ;
 int FUNC_6 (unsigned char*,unsigned char*,int) ;
 int FUNC_7 (unsigned char*,unsigned char*,int) ;
 unsigned char* FUNC_8 (int ,int **,int*) ;
 unsigned char* FUNC_9 (int ,int*) ;

__attribute__((used)) static int FUNC_10(AVCodecContext *VAR_3, AVPacket *VAR_4,
                                 const AVFrame *VAR_5, int *VAR_6)
{
    SHINEContext *VAR_7 = VAR_3->priv_data;
    MPADecodeHeader VAR_8;
    unsigned char *VAR_9;
    int VAR_10;
    int VAR_11, VAR_12;

    if (VAR_5)
        VAR_9 = FUNC_8(VAR_7->shine, (int16_t **)VAR_5->data, &VAR_10);
    else
        VAR_9 = FUNC_9(VAR_7->shine, &VAR_10);
    if (VAR_10 < 0)
        return -1;
    if (VAR_10 > 0) {
        if (VAR_7->buffer_index + VAR_10 > VAR_2) {
            FUNC_1(VAR_3, VAR_1, "internal buffer too small\n");
            return VAR_0;
        }
        FUNC_6(VAR_7->buffer + VAR_7->buffer_index, VAR_9, VAR_10);
        VAR_7->buffer_index += VAR_10;
    }
    if (VAR_5) {
        if ((VAR_11 = FUNC_3(&VAR_7->afq, VAR_5)) < 0)
            return VAR_11;
    }

    if (VAR_7->buffer_index < 4 || !VAR_7->afq.frame_count)
        return 0;
    if (FUNC_2(&VAR_8, FUNC_0(VAR_7->buffer))) {
        FUNC_1(VAR_3, VAR_1, "free format output not supported\n");
        return -1;
    }

    VAR_12 = VAR_8.frame_size;
    if (VAR_12 <= VAR_7->buffer_index) {
        if ((VAR_11 = FUNC_5(VAR_3, VAR_4, VAR_12, 0)))
            return VAR_11;
        FUNC_6(VAR_4->data, VAR_7->buffer, VAR_12);
        VAR_7->buffer_index -= VAR_12;
        FUNC_7(VAR_7->buffer, VAR_7->buffer + VAR_12, VAR_7->buffer_index);

        FUNC_4(&VAR_7->afq, VAR_3->frame_size, &VAR_4->pts,
                           &VAR_4->duration);

        VAR_4->size = VAR_12;
        *VAR_6 = 1;
    }
    return 0;
}
