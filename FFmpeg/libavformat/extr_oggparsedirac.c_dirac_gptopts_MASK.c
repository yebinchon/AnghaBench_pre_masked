
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct ogg_stream {int pflags; } ;
struct ogg {struct ogg_stream* streams; } ;
typedef int int64_t ;
struct TYPE_3__ {struct ogg* priv_data; } ;
typedef TYPE_1__ AVFormatContext ;


 int VAR_0 ;

__attribute__((used)) static uint64_t FUNC_0(AVFormatContext *VAR_1, int VAR_2, uint64_t VAR_3,
                              int64_t *VAR_4)
{
    int64_t VAR_5 = VAR_3;
    struct ogg *VAR_6 = VAR_1->priv_data;
    struct ogg_stream *VAR_7 = VAR_6->streams + VAR_2;

    unsigned VAR_8 = ((VAR_5 >> 14) & 0xff00) | (VAR_5 & 0xff);
    int64_t VAR_9 = (VAR_5 >> 31);
    int64_t VAR_10 = VAR_9 + ((VAR_5 >> 9) & 0x1fff);

    if (!VAR_8)
        VAR_7->pflags |= VAR_0;

    if (VAR_4)
        *VAR_4 = VAR_9;

    return VAR_10;
}
