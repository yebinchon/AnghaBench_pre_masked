
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ codec_id; scalar_t__ extradata_size; int extradata; } ;
struct TYPE_8__ {TYPE_1__** streams; int * priv_data; } ;
struct TYPE_7__ {TYPE_3__* codecpar; } ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ AVCodecParameters ;
typedef int ADTSContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int *,int ,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_3)
{
    ADTSContext *VAR_4 = VAR_3->priv_data;
    AVCodecParameters *VAR_5 = VAR_3->streams[0]->codecpar;

    if (VAR_5->codec_id != VAR_0) {
        FUNC_2(VAR_3, VAR_1, "Only AAC streams can be muxed by the ADTS muxer\n");
        return FUNC_0(VAR_2);
    }
    if (VAR_5->extradata_size > 0)
        return FUNC_1(VAR_3, VAR_4, VAR_5->extradata,
                                     VAR_5->extradata_size);

    return 0;
}
