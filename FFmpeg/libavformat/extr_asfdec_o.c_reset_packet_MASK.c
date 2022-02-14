
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int avpkt; scalar_t__ duration; scalar_t__ dts; scalar_t__ flags; scalar_t__ data_size; scalar_t__ size_left; } ;
typedef TYPE_1__ ASFPacket ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(ASFPacket *VAR_0)
{
    VAR_0->size_left = 0;
    VAR_0->data_size = 0;
    VAR_0->duration = 0;
    VAR_0->flags = 0;
    VAR_0->dts = 0;
    VAR_0->duration = 0;
    FUNC_1(&VAR_0->avpkt);
    FUNC_0(&VAR_0->avpkt);
}
