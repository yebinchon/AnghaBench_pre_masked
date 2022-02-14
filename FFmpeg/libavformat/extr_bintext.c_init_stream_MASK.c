
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {TYPE_3__* priv_data; } ;
struct TYPE_14__ {int time_base; TYPE_1__* codecpar; } ;
struct TYPE_12__ {int num; int den; } ;
struct TYPE_13__ {int chars_per_frame; TYPE_2__ framerate; int width; } ;
struct TYPE_11__ {int width; int height; int codec_type; scalar_t__ codec_tag; } ;
typedef TYPE_3__ BinDemuxContext ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (int ) ;
 TYPE_4__* FUNC_2 (TYPE_5__*,int *) ;
 int FUNC_3 (TYPE_4__*,int,int ,int ) ;

__attribute__((used)) static AVStream * FUNC_4(AVFormatContext *VAR_2)
{
    BinDemuxContext *VAR_3 = VAR_2->priv_data;
    AVStream *VAR_4 = FUNC_2(VAR_2, ((void*)0));
    if (!VAR_4)
        return ((void*)0);
    VAR_4->codecpar->codec_tag = 0;
    VAR_4->codecpar->codec_type = VAR_0;

    if (!VAR_3->width) {
        VAR_4->codecpar->width = (80<<3);
        VAR_4->codecpar->height = (25<<4);
    }

    FUNC_3(VAR_4, 60, VAR_3->framerate.den, VAR_3->framerate.num);


    VAR_3->chars_per_frame = FUNC_0(FUNC_1(VAR_4->time_base) * VAR_3->chars_per_frame, 1, VAR_1);

    return VAR_4;
}
