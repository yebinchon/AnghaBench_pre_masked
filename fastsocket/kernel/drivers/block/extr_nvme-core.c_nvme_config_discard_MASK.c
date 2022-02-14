
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
struct nvme_ns {TYPE_2__* queue; } ;
struct TYPE_4__ {int max_discard_sectors; void* discard_granularity; void* discard_alignment; scalar_t__ discard_zeroes_data; } ;
struct TYPE_5__ {TYPE_1__ limits; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 void* FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(struct nvme_ns *VAR_1)
{
 u32 VAR_2 = FUNC_1(VAR_1->queue);
 VAR_1->queue->limits.discard_zeroes_data = 0;
 VAR_1->queue->limits.discard_alignment = VAR_2;
 VAR_1->queue->limits.discard_granularity = VAR_2;
 VAR_1->queue->limits.max_discard_sectors = 0xffffffff;
 FUNC_0(VAR_0, VAR_1->queue);
}
