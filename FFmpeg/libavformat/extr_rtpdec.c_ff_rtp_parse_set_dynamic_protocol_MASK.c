
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int const* handler; int * dynamic_protocol_context; } ;
typedef int RTPDynamicProtocolHandler ;
typedef TYPE_1__ RTPDemuxContext ;
typedef int PayloadContext ;



void FUNC_0(RTPDemuxContext *VAR_0, PayloadContext *VAR_1,
                                       const RTPDynamicProtocolHandler *VAR_2)
{
    VAR_0->dynamic_protocol_context = VAR_1;
    VAR_0->handler = VAR_2;
}
