
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int size; } ;
struct TYPE_9__ {TYPE_5__* last_pkt_props; } ;
struct TYPE_8__ {int size; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVCodecInternal ;


 int FUNC_0 (TYPE_5__*,TYPE_1__ const*) ;
 int FUNC_1 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_2(AVCodecInternal *VAR_0, const AVPacket *VAR_1)
{
    int VAR_2 = 0;

    FUNC_1(VAR_0->last_pkt_props);
    if (VAR_1) {
        VAR_2 = FUNC_0(VAR_0->last_pkt_props, VAR_1);
        if (!VAR_2)
            VAR_0->last_pkt_props->size = VAR_1->size;
    }
    return VAR_2;
}
