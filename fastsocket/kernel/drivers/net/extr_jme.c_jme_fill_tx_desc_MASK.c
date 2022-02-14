
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int flags; int vlan; int mss; int pktsize; } ;
struct txdesc {TYPE_1__ desc1; scalar_t__* dw; } ;
struct sk_buff {int len; } ;
struct jme_ring {struct jme_buffer_info* bufinf; scalar_t__ desc; } ;
struct jme_buffer_info {unsigned long start_xmit; int len; struct sk_buff* skb; scalar_t__ nr_desc; } ;
struct jme_adapter {struct jme_ring* txring; } ;
struct TYPE_4__ {scalar_t__ nr_frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned long VAR_2 ;
 int FUNC_1 (struct jme_adapter*,struct sk_buff*,int) ;
 int FUNC_2 (struct jme_adapter*,struct sk_buff*,int*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int *,int*) ;
 int FUNC_4 (struct sk_buff*,int *,int*) ;
 TYPE_2__* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 () ;

__attribute__((used)) static int
FUNC_7(struct jme_adapter *VAR_3, struct sk_buff *VAR_4, int VAR_5)
{
 struct jme_ring *VAR_6 = &(VAR_3->txring[0]);
 struct txdesc *VAR_7;
 struct jme_buffer_info *VAR_8;
 u8 VAR_9;

 VAR_7 = (struct txdesc *)VAR_6->desc + VAR_5;
 VAR_8 = VAR_6->bufinf + VAR_5;

 VAR_7->dw[0] = 0;
 VAR_7->dw[1] = 0;
 VAR_7->dw[2] = 0;
 VAR_7->dw[3] = 0;
 VAR_7->desc1.pktsize = FUNC_0(VAR_4->len);







 FUNC_6();
 VAR_9 = VAR_1 | VAR_0;



 if (FUNC_3(VAR_4, &VAR_7->desc1.mss, &VAR_9))
  FUNC_2(VAR_3, VAR_4, &VAR_9);
 FUNC_4(VAR_4, &VAR_7->desc1.vlan, &VAR_9);
 FUNC_1(VAR_3, VAR_4, VAR_5);
 VAR_7->desc1.flags = VAR_9;




 FUNC_6();
 VAR_8->nr_desc = FUNC_5(VAR_4)->nr_frags + 2;
 VAR_8->skb = VAR_4;
 VAR_8->len = VAR_4->len;
 VAR_8->start_xmit = VAR_2;
 if (!VAR_8->start_xmit)
  VAR_8->start_xmit = (0UL-1);

 return 0;
}
