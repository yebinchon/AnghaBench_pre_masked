
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * pb; TYPE_1__* priv_data; } ;
struct TYPE_7__ {int size; int flags; int pts; int data; } ;
struct TYPE_6__ {int frames; } ;
typedef TYPE_1__ RCVContext ;
typedef TYPE_2__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_1, AVPacket *VAR_2)
{
    RCVContext *VAR_3 = VAR_1->priv_data;
    AVIOContext *VAR_4 = VAR_1->pb;

    if (!VAR_2->size)
        return 0;
    FUNC_0(VAR_4, VAR_2->size | ((VAR_2->flags & VAR_0) ? 0x80000000 : 0));
    FUNC_0(VAR_4, VAR_2->pts);
    FUNC_1(VAR_4, VAR_2->data, VAR_2->size);
    VAR_3->frames++;

    return 0;
}
