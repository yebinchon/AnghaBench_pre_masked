
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
    struct ogg *VAR_5 = VAR_1->priv_data;
    struct ogg_stream *VAR_6 = VAR_5->streams + VAR_2;
    uint64_t VAR_7 = VAR_3 >> 30;
    uint64_t VAR_8 = VAR_3 & 0x3fffffff;

    if (!VAR_8)
        VAR_6->pflags |= VAR_0;

    return VAR_7 + VAR_8;
}
