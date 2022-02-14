
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {TYPE_2__** streams; TYPE_4__* priv_data; } ;
struct TYPE_13__ {scalar_t__ media_type; } ;
struct TYPE_12__ {TYPE_3__* streams; TYPE_5__* as; } ;
struct TYPE_11__ {int as_idx; } ;
struct TYPE_10__ {TYPE_1__* codecpar; } ;
struct TYPE_9__ {scalar_t__ codec_type; } ;
typedef TYPE_3__ OutputStream ;
typedef TYPE_4__ DASHContext ;
typedef TYPE_5__ AdaptationSet ;
typedef TYPE_6__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_6__*,int ,char*,int) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_2, int VAR_3, int VAR_4)
{
    DASHContext *VAR_5 = VAR_2->priv_data;
    AdaptationSet *VAR_6 = &VAR_5->as[VAR_3 - 1];
    OutputStream *VAR_7 = &VAR_5->streams[VAR_4];

    if (VAR_6->media_type != VAR_2->streams[VAR_4]->codecpar->codec_type) {
        FUNC_1(VAR_2, VAR_0, "Codec type of stream %d doesn't match AdaptationSet's media type\n", VAR_4);
        return FUNC_0(VAR_1);
    } else if (VAR_7->as_idx) {
        FUNC_1(VAR_2, VAR_0, "Stream %d is already assigned to an AdaptationSet\n", VAR_4);
        return FUNC_0(VAR_1);
    }
    VAR_7->as_idx = VAR_3;

    return 0;
}
