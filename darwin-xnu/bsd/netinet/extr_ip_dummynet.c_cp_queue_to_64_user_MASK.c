
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dn_flow_queue_64 {int F; int S; int sched_time; int heap_pos; int q_time; int random; int count; int avg; int hash_slot; int drops; int tot_bytes; int tot_pkts; int numbytes; int len_bytes; int len; int id; } ;
struct dn_flow_queue {int F; int S; int sched_time; int heap_pos; int q_time; int random; int count; int avg; int hash_slot; int drops; int tot_bytes; int tot_pkts; int numbytes; int len_bytes; int len; int id; } ;



__attribute__((used)) static
void FUNC_0( struct dn_flow_queue *VAR_0, struct dn_flow_queue_64 *VAR_1)
{
 VAR_1->id = VAR_0->id;
 VAR_1->len = VAR_0->len;
 VAR_1->len_bytes = VAR_0->len_bytes;
 VAR_1->numbytes = VAR_0->numbytes;
 VAR_1->tot_pkts = VAR_0->tot_pkts;
 VAR_1->tot_bytes = VAR_0->tot_bytes;
 VAR_1->drops = VAR_0->drops;
 VAR_1->hash_slot = VAR_0->hash_slot;
 VAR_1->avg = VAR_0->avg;
 VAR_1->count = VAR_0->count;
 VAR_1->random = VAR_0->random;
 VAR_1->q_time = VAR_0->q_time;
 VAR_1->heap_pos = VAR_0->heap_pos;
 VAR_1->sched_time = VAR_0->sched_time;
 VAR_1->S = VAR_0->S;
 VAR_1->F = VAR_0->F;
}
