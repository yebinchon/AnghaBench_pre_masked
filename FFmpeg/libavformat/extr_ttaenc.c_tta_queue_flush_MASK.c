
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_8__ {int size; int data; } ;
struct TYPE_7__ {int queue_end; scalar_t__ queue; } ;
typedef TYPE_1__ TTAMuxContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (scalar_t__*,int *,TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(AVFormatContext *VAR_0)
{
    TTAMuxContext *VAR_1 = VAR_0->priv_data;
    AVPacket VAR_2;

    while (VAR_1->queue) {
        FUNC_2(&VAR_1->queue, &VAR_1->queue_end, &VAR_2);
        FUNC_1(VAR_0->pb, VAR_2.data, VAR_2.size);
        FUNC_0(&VAR_2);
    }
}
