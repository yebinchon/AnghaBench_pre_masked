
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int metadata_header_padding; int pb; TYPE_1__* priv_data; } ;
struct TYPE_6__ {int queue_end; scalar_t__ queue; int id3; } ;
typedef TYPE_1__ MP3Context ;
typedef int AVPacket ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (scalar_t__*,int *,int *) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_0)
{
    MP3Context *VAR_1 = VAR_0->priv_data;
    AVPacket VAR_2;
    int VAR_3 = 0, VAR_4 = 1;

    FUNC_1(&VAR_1->id3, VAR_0->pb, VAR_0->metadata_header_padding);
    FUNC_4(VAR_0);

    while (VAR_1->queue) {
        FUNC_2(&VAR_1->queue, &VAR_1->queue_end, &VAR_2);
        if (VAR_4 && (VAR_3 = FUNC_3(VAR_0, &VAR_2)) < 0)
            VAR_4 = 0;
        FUNC_0(&VAR_2);
    }
    return VAR_3;
}
