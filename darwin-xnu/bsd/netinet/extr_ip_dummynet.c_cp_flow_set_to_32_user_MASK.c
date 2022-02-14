
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dn_flow_set_32 {int max_pkt_size; int avg_pkt_size; int lookup_weight; int lookup_step; int lookup_depth; int w_q_lookup; int c_4; int c_3; int c_2; int c_1; int max_p; int min_th; int max_th; int w_q; int backlogged; int last_expired; int rq_elements; int rq_size; int flow_mask; int plr; int qsize; int weight; int parent_nr; int flags_fs; int fs_nr; } ;
struct dn_flow_set {int max_pkt_size; int avg_pkt_size; int lookup_weight; int lookup_step; int lookup_depth; int w_q_lookup; int c_4; int c_3; int c_2; int c_1; int max_p; int min_th; int max_th; int w_q; int backlogged; int last_expired; int rq_elements; int rq_size; int flow_mask; int plr; int qsize; int weight; int parent_nr; int flags_fs; int fs_nr; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct dn_flow_set *VAR_1, struct dn_flow_set_32 *VAR_2)
{
 VAR_2->fs_nr = VAR_1->fs_nr;
 VAR_2->flags_fs = VAR_1->flags_fs ;
 VAR_2->parent_nr = VAR_1->parent_nr ;
 VAR_2->weight = VAR_1->weight ;
 VAR_2->qsize = VAR_1->qsize ;
 VAR_2->plr = VAR_1->plr ;
 VAR_2->flow_mask = VAR_1->flow_mask ;
 VAR_2->rq_size = VAR_1->rq_size ;
 VAR_2->rq_elements = VAR_1->rq_elements ;
 VAR_2->last_expired = VAR_1->last_expired ;
 VAR_2->backlogged = VAR_1->backlogged ;
 VAR_2->w_q = VAR_1->w_q ;
 VAR_2->max_th = VAR_1->max_th ;
 VAR_2->min_th = VAR_1->min_th ;
 VAR_2->max_p = VAR_1->max_p ;
 VAR_2->c_1 = VAR_1->c_1 ;
 VAR_2->c_2 = VAR_1->c_2 ;
 VAR_2->c_3 = VAR_1->c_3 ;
 VAR_2->c_4 = VAR_1->c_4 ;
 VAR_2->w_q_lookup = FUNC_0(VAR_0, VAR_1->w_q_lookup) ;
 VAR_2->lookup_depth = VAR_1->lookup_depth ;
 VAR_2->lookup_step = VAR_1->lookup_step ;
 VAR_2->lookup_weight = VAR_1->lookup_weight ;
 VAR_2->avg_pkt_size = VAR_1->avg_pkt_size ;
 VAR_2->max_pkt_size = VAR_1->max_pkt_size ;
}
