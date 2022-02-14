
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* int64_t ;
struct TYPE_9__ {int * pb; TYPE_1__* priv_data; } ;
struct TYPE_8__ {void* umf_start_offset; void* umf_length; int umf_media_size; int umf_track_size; } ;
typedef TYPE_1__ GXFContext ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 void* FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,void*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *,void*) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_1)
{
    GXFContext *VAR_2 = VAR_1->priv_data;
    AVIOContext *VAR_3 = VAR_1->pb;
    int64_t VAR_4 = FUNC_0(VAR_3);

    FUNC_3(VAR_3, VAR_0);


    FUNC_1(VAR_3, 3);
    FUNC_2(VAR_3, VAR_2->umf_length);

    VAR_2->umf_start_offset = FUNC_0(VAR_3);
    FUNC_6(VAR_1);
    FUNC_4(VAR_1);
    VAR_2->umf_track_size = FUNC_7(VAR_1);
    VAR_2->umf_media_size = FUNC_5(VAR_1);
    VAR_2->umf_length = FUNC_0(VAR_3) - VAR_2->umf_start_offset;
    return FUNC_8(VAR_3, VAR_4);
}
