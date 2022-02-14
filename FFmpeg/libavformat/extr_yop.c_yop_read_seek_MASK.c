
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_6__ {int frame_size; int odd_frame; int video_packet; } ;
typedef TYPE_2__ YopDecContext ;
struct TYPE_7__ {int pb; TYPE_1__* internal; TYPE_2__* priv_data; } ;
struct TYPE_5__ {int data_offset; } ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_1, int VAR_2,
                         int64_t VAR_3, int VAR_4)
{
    YopDecContext *VAR_5 = VAR_1->priv_data;
    int64_t VAR_6, VAR_7, VAR_8;
    int VAR_9;

    if (!VAR_2)
        return -1;

    VAR_7 = VAR_1->internal->data_offset;
    VAR_8 = FUNC_4(VAR_1->pb) - VAR_5->frame_size;
    VAR_9 = (VAR_8 - VAR_7) / VAR_5->frame_size;

    VAR_3 = FUNC_0(0, FUNC_1(VAR_9, VAR_3));

    VAR_6 = VAR_3 * VAR_5->frame_size + VAR_7;

    if (FUNC_3(VAR_1->pb, VAR_6, VAR_0) < 0)
        return -1;

    FUNC_2(&VAR_5->video_packet);
    VAR_5->odd_frame = VAR_3 & 1;

    return 0;
}
