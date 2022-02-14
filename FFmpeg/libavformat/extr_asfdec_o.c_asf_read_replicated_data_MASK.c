
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int rep_data_len; } ;
struct TYPE_7__ {int data_size; int size_left; void* dts; int avpkt; } ;
struct TYPE_6__ {int * pb; TYPE_3__* priv_data; } ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;
typedef TYPE_2__ ASFPacket ;
typedef TYPE_3__ ASFContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_1, ASFPacket *VAR_2)
{
    ASFContext *VAR_3 = VAR_1->priv_data;
    AVIOContext *VAR_4 = VAR_1->pb;
    int VAR_5, VAR_6;

    if (!VAR_2->data_size) {
        VAR_6 = FUNC_1(VAR_4);
        if (VAR_6 <= 0)
            return VAR_0;
        if ((VAR_5 = FUNC_0(&VAR_2->avpkt, VAR_6)) < 0)
            return VAR_5;
        VAR_2->data_size = VAR_2->size_left = VAR_6;
    } else
        FUNC_2(VAR_4, 4);
    VAR_2->dts = FUNC_1(VAR_4);
    if (VAR_3->rep_data_len >= 8)
        FUNC_2(VAR_4, VAR_3->rep_data_len - 8);

    return 0;
}
