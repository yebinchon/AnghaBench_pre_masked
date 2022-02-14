
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ codec_id; scalar_t__ extradata_size; int extradata; } ;
struct TYPE_8__ {TYPE_1__** streams; } ;
struct TYPE_7__ {TYPE_3__* codecpar; } ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_6)
{
    AVCodecParameters *VAR_7 = VAR_6->streams[0]->codecpar;

    if (VAR_7->codec_id == VAR_2)
        return 0;
    if (VAR_7->codec_id != VAR_1 && VAR_7->codec_id != VAR_3) {
        FUNC_1(VAR_6, VAR_4, "Only AAC, LATM and ALS are supported\n");
        return FUNC_0(VAR_5);
    }

    if (VAR_7->extradata_size > 0 &&
        FUNC_2(VAR_6, VAR_7->extradata, VAR_7->extradata_size) < 0)
        return VAR_0;

    return 0;
}
