
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ogg_stream {int granule; int sync_pos; scalar_t__ new_metadata_size; int new_metadata; scalar_t__ end_trimming; void* lastpts; scalar_t__ got_data; scalar_t__ incomplete; scalar_t__ segp; scalar_t__ nsegs; scalar_t__ page_pos; void* lastdts; scalar_t__ psize; scalar_t__ pstart; scalar_t__ bufpos; } ;
struct ogg {int nstreams; int page_pos; int curidx; struct ogg_stream* streams; } ;
typedef scalar_t__ int64_t ;
struct TYPE_5__ {TYPE_1__* internal; int pb; struct ogg* priv_data; } ;
struct TYPE_4__ {scalar_t__ data_offset; } ;
typedef TYPE_2__ AVFormatContext ;


 void* VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_1)
{
    struct ogg *VAR_2 = VAR_1->priv_data;
    int VAR_3;
    int64_t VAR_4 = FUNC_1(VAR_1->pb);

    for (VAR_3 = 0; VAR_3 < VAR_2->nstreams; VAR_3++) {
        struct ogg_stream *VAR_5 = VAR_2->streams + VAR_3;
        VAR_5->bufpos = 0;
        VAR_5->pstart = 0;
        VAR_5->psize = 0;
        VAR_5->granule = -1;
        VAR_5->lastpts = VAR_0;
        VAR_5->lastdts = VAR_0;
        VAR_5->sync_pos = -1;
        VAR_5->page_pos = 0;
        VAR_5->nsegs = 0;
        VAR_5->segp = 0;
        VAR_5->incomplete = 0;
        VAR_5->got_data = 0;
        if (VAR_4 <= VAR_1->internal->data_offset) {
            VAR_5->lastpts = 0;
        }
        VAR_5->end_trimming = 0;
        FUNC_0(&VAR_5->new_metadata);
        VAR_5->new_metadata_size = 0;
    }

    VAR_2->page_pos = -1;
    VAR_2->curidx = -1;

    return 0;
}
