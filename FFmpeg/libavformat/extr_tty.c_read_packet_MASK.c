
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_7__ {int chars_per_frame; scalar_t__ fsize; } ;
typedef TYPE_1__ TtyDemuxContext ;
struct TYPE_9__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_8__ {int size; int flags; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_2, AVPacket *VAR_3)
{
    TtyDemuxContext *VAR_4 = VAR_2->priv_data;
    int VAR_5;

    if (FUNC_1(VAR_2->pb))
        return VAR_0;

    VAR_5 = VAR_4->chars_per_frame;
    if (VAR_4->fsize) {

        uint64_t VAR_6 = FUNC_2(VAR_2->pb);
        if (VAR_6 == VAR_4->fsize)
            return VAR_0;
        if (VAR_6 + VAR_4->chars_per_frame > VAR_4->fsize)
            VAR_5 = VAR_4->fsize - VAR_6;
    }

    VAR_3->size = FUNC_0(VAR_2->pb, VAR_3, VAR_5);
    if (VAR_3->size < 0)
        return VAR_3->size;
    VAR_3->flags |= VAR_1;
    return 0;
}
