
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int using_webp_anim_encoder; int wrote_webp_header; int frame_count; int last_pkt; } ;
typedef TYPE_1__ WebpContext ;
struct TYPE_11__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_10__ {int pts; int size; int data; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_0, AVPacket *VAR_1)
{
    WebpContext *VAR_2 = VAR_0->priv_data;
    VAR_2->using_webp_anim_encoder |= FUNC_3(VAR_1);

    if (VAR_2->using_webp_anim_encoder) {
        FUNC_1(VAR_0->pb, VAR_1->data, VAR_1->size);
        VAR_2->wrote_webp_header = 1;
    } else {
        int VAR_3;
        if ((VAR_3 = FUNC_2(VAR_0, 0, VAR_1->pts)) < 0)
            return VAR_3;
        FUNC_0(&VAR_2->last_pkt, VAR_1);
    }
    ++VAR_2->frame_count;

    return 0;
}
