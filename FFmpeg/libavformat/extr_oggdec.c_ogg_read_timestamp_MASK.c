
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct ogg_stream {int flags; int pflags; scalar_t__ keyframe_seek; int * codec; } ;
struct ogg {struct ogg_stream* streams; } ;
typedef scalar_t__ int64_t ;
struct TYPE_7__ {int * pb; struct ogg* priv_data; } ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int,int *) ;
 int FUNC_3 (TYPE_1__*,int*,int*,int*,scalar_t__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int,int,int) ;

__attribute__((used)) static int64_t FUNC_6(AVFormatContext *VAR_6, int VAR_7,
                                  int64_t *VAR_8, int64_t VAR_9)
{
    struct ogg *VAR_10 = VAR_6->priv_data;
    AVIOContext *VAR_11 = VAR_6->pb;
    int64_t VAR_12 = VAR_0;
    int64_t VAR_13 = -1;
    int VAR_14;
    int VAR_15, VAR_16;
    FUNC_0(VAR_11, *VAR_8, VAR_4);
    FUNC_4(VAR_6);

    while ( FUNC_1(VAR_11) <= VAR_9
           && !FUNC_3(VAR_6, &VAR_14, &VAR_15, &VAR_16, VAR_8)) {
        if (VAR_14 == VAR_7) {
            struct ogg_stream *VAR_17 = VAR_10->streams + VAR_7;

            if ( (VAR_17->flags & VAR_3)
                && !(VAR_17->flags & VAR_2)
                && VAR_17->codec == &VAR_5)
                continue;
            VAR_12 = FUNC_2(VAR_6, VAR_14, ((void*)0));
            FUNC_5(VAR_6, VAR_14, VAR_15, VAR_16);
            if (VAR_17->pflags & VAR_1) {
                VAR_13 = *VAR_8;
            } else if (VAR_17->keyframe_seek) {


                if (VAR_13 >= 0)
                    *VAR_8 = VAR_13;
                else
                    VAR_12 = VAR_0;
            }
        }
        if (VAR_12 != VAR_0)
            break;
    }
    FUNC_4(VAR_6);
    return VAR_12;
}
