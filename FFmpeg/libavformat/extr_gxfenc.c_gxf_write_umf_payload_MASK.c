
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nb_streams; int * pb; TYPE_1__* priv_data; } ;
struct TYPE_4__ {int umf_length; int umf_track_offset; int umf_track_size; int umf_media_offset; int umf_media_size; } ;
typedef TYPE_1__ GXFContext ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_0)
{
    GXFContext *VAR_1 = VAR_0->priv_data;
    AVIOContext *VAR_2 = VAR_0->pb;

    FUNC_0(VAR_2, VAR_1->umf_length);
    FUNC_0(VAR_2, 3);
    FUNC_0(VAR_2, VAR_0->nb_streams+1);
    FUNC_0(VAR_2, VAR_1->umf_track_offset);
    FUNC_0(VAR_2, VAR_1->umf_track_size);
    FUNC_0(VAR_2, VAR_0->nb_streams+1);
    FUNC_0(VAR_2, VAR_1->umf_media_offset);
    FUNC_0(VAR_2, VAR_1->umf_media_size);
    FUNC_0(VAR_2, VAR_1->umf_length);
    FUNC_0(VAR_2, 0);
    FUNC_0(VAR_2, 0);
    FUNC_0(VAR_2, 0);
    return 48;
}
