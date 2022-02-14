
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct virtnet_info {int num; int rvq; } ;
struct TYPE_5__ {int num_buffers; } ;
struct skb_vnet_hdr {TYPE_1__ mhdr; } ;
struct sk_buff {TYPE_3__* dev; } ;
struct page {int dummy; } ;
struct TYPE_8__ {int nr_frags; } ;
struct TYPE_6__ {int rx_length_errors; } ;
struct TYPE_7__ {TYPE_2__ stats; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (struct sk_buff*,struct page*,int ,int*) ;
 TYPE_4__* FUNC_2 (struct sk_buff*) ;
 struct skb_vnet_hdr* FUNC_3 (struct sk_buff*) ;
 struct page* FUNC_4 (int ,int*) ;

__attribute__((used)) static int FUNC_5(struct virtnet_info *VAR_3, struct sk_buff *VAR_4)
{
 struct skb_vnet_hdr *VAR_5 = FUNC_3(VAR_4);
 struct page *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 VAR_7 = VAR_5->mhdr.num_buffers;
 while (--VAR_7) {
  VAR_8 = FUNC_2(VAR_4)->nr_frags;
  if (VAR_8 >= VAR_1) {
   FUNC_0("%s: packet too long\n", VAR_4->dev->name);
   VAR_4->dev->stats.rx_length_errors++;
   return -VAR_0;
  }

  VAR_6 = FUNC_4(VAR_3->rvq, &VAR_9);
  if (!VAR_6) {
   FUNC_0("%s: rx error: %d buffers missing\n",
     VAR_4->dev->name, VAR_5->mhdr.num_buffers);
   VAR_4->dev->stats.rx_length_errors++;
   return -VAR_0;
  }
  if (VAR_9 > VAR_2)
   VAR_9 = VAR_2;

  FUNC_1(VAR_4, VAR_6, 0, &VAR_9);

  --VAR_3->num;
 }
 return 0;
}
