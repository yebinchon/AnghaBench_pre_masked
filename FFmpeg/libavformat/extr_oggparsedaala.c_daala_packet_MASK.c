
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ogg_stream {scalar_t__ lastpts; int flags; int segp; int nsegs; int* segments; scalar_t__ lastdts; scalar_t__ psize; int pduration; int granule; } ;
struct ogg {struct ogg_stream* streams; } ;
typedef scalar_t__ int64_t ;
struct TYPE_6__ {TYPE_1__** streams; struct ogg* priv_data; } ;
struct TYPE_5__ {scalar_t__ start_time; scalar_t__ duration; } ;
typedef TYPE_2__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int,int ,int *) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5 = 1;
    struct ogg *VAR_6 = VAR_2->priv_data;
    struct ogg_stream *VAR_7 = VAR_6->streams + VAR_3;
    int64_t VAR_8;







    if ((!VAR_7->lastpts || VAR_7->lastpts == VAR_0) && !(VAR_7->flags & VAR_1)) {
        for (VAR_4 = VAR_7->segp; VAR_4 < VAR_7->nsegs; VAR_4++)
            if (VAR_7->segments[VAR_4] < 255)
                VAR_5++;

        VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_7->granule, ((void*)0));
        if (VAR_8 != VAR_0)
            VAR_8 -= VAR_5;
        VAR_7->lastpts = VAR_7->lastdts = VAR_8;
        if(VAR_2->streams[VAR_3]->start_time == VAR_0) {
            VAR_2->streams[VAR_3]->start_time = VAR_7->lastpts;
            if (VAR_2->streams[VAR_3]->duration != VAR_0)
                VAR_2->streams[VAR_3]->duration -= VAR_2->streams[VAR_3]->start_time;
        }
    }


    if (VAR_7->psize > 0)
        VAR_7->pduration = 1;

    return 0;
}
