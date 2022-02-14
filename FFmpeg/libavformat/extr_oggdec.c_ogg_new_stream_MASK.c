
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct ogg_stream {int header; int buf; int start_granule; scalar_t__ bufsize; int serial; } ;
struct ogg {int nstreams; struct ogg_stream* streams; scalar_t__ state; } ;
struct TYPE_9__ {struct ogg* priv_data; } ;
struct TYPE_8__ {int id; } ;
typedef TYPE_1__ AVStream ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;
 int FUNC_3 (scalar_t__) ;
 struct ogg_stream* FUNC_4 (struct ogg_stream*,size_t) ;
 scalar_t__ FUNC_5 (int,int,size_t*) ;
 TYPE_1__* FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (TYPE_1__*,int,int,int) ;
 int FUNC_8 (struct ogg_stream*,int ,int) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_6, uint32_t VAR_7)
{
    struct ogg *VAR_8 = VAR_6->priv_data;
    int VAR_9 = VAR_8->nstreams;
    AVStream *VAR_10;
    struct ogg_stream *VAR_11;
    size_t VAR_12;

    if (VAR_8->state) {
        FUNC_2(VAR_6, VAR_2, "New streams are not supposed to be added "
               "in between Ogg context save/restore operations.\n");
        return VAR_0;
    }


    if (FUNC_5(VAR_8->nstreams + 1, sizeof(*VAR_8->streams), &VAR_12) < 0 ||
        !(VAR_11 = FUNC_4(VAR_8->streams, VAR_12)))
        return FUNC_0(VAR_4);
    VAR_8->streams = VAR_11;
    VAR_11 = VAR_8->streams + VAR_9;
    FUNC_8(VAR_11, 0, sizeof(*VAR_11));
    VAR_11->serial = VAR_7;
    VAR_11->bufsize = VAR_3;
    VAR_11->buf = FUNC_3(VAR_11->bufsize + VAR_1);
    VAR_11->header = -1;
    VAR_11->start_granule = VAR_5;
    if (!VAR_11->buf)
        return FUNC_0(VAR_4);


    VAR_10 = FUNC_6(VAR_6, ((void*)0));
    if (!VAR_10) {
        FUNC_1(&VAR_11->buf);
        return FUNC_0(VAR_4);
    }
    VAR_10->id = VAR_9;
    FUNC_7(VAR_10, 64, 1, 1000000);

    VAR_8->nstreams++;
    return VAR_9;
}
