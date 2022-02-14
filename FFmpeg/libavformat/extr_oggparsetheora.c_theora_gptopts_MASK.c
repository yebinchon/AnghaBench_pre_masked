
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct ogg_stream {int pflags; TYPE_1__* private; } ;
struct ogg {struct ogg_stream* streams; } ;
typedef int int64_t ;
struct TYPE_4__ {int gpshift; int gpmask; int version; } ;
typedef TYPE_1__ TheoraParams ;
struct TYPE_5__ {struct ogg* priv_data; } ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static uint64_t FUNC_0(AVFormatContext *VAR_2, int VAR_3, uint64_t VAR_4,
                               int64_t *VAR_5)
{
    struct ogg *VAR_6 = VAR_2->priv_data;
    struct ogg_stream *VAR_7 = VAR_6->streams + VAR_3;
    TheoraParams *VAR_8 = VAR_7->private;
    uint64_t VAR_9, VAR_10;

    if (!VAR_8)
        return VAR_0;

    VAR_9 = VAR_4 >> VAR_8->gpshift;
    VAR_10 = VAR_4 & VAR_8->gpmask;

    if (VAR_8->version < 0x030201)
        VAR_9++;

    if (!VAR_10)
        VAR_7->pflags |= VAR_1;

    if (VAR_5)
        *VAR_5 = VAR_9 + VAR_10;

    return VAR_9 + VAR_10;
}
