
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int end_ring; scalar_t__ deferred; scalar_t__ heartbeat_fail; scalar_t__ late_collision; scalar_t__ excessive_collisions; scalar_t__ excessive_deferral; scalar_t__ loss_carrier; scalar_t__ no_carrier; scalar_t__ underflow_error; scalar_t__ error_summary; scalar_t__ buffer1_size; scalar_t__ last_segment; scalar_t__ first_segment; } ;
struct TYPE_4__ {TYPE_1__ tx; } ;
struct dma_desc {TYPE_2__ des01; } ;



__attribute__((used)) static void FUNC_0(struct dma_desc *VAR_0)
{
 int VAR_1 = VAR_0->des01.tx.end_ring;


 VAR_0->des01.tx.first_segment = 0;
 VAR_0->des01.tx.last_segment = 0;
 VAR_0->des01.tx.buffer1_size = 0;


 VAR_0->des01.tx.error_summary = 0;
 VAR_0->des01.tx.underflow_error = 0;
 VAR_0->des01.tx.no_carrier = 0;
 VAR_0->des01.tx.loss_carrier = 0;
 VAR_0->des01.tx.excessive_deferral = 0;
 VAR_0->des01.tx.excessive_collisions = 0;
 VAR_0->des01.tx.late_collision = 0;
 VAR_0->des01.tx.heartbeat_fail = 0;
 VAR_0->des01.tx.deferred = 0;


 VAR_0->des01.tx.end_ring = VAR_1;

 return;
}
