
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {TYPE_4__* priv_data; } ;
struct TYPE_10__ {int nb_elem; TYPE_3__* elem; } ;
struct TYPE_12__ {TYPE_2__ tracks; } ;
struct TYPE_9__ {int buf; } ;
struct TYPE_11__ {scalar_t__ type; TYPE_1__ audio; } ;
typedef TYPE_3__ MatroskaTrack ;
typedef TYPE_4__ MatroskaDemuxContext ;
typedef TYPE_5__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_2)
{
    MatroskaDemuxContext *VAR_3 = VAR_2->priv_data;
    MatroskaTrack *VAR_4 = VAR_3->tracks.elem;
    int VAR_5;

    FUNC_2(VAR_3);

    for (VAR_5 = 0; VAR_5 < VAR_3->tracks.nb_elem; VAR_5++)
        if (VAR_4[VAR_5].type == VAR_0)
            FUNC_0(&VAR_4[VAR_5].audio.buf);
    FUNC_1(VAR_1, VAR_3);

    return 0;
}
