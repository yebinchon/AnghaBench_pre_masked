
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_18__ ;
typedef struct TYPE_19__ TYPE_16__ ;


struct TYPE_19__ {int size; } ;
struct TYPE_23__ {int serial; int nb_sp_pairs; int nb_st_pairs; int last_pts; int last_serial; TYPE_18__* st_pairs; TYPE_2__* sp_pairs; TYPE_16__ thumbnail; } ;
typedef TYPE_3__ WtvContext ;
struct TYPE_26__ {TYPE_4__** streams; TYPE_3__* priv_data; int * pb; } ;
struct TYPE_25__ {size_t stream_index; int pts; scalar_t__ size; int data; } ;
struct TYPE_24__ {TYPE_1__* codecpar; } ;
struct TYPE_22__ {int serial; } ;
struct TYPE_21__ {scalar_t__ codec_id; } ;
struct TYPE_20__ {int value; } ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_6__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_18__**,int*,int,int) ;
 int FUNC_2 (TYPE_16__*,TYPE_5__*) ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 int FUNC_4 (TYPE_6__*,TYPE_4__*,TYPE_5__*) ;
 int VAR_4 ;
 int FUNC_5 (TYPE_6__*,int *,scalar_t__,scalar_t__) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_6__*,TYPE_5__*) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_5, AVPacket *VAR_6)
{
    AVIOContext *VAR_7 = VAR_5->pb;
    WtvContext *VAR_8 = VAR_5->priv_data;
    AVStream *VAR_9 = VAR_5->streams[VAR_6->stream_index];

    if (VAR_9->codecpar->codec_id == VAR_1 && !VAR_8->thumbnail.size) {
        FUNC_2(&VAR_8->thumbnail, VAR_6);
        return 0;
    } else if (VAR_9->codecpar->codec_id == VAR_0) {
        int VAR_10 = FUNC_4(VAR_5, VAR_9, VAR_6);
        if (VAR_10 < 0)
            return VAR_10;
    }


    if (VAR_8->serial - (VAR_8->nb_sp_pairs ? VAR_8->sp_pairs[VAR_8->nb_sp_pairs - 1].serial : 0) >= 50)
        FUNC_7(VAR_5);


    if (VAR_6->pts != VAR_2 && VAR_6->pts - (VAR_8->nb_st_pairs ? VAR_8->st_pairs[VAR_8->nb_st_pairs - 1].value : 0) >= 5000000)
        FUNC_1(&VAR_8->st_pairs, &VAR_8->nb_st_pairs, VAR_8->serial, VAR_6->pts);

    if (VAR_6->pts != VAR_2 && VAR_6->pts > VAR_8->last_pts) {
        VAR_8->last_pts = VAR_6->pts;
        VAR_8->last_serial = VAR_8->serial;
    }


    FUNC_8(VAR_5, VAR_6);

    FUNC_5(VAR_5, &VAR_4, VAR_6->size, VAR_3 + VAR_6->stream_index);
    FUNC_3(VAR_7, VAR_6->data, VAR_6->size);
    FUNC_6(VAR_7, FUNC_0(VAR_6->size) - VAR_6->size);

    VAR_8->serial++;
    return 0;
}
