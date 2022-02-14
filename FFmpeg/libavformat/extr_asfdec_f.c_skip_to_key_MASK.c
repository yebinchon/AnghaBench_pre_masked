
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int* asfid2avid; TYPE_4__* streams; } ;
struct TYPE_10__ {int skip_to_key; } ;
struct TYPE_9__ {TYPE_2__** streams; TYPE_5__* priv_data; } ;
struct TYPE_8__ {TYPE_1__* codecpar; } ;
struct TYPE_7__ {scalar_t__ codec_type; } ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ ASFStream ;
typedef TYPE_5__ ASFContext ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(AVFormatContext *VAR_1)
{
    ASFContext *VAR_2 = VAR_1->priv_data;
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < 128; VAR_3++) {
        int VAR_4 = VAR_2->asfid2avid[VAR_3];
        ASFStream *VAR_5 = &VAR_2->streams[VAR_3];
        if (VAR_4 < 0 || VAR_1->streams[VAR_4]->codecpar->codec_type != VAR_0)
            continue;

        VAR_5->skip_to_key = 1;
    }
}
