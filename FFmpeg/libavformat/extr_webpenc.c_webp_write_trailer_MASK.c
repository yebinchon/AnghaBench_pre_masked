
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int frame_count; scalar_t__ loop; scalar_t__ using_webp_anim_encoder; } ;
typedef TYPE_1__ WebpContext ;
struct TYPE_6__ {int pb; TYPE_1__* priv_data; } ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned int,int ) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (TYPE_2__*,int,int ) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_2)
{
    unsigned VAR_3;
    WebpContext *VAR_4 = VAR_2->priv_data;

    if (VAR_4->using_webp_anim_encoder) {
        if ((VAR_4->frame_count > 1) && VAR_4->loop) {
            FUNC_0(VAR_2->pb, 42, VAR_1);
            FUNC_2(VAR_2->pb, VAR_4->loop);
        }
    } else {
        int VAR_5;
        if ((VAR_5 = FUNC_4(VAR_2, 1, VAR_0)) < 0)
            return VAR_5;

        VAR_3 = FUNC_1(VAR_2->pb);
        FUNC_0(VAR_2->pb, 4, VAR_1);
        FUNC_3(VAR_2->pb, VAR_3 - 8);

        FUNC_0(VAR_2->pb, VAR_3, VAR_1);
    }

    return 0;
}
