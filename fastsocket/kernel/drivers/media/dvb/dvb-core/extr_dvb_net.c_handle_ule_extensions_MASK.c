
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_net_priv {int ule_sndu_type; int ule_next_hdr; TYPE_1__* ule_skb; } ;
struct TYPE_2__ {int data; } ;


 int FUNC_0 (char*,int ,int,int,int) ;
 int FUNC_1 (struct dvb_net_priv*) ;

__attribute__((used)) static int FUNC_2( struct dvb_net_priv *VAR_0 )
{
 int VAR_1 = 0, VAR_2;

 VAR_0->ule_next_hdr = VAR_0->ule_skb->data;
 do {
  VAR_2 = FUNC_1( VAR_0 );
  if (VAR_2 < 0)
   return VAR_2;
  VAR_1 += VAR_2;






 } while (VAR_0->ule_sndu_type < 1536);

 return VAR_1;
}
