
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ogg_stream {int psize; scalar_t__ new_metadata_size; int new_metadata; scalar_t__ pstart; scalar_t__ buf; } ;
struct ogg {struct ogg_stream* streams; } ;
struct TYPE_7__ {TYPE_1__** streams; struct ogg* priv_data; } ;
struct TYPE_6__ {scalar_t__ metadata; } ;
typedef TYPE_1__ AVStream ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,scalar_t__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_0, int VAR_1)
{
    struct ogg *VAR_2 = VAR_0->priv_data;
    struct ogg_stream *VAR_3 = VAR_2->streams + VAR_1;
    AVStream *VAR_4 = VAR_0->streams[VAR_1];
    int VAR_5;

    if (VAR_3->psize <= 8)
        return 0;


    FUNC_0(&VAR_4->metadata);
    VAR_5 = FUNC_4(VAR_0, VAR_4, VAR_3->buf + VAR_3->pstart + 7,
                                   VAR_3->psize - 8);
    if (VAR_5 < 0)
        return VAR_5;


    FUNC_1(&VAR_3->new_metadata);
    if (VAR_4->metadata) {
        VAR_3->new_metadata = FUNC_3(VAR_4->metadata, &VAR_3->new_metadata_size);

    } else {
        VAR_3->new_metadata = FUNC_2(1);
        VAR_3->new_metadata_size = 0;
    }

    return VAR_5;
}
