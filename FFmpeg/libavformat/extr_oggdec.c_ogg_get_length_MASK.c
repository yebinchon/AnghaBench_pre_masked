
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;


struct ogg {int page_pos; TYPE_3__* streams; } ;
typedef scalar_t__ int64_t ;
struct TYPE_19__ {scalar_t__ duration; TYPE_2__** streams; TYPE_1__* internal; TYPE_13__* pb; struct ogg* priv_data; } ;
struct TYPE_18__ {int granule; int got_start; scalar_t__ codec; } ;
struct TYPE_17__ {scalar_t__ duration; scalar_t__ start_time; } ;
struct TYPE_16__ {scalar_t__ data_offset; } ;
struct TYPE_15__ {int seekable; } ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_13__*,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (TYPE_13__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int,int *) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int,int,int *) ;
 int FUNC_4 (TYPE_4__*,int*,int *,int *,int *) ;
 int FUNC_5 (TYPE_4__*,int*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_4)
{
    struct ogg *VAR_5 = VAR_4->priv_data;
    int VAR_6, VAR_7;
    int64_t VAR_8, VAR_9;
    int VAR_10=0;

    if (!(VAR_4->pb->seekable & VAR_0))
        return 0;


    if (VAR_4->duration != VAR_1)
        return 0;

    VAR_8 = FUNC_1(VAR_4->pb);
    if (VAR_8 < 0)
        return 0;
    VAR_9 = VAR_8 > VAR_2 ? VAR_8 - VAR_2 : 0;

    VAR_7 = FUNC_8(VAR_4);
    if (VAR_7 < 0)
        return VAR_7;
    FUNC_0(VAR_4->pb, VAR_9, VAR_3);
    VAR_5->page_pos = -1;

    while (!FUNC_5(VAR_4, &VAR_6)) {
        if (VAR_5->streams[VAR_6].granule != -1 && VAR_5->streams[VAR_6].granule != 0 &&
            VAR_5->streams[VAR_6].codec) {
            VAR_4->streams[VAR_6]->duration =
                FUNC_3(VAR_4, VAR_6, VAR_5->streams[VAR_6].granule, ((void*)0));
            if (VAR_4->streams[VAR_6]->start_time != VAR_1) {
                VAR_4->streams[VAR_6]->duration -= VAR_4->streams[VAR_6]->start_time;
                VAR_10-= (VAR_5->streams[VAR_6].got_start==-1);
                VAR_5->streams[VAR_6].got_start= 1;
            } else if(!VAR_5->streams[VAR_6].got_start) {
                VAR_5->streams[VAR_6].got_start= -1;
                VAR_10++;
            }
        }
    }

    FUNC_7(VAR_4);

    VAR_7 = FUNC_8(VAR_4);
    if (VAR_7 < 0)
        return VAR_7;

    FUNC_0 (VAR_4->pb, VAR_4->internal->data_offset, VAR_3);
    FUNC_6(VAR_4);
    while (VAR_10 > 0 && !FUNC_4(VAR_4, &VAR_6, ((void*)0), ((void*)0), ((void*)0))) {
        int64_t VAR_11;
        if (VAR_6 < 0) continue;
        VAR_11 = FUNC_2(VAR_4, VAR_6, ((void*)0));
        if (VAR_4->streams[VAR_6]->duration == VAR_1)
            continue;
        if (VAR_11 != VAR_1 && VAR_4->streams[VAR_6]->start_time == VAR_1 && !VAR_5->streams[VAR_6].got_start) {
            VAR_4->streams[VAR_6]->duration -= VAR_11;
            VAR_5->streams[VAR_6].got_start= 1;
            VAR_10--;
        }else if(VAR_4->streams[VAR_6]->start_time != VAR_1 && !VAR_5->streams[VAR_6].got_start) {
            VAR_5->streams[VAR_6].got_start= 1;
            VAR_10--;
        }
    }
    FUNC_7 (VAR_4);

    return 0;
}
