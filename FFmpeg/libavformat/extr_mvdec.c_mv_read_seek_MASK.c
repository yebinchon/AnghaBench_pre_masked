
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_7__ {int nb_streams; TYPE_1__* pb; int ** streams; TYPE_2__* priv_data; } ;
struct TYPE_6__ {int* frame; } ;
struct TYPE_5__ {int seekable; } ;
typedef TYPE_2__ MvContext ;
typedef int AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_6, int VAR_7,
                        int64_t VAR_8, int VAR_9)
{
    MvContext *VAR_10 = VAR_6->priv_data;
    AVStream *VAR_11 = VAR_6->streams[VAR_7];
    int VAR_12, VAR_13;

    if ((VAR_9 & VAR_3) || (VAR_9 & VAR_2))
        return FUNC_0(VAR_5);

    if (!(VAR_6->pb->seekable & VAR_1))
        return FUNC_0(VAR_4);

    VAR_12 = FUNC_1(VAR_11, VAR_8, VAR_9);
    if (VAR_12 < 0)
        return VAR_0;

    for (VAR_13 = 0; VAR_13 < VAR_6->nb_streams; VAR_13++)
        VAR_10->frame[VAR_13] = VAR_12;
    return 0;
}
