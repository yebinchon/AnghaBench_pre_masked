
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_8__ {int nb_streams; TYPE_1__** streams; int * pb; TYPE_2__* priv_data; } ;
struct TYPE_7__ {int timecode_track; } ;
struct TYPE_6__ {int * priv_data; } ;
typedef TYPE_2__ GXFContext ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_3__*,int *,int) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_0)
{
    GXFContext *VAR_1 = VAR_0->priv_data;
    AVIOContext *VAR_2 = VAR_0->pb;
    int64_t VAR_3;
    int VAR_4;

    VAR_3 = FUNC_0(VAR_2);
    FUNC_1(VAR_2, 0);
    for (VAR_4 = 0; VAR_4 < VAR_0->nb_streams; ++VAR_4)
        FUNC_2(VAR_0, VAR_0->streams[VAR_4]->priv_data, VAR_4);

    FUNC_2(VAR_0, &VAR_1->timecode_track, VAR_0->nb_streams);

    return FUNC_3(VAR_2, VAR_3);
}
