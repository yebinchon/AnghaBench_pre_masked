
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct ogg_stream {int* buf; int pstart; int psize; int pduration; int pflags; } ;
struct ogg {struct ogg_stream* streams; } ;
struct TYPE_3__ {struct ogg* priv_data; } ;
typedef TYPE_1__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(AVFormatContext *VAR_2, int VAR_3)
{
    struct ogg *VAR_4 = VAR_2->priv_data;
    struct ogg_stream *VAR_5 = VAR_4->streams + VAR_3;
    uint8_t *VAR_6 = VAR_5->buf + VAR_5->pstart;
    int VAR_7;

    if(*VAR_6 & 8)
        VAR_5->pflags |= VAR_1;

    VAR_7 = ((*VAR_6 & 2) << 1) | ((*VAR_6 >> 6) & 3);
    if (VAR_5->psize < VAR_7 + 1)
        return VAR_0;

    VAR_5->pstart += VAR_7 + 1;
    VAR_5->psize -= VAR_7 + 1;

    while (VAR_7--)
        VAR_5->pduration += (uint64_t)VAR_6[VAR_7+1] << (VAR_7*8);

    return 0;
}
