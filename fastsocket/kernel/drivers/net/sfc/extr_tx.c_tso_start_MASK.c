
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tso_state {scalar_t__ protocol; scalar_t__ dma_flags; scalar_t__ unmap_len; scalar_t__ header_len; scalar_t__ out_len; int seqnum; scalar_t__ ipv4_id; scalar_t__ tcp_off; scalar_t__ ip_base_len; scalar_t__ ip_off; } ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct TYPE_4__ {int id; } ;
struct TYPE_3__ {unsigned int doff; int rst; int syn; int urg; int seq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (struct sk_buff const*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct sk_buff const*) ;
 scalar_t__ FUNC_6 (struct sk_buff const*) ;
 TYPE_1__* FUNC_7 (struct sk_buff const*) ;

__attribute__((used)) static void FUNC_8(struct tso_state *VAR_1, const struct sk_buff *VAR_2)
{
 VAR_1->ip_off = FUNC_5(VAR_2) - VAR_2->data;
 VAR_1->tcp_off = FUNC_6(VAR_2) - VAR_2->data;
 VAR_1->header_len = VAR_1->tcp_off + (FUNC_7(VAR_2)->doff << 2u);
 if (VAR_1->protocol == FUNC_1(VAR_0)) {
  VAR_1->ip_base_len = VAR_1->header_len - VAR_1->ip_off;
  VAR_1->ipv4_id = FUNC_4(FUNC_2(VAR_2)->id);
 } else {
  VAR_1->ip_base_len = VAR_1->header_len - VAR_1->tcp_off;
  VAR_1->ipv4_id = 0;
 }
 VAR_1->seqnum = FUNC_3(FUNC_7(VAR_2)->seq);

 FUNC_0(FUNC_7(VAR_2)->urg);
 FUNC_0(FUNC_7(VAR_2)->syn);
 FUNC_0(FUNC_7(VAR_2)->rst);

 VAR_1->out_len = VAR_2->len - VAR_1->header_len;
 VAR_1->unmap_len = 0;
 VAR_1->dma_flags = 0;
}
