
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ethhdr {int h_proto; } ;
struct dvb_net_priv {int ule_next_hdr; int ule_sndu_len; int ule_bridged; TYPE_1__* ule_skb; } ;
struct TYPE_2__ {int data; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1( struct dvb_net_priv *VAR_0 )
{
 struct ethhdr *VAR_1 = (struct ethhdr*) VAR_0->ule_next_hdr;
 if(FUNC_0(VAR_1->h_proto) < 1536) {
  int VAR_2 = VAR_0->ule_sndu_len - ((VAR_0->ule_next_hdr+sizeof(struct ethhdr)) - VAR_0->ule_skb->data);

  if(VAR_2 != FUNC_0(VAR_1->h_proto)) {
   return -1;
  }
 }






 VAR_0->ule_bridged = 1;
 return 0;
}
