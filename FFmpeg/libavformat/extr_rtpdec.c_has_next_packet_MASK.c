
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_5__ {scalar_t__ seq; TYPE_1__* queue; } ;
struct TYPE_4__ {scalar_t__ seq; } ;
typedef TYPE_2__ RTPDemuxContext ;



__attribute__((used)) static int FUNC_0(RTPDemuxContext *VAR_0)
{
    return VAR_0->queue && VAR_0->queue->seq == (uint16_t) (VAR_0->seq + 1);
}
