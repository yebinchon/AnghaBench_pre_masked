
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ogg_stream {int new_metadata; int private; TYPE_1__* codec; int buf; } ;
struct ogg {struct ogg_stream* streams; } ;
struct TYPE_6__ {struct ogg* priv_data; } ;
struct TYPE_5__ {int (* cleanup ) (TYPE_2__*,int) ;} ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_2(AVFormatContext *VAR_0, int VAR_1)
{
    struct ogg *VAR_2 = VAR_0->priv_data;
    struct ogg_stream *VAR_3 = &VAR_2->streams[VAR_1];

    FUNC_0(&VAR_3->buf);
    if (VAR_3->codec &&
        VAR_3->codec->cleanup) {
        VAR_3->codec->cleanup(VAR_0, VAR_1);
    }

    FUNC_0(&VAR_3->private);
    FUNC_0(&VAR_3->new_metadata);
}
