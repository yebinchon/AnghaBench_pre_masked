
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* internal; int pb; } ;
struct TYPE_10__ {TYPE_1__* codecpar; } ;
struct TYPE_9__ {void* data_offset; } ;
struct TYPE_8__ {int channels; int block_align; void* sample_rate; int codec_id; int codec_type; } ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__* FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,void*,int ) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_8)
{
    AVStream *VAR_9 = FUNC_1(VAR_8, ((void*)0));
    if (!VAR_9)
        return FUNC_0(VAR_3);

    VAR_9->codecpar->codec_type = VAR_1;
    VAR_9->codecpar->codec_id = VAR_2;

    FUNC_3(VAR_8->pb);
    FUNC_3(VAR_8->pb);
    VAR_9->codecpar->sample_rate = FUNC_3(VAR_8->pb);
    VAR_9->codecpar->channels = FUNC_3(VAR_8->pb);
    if (VAR_9->codecpar->channels > VAR_5)
        return FUNC_0(VAR_4);
    VAR_8->internal->data_offset = FUNC_3(VAR_8->pb);
    FUNC_2(VAR_8->pb);
    VAR_9->codecpar->block_align = FUNC_3(VAR_8->pb);
    if (VAR_9->codecpar->block_align > VAR_6 / VAR_5)
        return VAR_0;
    VAR_9->codecpar->block_align *= VAR_9->codecpar->channels;

    FUNC_4(VAR_8->pb, VAR_8->internal->data_offset, VAR_7);

    return 0;
}
