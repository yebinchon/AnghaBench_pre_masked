
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {TYPE_2__* codecpar; int index; } ;
struct TYPE_8__ {int num; int den; } ;
struct TYPE_10__ {int video_stream_index; TYPE_1__ fps; } ;
struct TYPE_9__ {int extradata_size; void* height; void* width; int extradata; int codec_id; int codec_type; } ;
typedef TYPE_3__ FourxmDemuxContext ;
typedef TYPE_4__ AVStream ;
typedef int AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int ,void*) ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__) ;
 TYPE_4__* FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_4__*,int,int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_6,
                      FourxmDemuxContext *VAR_7, uint8_t *VAR_8, int VAR_9,
                      int VAR_10)
{
    AVStream *VAR_11;

    if (VAR_9 != VAR_5 || VAR_10 < VAR_9 + 8) {
        return VAR_0;
    }


    VAR_11 = FUNC_4(VAR_6, ((void*)0));
    if (!VAR_11)
        return FUNC_0(VAR_4);

    FUNC_5(VAR_11, 60, VAR_7->fps.den, VAR_7->fps.num);

    VAR_7->video_stream_index = VAR_11->index;

    VAR_11->codecpar->codec_type = VAR_1;
    VAR_11->codecpar->codec_id = VAR_2;

    VAR_11->codecpar->extradata = FUNC_3(4 + VAR_3);
    if (!VAR_11->codecpar->extradata)
        return FUNC_0(VAR_4);
    VAR_11->codecpar->extradata_size = 4;
    FUNC_2(VAR_11->codecpar->extradata, FUNC_1(VAR_8 + 16));
    VAR_11->codecpar->width = FUNC_1(VAR_8 + 36);
    VAR_11->codecpar->height = FUNC_1(VAR_8 + 40);

    return 0;
}
