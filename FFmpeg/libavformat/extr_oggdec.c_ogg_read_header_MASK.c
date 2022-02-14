
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct ogg_stream {scalar_t__ header; scalar_t__ nb_header; scalar_t__ start_granule; int lastpts; TYPE_1__* codec; int private; } ;
struct ogg {int curidx; int nstreams; struct ogg_stream* streams; int headers; } ;
struct TYPE_12__ {int error_recognition; TYPE_2__** streams; struct ogg* priv_data; } ;
struct TYPE_11__ {int start_time; } ;
struct TYPE_10__ {scalar_t__ nb_header; } ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,int ,char*,...) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int,scalar_t__,int *) ;
 int FUNC_4 (TYPE_3__*,int *,int *,int *,int *) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_6)
{
    struct ogg *VAR_7 = VAR_6->priv_data;
    int VAR_8, VAR_9;

    VAR_7->curidx = -1;


    do {
        VAR_8 = FUNC_4(VAR_6, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
        if (VAR_8 < 0) {
            FUNC_5(VAR_6);
            return VAR_8;
        }
    } while (!VAR_7->headers);
    FUNC_1(VAR_6, VAR_3, "found headers\n");

    for (VAR_9 = 0; VAR_9 < VAR_7->nstreams; VAR_9++) {
        struct ogg_stream *VAR_10 = VAR_7->streams + VAR_9;

        if (VAR_7->streams[VAR_9].header < 0) {
            FUNC_1(VAR_6, VAR_2, "Header parsing failed for stream %d\n", VAR_9);
            VAR_7->streams[VAR_9].codec = ((void*)0);
            FUNC_0(&VAR_7->streams[VAR_9].private);
        } else if (VAR_10->codec && VAR_10->nb_header < VAR_10->codec->nb_header) {
            FUNC_1(VAR_6, VAR_4,
                   "Headers mismatch for stream %d: "
                   "expected %d received %d.\n",
                   VAR_9, VAR_10->codec->nb_header, VAR_10->nb_header);
            if (VAR_6->error_recognition & VAR_1) {
                FUNC_5(VAR_6);
                return VAR_0;
            }
        }
        if (VAR_10->start_granule != VAR_5)
            VAR_10->lastpts = VAR_6->streams[VAR_9]->start_time =
                FUNC_3(VAR_6, VAR_9, VAR_10->start_granule, ((void*)0));
    }


    VAR_8 = FUNC_2(VAR_6);
    if (VAR_8 < 0) {
        FUNC_5(VAR_6);
        return VAR_8;
    }

    return 0;
}
