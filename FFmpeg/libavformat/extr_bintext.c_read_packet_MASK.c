
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_8__ {int flags; } ;
struct TYPE_7__ {int fsize; int chars_per_frame; } ;
typedef TYPE_1__ BinDemuxContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*,int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_2,
                           AVPacket *VAR_3)
{
    BinDemuxContext *VAR_4 = VAR_2->priv_data;

    if (VAR_4->fsize > 0) {
        if (FUNC_1(VAR_2->pb, VAR_3, VAR_4->fsize) < 0)
            return FUNC_0(VAR_1);
        VAR_4->fsize = -1;
    } else if (!VAR_4->fsize) {
        if (FUNC_2(VAR_2->pb))
            return FUNC_0(VAR_1);
        if (FUNC_1(VAR_2->pb, VAR_3, VAR_4->chars_per_frame) < 0)
            return FUNC_0(VAR_1);
    } else {
        return FUNC_0(VAR_1);
    }

    VAR_3->flags |= VAR_0;
    return 0;
}
