
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_13__ {int pb; TYPE_3__** streams; TYPE_2__* priv_data; } ;
struct TYPE_12__ {int dts; int size; int flags; } ;
struct TYPE_11__ {TYPE_1__* codecpar; } ;
struct TYPE_10__ {scalar_t__ leading; } ;
struct TYPE_9__ {int width; int height; } ;
typedef TYPE_2__ FilmstripDemuxContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVPacket ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_4__*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_2,
                       AVPacket *VAR_3)
{
    FilmstripDemuxContext *VAR_4 = VAR_2->priv_data;
    AVStream *VAR_5 = VAR_2->streams[0];

    if (FUNC_2(VAR_2->pb))
        return FUNC_0(VAR_1);
    VAR_3->dts = FUNC_4(VAR_2->pb) / (VAR_5->codecpar->width * (int64_t)(VAR_5->codecpar->height + VAR_4->leading) * 4);
    VAR_3->size = FUNC_1(VAR_2->pb, VAR_3, VAR_5->codecpar->width * VAR_5->codecpar->height * 4);
    FUNC_3(VAR_2->pb, VAR_5->codecpar->width * (int64_t) VAR_4->leading * 4);
    if (VAR_3->size < 0)
        return VAR_3->size;
    VAR_3->flags |= VAR_0;
    return 0;
}
