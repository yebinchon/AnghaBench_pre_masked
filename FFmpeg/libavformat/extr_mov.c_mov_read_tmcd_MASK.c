
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* fc; } ;
struct TYPE_8__ {int timecode_track; } ;
struct TYPE_7__ {int nb_streams; TYPE_1__** streams; } ;
struct TYPE_6__ {TYPE_3__* priv_data; } ;
typedef TYPE_3__ MOVStreamContext ;
typedef TYPE_4__ MOVContext ;
typedef int MOVAtom ;
typedef int AVIOContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(MOVContext *VAR_1, AVIOContext *VAR_2, MOVAtom VAR_3)
{
    MOVStreamContext *VAR_4;

    if (VAR_1->fc->nb_streams < 1)
        return VAR_0;
    VAR_4 = VAR_1->fc->streams[VAR_1->fc->nb_streams - 1]->priv_data;
    VAR_4->timecode_track = FUNC_0(VAR_2);
    return 0;
}
