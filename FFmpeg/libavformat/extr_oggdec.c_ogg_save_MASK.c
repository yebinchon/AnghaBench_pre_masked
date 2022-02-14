
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ogg_stream {int bufpos; scalar_t__ new_metadata_size; int * new_metadata; TYPE_4__* buf; scalar_t__ bufsize; } ;
struct ogg_state {int nstreams; TYPE_4__* streams; struct ogg_state* next; int curidx; int pos; } ;
struct ogg {int nstreams; struct ogg_state* state; struct ogg_stream* streams; int curidx; } ;
struct TYPE_7__ {struct ogg_stream* buf; } ;
struct TYPE_6__ {int pb; struct ogg* priv_data; } ;
typedef TYPE_1__ AVFormatContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct ogg_state* FUNC_1 (int) ;
 TYPE_4__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*,struct ogg_stream*,int) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_2)
{
    struct ogg *VAR_3 = VAR_2->priv_data;
    struct ogg_state *VAR_4 =
        FUNC_1(sizeof(*VAR_4) + (VAR_3->nstreams - 1) * sizeof(*VAR_3->streams));
    int VAR_5;
    int VAR_6 = 0;

    if (!VAR_4)
        return FUNC_0(VAR_1);

    VAR_4->pos = FUNC_3(VAR_2->pb);
    VAR_4->curidx = VAR_3->curidx;
    VAR_4->next = VAR_3->state;
    VAR_4->nstreams = VAR_3->nstreams;
    FUNC_4(VAR_4->streams, VAR_3->streams, VAR_3->nstreams * sizeof(*VAR_3->streams));

    for (VAR_5 = 0; VAR_5 < VAR_3->nstreams; VAR_5++) {
        struct ogg_stream *VAR_7 = VAR_3->streams + VAR_5;
        VAR_7->buf = FUNC_2(VAR_7->bufsize + VAR_0);
        if (VAR_7->buf)
            FUNC_4(VAR_7->buf, VAR_4->streams[VAR_5].buf, VAR_7->bufpos);
        else
            VAR_6 = FUNC_0(VAR_1);
        VAR_7->new_metadata = ((void*)0);
        VAR_7->new_metadata_size = 0;
    }

    VAR_3->state = VAR_4;

    if (VAR_6 < 0)
        FUNC_5(VAR_2);

    return VAR_6;
}
