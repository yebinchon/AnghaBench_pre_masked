
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef int hb_stream_t ;
struct TYPE_14__ {int codec_param; int stream_type; void* stream_kind; TYPE_1__* probe_buf; } ;
typedef TYPE_2__ hb_pes_stream_t ;
struct TYPE_16__ {int id; } ;
struct TYPE_15__ {int codec_id; } ;
struct TYPE_13__ {int size; scalar_t__ data; } ;
typedef int AVCodecParserContext ;
typedef TYPE_3__ AVCodecContext ;
typedef TYPE_4__ AVCodec ;




 void* VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_3__*,int **,int*,scalar_t__,int,int ,int ,int ) ;
 TYPE_3__* FUNC_3 (TYPE_4__*) ;
 TYPE_4__* FUNC_4 (int) ;
 int FUNC_5 (TYPE_3__**) ;
 scalar_t__ FUNC_6 (TYPE_3__*,TYPE_4__*,int *,int ) ;
 int FUNC_7 (char*,int) ;

__attribute__((used)) static int
FUNC_8(hb_stream_t *VAR_1, hb_pes_stream_t *VAR_2)
{
    int VAR_3 = 0;
    AVCodec * VAR_4 = FUNC_4(VAR_2->codec_param);

    if (VAR_4 == ((void*)0))
    {
        return -1;
    }

    AVCodecContext * VAR_5 = FUNC_3(VAR_4);
    AVCodecParserContext * VAR_6 = FUNC_1(VAR_4->id);

    if (VAR_5 == ((void*)0))
    {
        return -1;
    }
    if (VAR_6 == ((void*)0))
    {
        return -1;
    }
    if (FUNC_6(VAR_5, VAR_4, ((void*)0), 0))
    {
        return -1;
    }

    int VAR_7 = 0;
    while (VAR_7 < VAR_2->probe_buf->size)
    {
        int VAR_8, VAR_9;
        uint8_t * VAR_10;

        VAR_8 = FUNC_2(VAR_6, VAR_5, &VAR_10, &VAR_9,
                               VAR_2->probe_buf->data + VAR_7,
                               VAR_2->probe_buf->size - VAR_7, 0, 0, 0);
        VAR_7 += VAR_8;
        if (VAR_9 == 0)
        {
            continue;
        }



        switch (VAR_5->codec_id)
        {
            case 129:
                VAR_2->codec_param = VAR_5->codec_id;
                VAR_2->stream_type = 0x01;
                VAR_2->stream_kind = VAR_0;
                VAR_3 = 1;
                break;

            case 128:
                VAR_2->codec_param = VAR_5->codec_id;
                VAR_2->stream_type = 0x02;
                VAR_2->stream_kind = VAR_0;
                VAR_3 = 1;
                break;

            default:
                FUNC_7("do_deep_probe: unexpected codec_id (%d)",
                         VAR_5->codec_id);
                VAR_3 = -1;
                break;
        }
    }
    FUNC_0(VAR_6);
    FUNC_5(&VAR_5);

    return VAR_3;
}
