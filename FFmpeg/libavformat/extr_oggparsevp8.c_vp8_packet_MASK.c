
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct ogg_stream {int* buf; int pstart; scalar_t__ lastpts; int flags; int segp; scalar_t__ psize; int nsegs; int* segments; scalar_t__ lastdts; int pduration; int granule; } ;
struct ogg {struct ogg_stream* streams; } ;
struct TYPE_6__ {TYPE_1__** streams; struct ogg* priv_data; } ;
struct TYPE_5__ {scalar_t__ start_time; scalar_t__ duration; } ;
typedef TYPE_2__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int,int ,int *) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_2, int VAR_3)
{
    struct ogg *VAR_4 = VAR_2->priv_data;
    struct ogg_stream *VAR_5 = VAR_4->streams + VAR_3;
    uint8_t *VAR_6 = VAR_5->buf + VAR_5->pstart;

    if ((!VAR_5->lastpts || VAR_5->lastpts == VAR_0) &&
        !(VAR_5->flags & VAR_1)) {
        int VAR_7;
        int VAR_8;
        uint8_t *VAR_9 = VAR_6;
        uint8_t *VAR_10;

        VAR_7 = VAR_5->segp;
        VAR_8 = (VAR_9[0] >> 4) & 1;
        VAR_10 = VAR_9 += VAR_5->psize;
        for (; VAR_7 < VAR_5->nsegs; VAR_7++) {
            if (VAR_5->segments[VAR_7] < 255) {
                VAR_8 += (VAR_9[0] >> 4) & 1;
                VAR_9 = VAR_10 + VAR_5->segments[VAR_7];
            }
            VAR_10 += VAR_5->segments[VAR_7];
        }
        VAR_5->lastpts =
        VAR_5->lastdts = FUNC_0(VAR_2, VAR_3, VAR_5->granule, ((void*)0)) - VAR_8;
        if(VAR_2->streams[VAR_3]->start_time == VAR_0) {
            VAR_2->streams[VAR_3]->start_time = VAR_5->lastpts;
            if (VAR_2->streams[VAR_3]->duration && VAR_2->streams[VAR_3]->duration != VAR_0)
                VAR_2->streams[VAR_3]->duration -= VAR_2->streams[VAR_3]->start_time;
        }
    }

    if (VAR_5->psize > 0)
        VAR_5->pduration = (VAR_6[0] >> 4) & 1;

    return 0;
}
