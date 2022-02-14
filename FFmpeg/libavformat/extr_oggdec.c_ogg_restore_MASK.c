
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ogg_stream {int new_metadata; int buf; } ;
struct ogg_state {int nstreams; TYPE_3__* streams; int curidx; int pos; struct ogg_state* next; } ;
struct ogg {int nstreams; int page_pos; struct ogg_stream* streams; int curidx; struct ogg_state* state; } ;
struct TYPE_6__ {int private; } ;
struct TYPE_5__ {int * pb; struct ogg* priv_data; } ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (struct ogg_state*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ogg_stream**,int,int) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (struct ogg_stream*,TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_1)
{
    struct ogg *VAR_2 = VAR_1->priv_data;
    AVIOContext *VAR_3 = VAR_1->pb;
    struct ogg_state *VAR_4 = VAR_2->state;
    int VAR_5, VAR_6;

    if (!VAR_4)
        return 0;

    VAR_2->state = VAR_4->next;

        for (VAR_5 = 0; VAR_5 < VAR_2->nstreams; VAR_5++) {
            struct ogg_stream *VAR_7 = &VAR_2->streams[VAR_5];
            FUNC_1(&VAR_7->buf);
            FUNC_1(&VAR_7->new_metadata);

            if (VAR_5 >= VAR_4->nstreams || !VAR_4->streams[VAR_5].private) {
                FUNC_4(VAR_1, VAR_5);
            }
        }

        FUNC_3(VAR_3, VAR_4->pos, VAR_0);
        VAR_2->page_pos = -1;
        VAR_2->curidx = VAR_4->curidx;
        VAR_2->nstreams = VAR_4->nstreams;
        if ((VAR_6 = FUNC_2(&VAR_2->streams, VAR_2->nstreams,
                                     sizeof(*VAR_2->streams))) < 0) {
            VAR_2->nstreams = 0;
            return VAR_6;
        } else
            FUNC_5(VAR_2->streams, VAR_4->streams,
                   VAR_4->nstreams * sizeof(*VAR_2->streams));

    FUNC_0(VAR_4);

    return 0;
}
