
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_8__ {scalar_t__ data_offset; int data_size; scalar_t__ pts; scalar_t__ last_pts; int stream_index; } ;
typedef TYPE_1__ XMVVideoPacket ;
struct TYPE_9__ {TYPE_1__ video; } ;
typedef TYPE_2__ XMVDemuxContext ;
struct TYPE_11__ {int * pb; TYPE_2__* priv_data; } ;
struct TYPE_10__ {int* data; int flags; int dts; scalar_t__ pts; scalar_t__ duration; int stream_index; } ;
typedef TYPE_3__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,TYPE_3__*,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_4,
                                  AVPacket *VAR_5)
{
    XMVDemuxContext *VAR_6 = VAR_4->priv_data;
    AVIOContext *VAR_7 = VAR_4->pb;
    XMVVideoPacket *VAR_8 = &VAR_6->video;

    int VAR_9;
    uint32_t VAR_10;
    uint32_t VAR_11, VAR_12;
    uint8_t *VAR_13, *VAR_14;


    if (FUNC_5(VAR_7, VAR_8->data_offset, VAR_3) != VAR_8->data_offset)
        return FUNC_0(VAR_2);


    VAR_10 = FUNC_4(VAR_7);

    VAR_11 = (VAR_10 & 0x1FFFF) * 4 + 4;
    VAR_12 = (VAR_10 >> 17);

    if ((VAR_11 + 4) > VAR_8->data_size)
        return FUNC_0(VAR_2);


    VAR_9 = FUNC_3(VAR_7, VAR_5, VAR_11);
    if (VAR_9 != VAR_11)
        return VAR_9;





    for (VAR_13 = VAR_5->data, VAR_14 = VAR_5->data + VAR_11; VAR_13 < VAR_14; VAR_13 += 4)
        FUNC_2(VAR_13, FUNC_1(VAR_13));

    VAR_5->stream_index = VAR_8->stream_index;



    VAR_8->last_pts = VAR_12 + VAR_8->pts;

    VAR_5->duration = 0;
    VAR_5->pts = VAR_8->last_pts;
    VAR_5->dts = VAR_0;

    VAR_8->pts += VAR_12;


    VAR_5->flags = (VAR_5->data[0] & 0x80) ? 0 : VAR_1;


    VAR_8->data_size -= VAR_11 + 4;
    VAR_8->data_offset += VAR_11 + 4;

    return 0;
}
