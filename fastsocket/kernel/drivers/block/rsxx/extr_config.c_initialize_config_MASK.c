
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ latency; scalar_t__ count; int mode; } ;
struct TYPE_6__ {int cache_order; TYPE_1__ intr_coal; int vendor_id; void* stripe_size; void* block_size; } ;
struct TYPE_5__ {int version; } ;
struct rsxx_card_cfg {TYPE_3__ data; TYPE_2__ hdr; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct rsxx_card_cfg *VAR_4)
{
 VAR_4->hdr.version = VAR_0;

 VAR_4->data.block_size = VAR_1;
 VAR_4->data.stripe_size = VAR_1;
 VAR_4->data.vendor_id = VAR_3;
 VAR_4->data.cache_order = (-1);
 VAR_4->data.intr_coal.mode = VAR_2;
 VAR_4->data.intr_coal.count = 0;
 VAR_4->data.intr_coal.latency = 0;
}
