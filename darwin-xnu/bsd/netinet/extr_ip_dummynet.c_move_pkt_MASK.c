
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {struct mbuf* m_nextpkt; } ;
struct dn_pkt_tag {scalar_t__ dn_output_time; } ;
struct dn_pipe {struct mbuf* tail; struct mbuf* head; scalar_t__ delay; } ;
struct dn_flow_queue {int len_bytes; int len; struct mbuf* head; } ;


 scalar_t__ VAR_0 ;
 struct dn_pkt_tag* FUNC_0 (struct mbuf*) ;

__attribute__((used)) static void
FUNC_1(struct mbuf *VAR_1, struct dn_flow_queue *VAR_2,
 struct dn_pipe *VAR_3, int VAR_4)
{
    struct dn_pkt_tag *VAR_5 = FUNC_0(VAR_1);

    VAR_2->head = VAR_1->m_nextpkt ;
    VAR_2->len-- ;
    VAR_2->len_bytes -= VAR_4 ;

    VAR_5->dn_output_time = VAR_0 + VAR_3->delay ;

    if (VAR_3->head == ((void*)0))
 VAR_3->head = VAR_1;
    else
 VAR_3->tail->m_nextpkt = VAR_1;
    VAR_3->tail = VAR_1;
    VAR_3->tail->m_nextpkt = ((void*)0);
}
