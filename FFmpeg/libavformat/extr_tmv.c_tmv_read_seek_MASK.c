
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_4__ {int audio_chunk_size; int video_chunk_size; int padding; scalar_t__ stream_index; } ;
typedef TYPE_1__ TMVContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_2, int VAR_3,
                         int64_t VAR_4, int VAR_5)
{
    TMVContext *VAR_6 = VAR_2->priv_data;
    int64_t VAR_7;

    if (VAR_3)
        return -1;

    VAR_7 = VAR_4 *
          (VAR_6->audio_chunk_size + VAR_6->video_chunk_size + VAR_6->padding);

    if (FUNC_0(VAR_2->pb, VAR_7 + VAR_1, VAR_0) < 0)
        return -1;
    VAR_6->stream_index = 0;
    return 0;
}
