
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int error; } ;
struct TYPE_13__ {TYPE_2__* internal; TYPE_8__* pb; TYPE_1__* oformat; } ;
struct TYPE_12__ {int initialized; int streams_initialized; } ;
struct TYPE_11__ {int flags; int (* write_header ) (TYPE_3__*) ;} ;
typedef TYPE_3__ AVFormatContext ;
typedef int AVDictionary ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int **) ;
 int FUNC_1 (TYPE_8__*,int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;

int FUNC_6(AVFormatContext *VAR_4, AVDictionary **VAR_5)
{
    int VAR_6 = 0;
    int VAR_7 = VAR_4->internal->initialized;
    int VAR_8 = VAR_4->internal->streams_initialized;

    if (!VAR_7)
        if ((VAR_6 = FUNC_0(VAR_4, VAR_5)) < 0)
            return VAR_6;

    if (!(VAR_4->oformat->flags & VAR_0) && VAR_4->pb)
        FUNC_1(VAR_4->pb, VAR_3, VAR_1);
    if (VAR_4->oformat->write_header) {
        VAR_6 = VAR_4->oformat->write_header(VAR_4);
        if (VAR_6 >= 0 && VAR_4->pb && VAR_4->pb->error < 0)
            VAR_6 = VAR_4->pb->error;
        if (VAR_6 < 0)
            goto fail;
        FUNC_3(VAR_4);
    }
    if (!(VAR_4->oformat->flags & VAR_0) && VAR_4->pb)
        FUNC_1(VAR_4->pb, VAR_3, VAR_2);

    if (!VAR_4->internal->streams_initialized) {
        if ((VAR_6 = FUNC_4(VAR_4)) < 0)
            goto fail;
    }

    return VAR_8;

fail:
    FUNC_2(VAR_4);
    return VAR_6;
}
