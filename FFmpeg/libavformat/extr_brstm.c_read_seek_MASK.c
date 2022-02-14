
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_11__ {int pb; TYPE_2__* priv_data; TYPE_3__** streams; } ;
struct TYPE_10__ {TYPE_1__* codecpar; } ;
struct TYPE_9__ {scalar_t__ samples_per_block; scalar_t__ block_size; scalar_t__ current_block; scalar_t__ data_start; } ;
struct TYPE_8__ {scalar_t__ channels; } ;
typedef TYPE_2__ BRSTMDemuxContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_1, int VAR_2,
                     int64_t VAR_3, int VAR_4)
{
    AVStream *VAR_5 = VAR_1->streams[VAR_2];
    BRSTMDemuxContext *VAR_6 = VAR_1->priv_data;
    int64_t VAR_7 = 0;

    VAR_3 /= VAR_6->samples_per_block;
    VAR_7 = FUNC_0(VAR_1->pb, VAR_6->data_start + VAR_3 * VAR_6->block_size *
                           VAR_5->codecpar->channels, VAR_0);
    if (VAR_7 < 0)
        return VAR_7;

    VAR_6->current_block = VAR_3;
    FUNC_1(VAR_1, VAR_5, VAR_3 * VAR_6->samples_per_block);
    return 0;
}
