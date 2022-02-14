
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ogg_stream {scalar_t__ lastpts; scalar_t__ lastdts; long long granule; TYPE_1__* codec; scalar_t__ page_end; } ;
struct ogg {struct ogg_stream* streams; } ;
typedef scalar_t__ int64_t ;
struct TYPE_6__ {struct ogg* priv_data; } ;
struct TYPE_5__ {scalar_t__ granule_is_start; } ;
typedef TYPE_2__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (TYPE_2__*,int,long long,scalar_t__*) ;

__attribute__((used)) static int64_t FUNC_1(AVFormatContext *VAR_1, int VAR_2, int64_t *VAR_3)
{
    struct ogg *VAR_4 = VAR_1->priv_data;
    struct ogg_stream *VAR_5 = VAR_4->streams + VAR_2;
    int64_t VAR_6 = VAR_0;

    if (VAR_3)
        *VAR_3 = VAR_0;

    if (VAR_5->lastpts != VAR_0) {
        VAR_6 = VAR_5->lastpts;
        VAR_5->lastpts = VAR_0;
    }
    if (VAR_5->lastdts != VAR_0) {
        if (VAR_3)
            *VAR_3 = VAR_5->lastdts;
        VAR_5->lastdts = VAR_0;
    }
    if (VAR_5->page_end) {
        if (VAR_5->granule != -1LL) {
            if (VAR_5->codec && VAR_5->codec->granule_is_start)
                VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_5->granule, VAR_3);
            else
                VAR_5->lastpts = FUNC_0(VAR_1, VAR_2, VAR_5->granule, &VAR_5->lastdts);
            VAR_5->granule = -1LL;
        }
    }
    return VAR_6;
}
