
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_11__ {int codec_id; scalar_t__ extradata; scalar_t__ extradata_size; } ;
struct TYPE_10__ {TYPE_4__* codecpar; } ;
struct TYPE_9__ {TYPE_1__* fc; } ;
struct TYPE_8__ {int nb_streams; TYPE_3__** streams; } ;
typedef TYPE_2__ MOVContext ;
typedef int MOVAtom ;
typedef TYPE_3__ AVStream ;
typedef int AVIOContext ;


 int FUNC_0 (TYPE_2__*,int *,int ,TYPE_4__*,scalar_t__) ;
 int FUNC_1 (TYPE_4__*,int ) ;

__attribute__((used)) static int FUNC_2(MOVContext *VAR_0, AVIOContext *VAR_1, MOVAtom VAR_2,
                              enum AVCodecID VAR_3)
{
    AVStream *VAR_4;
    uint64_t VAR_5;
    int VAR_6;

    if (VAR_0->fc->nb_streams < 1)
        return 0;
    VAR_4 = VAR_0->fc->streams[VAR_0->fc->nb_streams-1];

    if (VAR_4->codecpar->codec_id != VAR_3)
        return 0;

    VAR_5 = VAR_4->codecpar->extradata_size;
    VAR_6 = FUNC_1(VAR_4->codecpar, VAR_2);
    if (VAR_6)
        return VAR_6;

    VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4->codecpar, VAR_4->codecpar->extradata + VAR_5);
    if (VAR_6 < 0)
        return VAR_6;
    return 0;
}
