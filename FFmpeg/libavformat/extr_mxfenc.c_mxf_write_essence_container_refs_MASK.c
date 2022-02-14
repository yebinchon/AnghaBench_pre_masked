
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int container_ul; } ;
struct TYPE_11__ {int nb_streams; TYPE_1__** streams; int * pb; TYPE_3__* priv_data; } ;
struct TYPE_10__ {int essence_container_count; } ;
struct TYPE_9__ {scalar_t__* track_essence_element_key; size_t index; } ;
struct TYPE_8__ {TYPE_2__* priv_data; } ;
typedef TYPE_2__ MXFStreamContext ;
typedef TYPE_3__ MXFContext ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,int ,char*,int) ;
 int FUNC_2 (int *,int ,int) ;
 int VAR_1 ;
 TYPE_6__* VAR_2 ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(AVFormatContext *VAR_3)
{
    MXFContext *VAR_4 = VAR_3->priv_data;
    AVIOContext *VAR_5 = VAR_3->pb;
    int VAR_6;

    FUNC_3(VAR_5, FUNC_0(VAR_4->essence_container_count));
    FUNC_1(VAR_3,VAR_0, "essence container count:%d\n", VAR_4->essence_container_count);
    for (VAR_6 = 0; VAR_6 < VAR_3->nb_streams; VAR_6++) {
        MXFStreamContext *VAR_7 = VAR_3->streams[VAR_6]->priv_data;

        if (VAR_7->track_essence_element_key[15] != 0)
            continue;
        FUNC_2(VAR_5, VAR_2[VAR_7->index].container_ul, 16);
        if (VAR_4->essence_container_count == 1)
            break;
    }

    if (VAR_4->essence_container_count > 1)
        FUNC_2(VAR_5, VAR_1, 16);
}
