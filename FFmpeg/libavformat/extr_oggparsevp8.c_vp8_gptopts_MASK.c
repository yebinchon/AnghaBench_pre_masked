
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct ogg_stream {int pflags; } ;
struct ogg {struct ogg_stream* streams; } ;
typedef int int64_t ;
struct TYPE_3__ {struct ogg* priv_data; } ;
typedef TYPE_1__ AVFormatContext ;


 int VAR_0 ;

__attribute__((used)) static uint64_t FUNC_0(AVFormatContext *VAR_1, int VAR_2,
                            uint64_t VAR_3, int64_t *VAR_4)
{
    struct ogg *VAR_5 = VAR_1->priv_data;
    struct ogg_stream *VAR_6 = VAR_5->streams + VAR_2;

    int VAR_7 = !((VAR_3 >> 30) & 3);



    uint64_t VAR_8 = (VAR_3 >> 32) - VAR_7;
    uint32_t VAR_9 = (VAR_3 >> 3) & 0x07ffffff;

    if (!VAR_9)
        VAR_6->pflags |= VAR_0;

    if (VAR_4)
        *VAR_4 = VAR_8;

    return VAR_8;
}
