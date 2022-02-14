
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int mxf_essence_element_key ;
struct TYPE_10__ {int nb_streams; TYPE_1__** streams; } ;
struct TYPE_9__ {scalar_t__ key; } ;
struct TYPE_8__ {int body_sid; int track_number; } ;
struct TYPE_7__ {TYPE_2__* priv_data; } ;
typedef TYPE_2__ MXFTrack ;
typedef TYPE_3__ KLVPacket ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_0, KLVPacket *VAR_1, int VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_0->nb_streams; VAR_3++) {
        MXFTrack *VAR_4 = VAR_0->streams[VAR_3]->priv_data;

        if (VAR_4 && (!VAR_2 || !VAR_4->body_sid || VAR_4->body_sid == VAR_2) && !FUNC_0(VAR_1->key + sizeof(mxf_essence_element_key), VAR_4->track_number, sizeof(VAR_4->track_number)))
            return VAR_3;
    }

    return VAR_0->nb_streams == 1 && VAR_0->streams[0]->priv_data ? 0 : -1;
}
