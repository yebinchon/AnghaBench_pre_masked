
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct oggvorbis_private {int final_pts; int final_duration; int vp; } ;
struct ogg_stream {void* lastpts; int flags; int granule; int pstart; int segp; int psize; int nsegs; int* segments; int lastdts; int pduration; int pflags; int * buf; struct oggvorbis_private* private; } ;
struct ogg {struct ogg_stream* streams; } ;
typedef scalar_t__ int64_t ;
struct TYPE_6__ {TYPE_1__** streams; struct ogg* priv_data; } ;
struct TYPE_5__ {void* start_time; void* duration; } ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *,int,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_5, int VAR_6)
{
    struct ogg *VAR_7 = VAR_5->priv_data;
    struct ogg_stream *VAR_8 = VAR_7->streams + VAR_6;
    struct oggvorbis_private *VAR_9 = VAR_8->private;
    int VAR_10, VAR_11 = 0;

    if (!VAR_9->vp)
        return VAR_0;





    if ((!VAR_8->lastpts || VAR_8->lastpts == VAR_1) && !(VAR_8->flags & VAR_3) && (int64_t)VAR_8->granule>=0) {
        int VAR_12, VAR_13;
        uint8_t *VAR_14 = VAR_8->buf + VAR_8->pstart;
        uint8_t *VAR_15 = VAR_14;

        FUNC_2(VAR_9->vp);
        VAR_10 = 0;
        VAR_12 = VAR_8->segp;
        VAR_13 = FUNC_1(VAR_9->vp, VAR_14, 1, &VAR_11);
        if (VAR_13 < 0) {
            VAR_8->pflags |= VAR_2;
            return 0;
        } else if (VAR_11 & VAR_4) {
            FUNC_3(VAR_5, VAR_6);
            VAR_11 = 0;
        }
        VAR_10 += VAR_13;
        VAR_14 = VAR_15 = VAR_15 + VAR_8->psize;
        for (; VAR_12 < VAR_8->nsegs; VAR_12++) {
            if (VAR_8->segments[VAR_12] < 255) {
                int VAR_16 = FUNC_1(VAR_9->vp, VAR_14, 1, &VAR_11);
                if (VAR_16 < 0) {
                    VAR_10 = VAR_8->granule;
                    break;
                } else if (VAR_11 & VAR_4) {
                    FUNC_3(VAR_5, VAR_6);
                    VAR_11 = 0;
                }
                VAR_10 += VAR_16;
                VAR_14 = VAR_15 + VAR_8->segments[VAR_12];
            }
            VAR_15 += VAR_8->segments[VAR_12];
        }
        VAR_8->lastpts =
        VAR_8->lastdts = VAR_8->granule - VAR_10;

        if (!VAR_8->granule && VAR_10)
            VAR_8->lastpts = VAR_8->lastdts = VAR_1;

        if (VAR_5->streams[VAR_6]->start_time == VAR_1) {
            VAR_5->streams[VAR_6]->start_time = FUNC_0(VAR_8->lastpts, 0);
            if (VAR_5->streams[VAR_6]->duration != VAR_1)
                VAR_5->streams[VAR_6]->duration -= VAR_5->streams[VAR_6]->start_time;
        }
        VAR_9->final_pts = VAR_1;
        FUNC_2(VAR_9->vp);
    }


    if (VAR_8->psize > 0) {
        VAR_10 = FUNC_1(VAR_9->vp, VAR_8->buf + VAR_8->pstart, 1, &VAR_11);
        if (VAR_10 < 0) {
            VAR_8->pflags |= VAR_2;
            return 0;
        } else if (VAR_11 & VAR_4) {
            FUNC_3(VAR_5, VAR_6);
            VAR_11 = 0;
        }
        VAR_8->pduration = VAR_10;
    }





    if (VAR_8->flags & VAR_3) {
        if (VAR_8->lastpts != VAR_1) {
            VAR_9->final_pts = VAR_8->lastpts;
            VAR_9->final_duration = 0;
        }
        if (VAR_8->segp == VAR_8->nsegs)
            VAR_8->pduration = VAR_8->granule - VAR_9->final_pts - VAR_9->final_duration;
        VAR_9->final_duration += VAR_8->pduration;
    }

    return 0;
}
