
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* keyframe_pts; } ;
struct TYPE_7__ {int nb_streams; TYPE_1__* priv_data; } ;
struct TYPE_6__ {TYPE_5__* time_base; TYPE_5__* chapter; TYPE_5__* stream; } ;
typedef TYPE_1__ NUTContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (TYPE_5__**) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(AVFormatContext *VAR_0)
{
    NUTContext *VAR_1 = VAR_0->priv_data;
    int VAR_2;

    FUNC_1(VAR_1);
    if (VAR_1->stream)
        for (VAR_2=0; VAR_2<VAR_0->nb_streams; VAR_2++)
            FUNC_0(&VAR_1->stream[VAR_2].keyframe_pts);

    FUNC_0(&VAR_1->stream);
    FUNC_0(&VAR_1->chapter);
    FUNC_0(&VAR_1->time_base);
}
