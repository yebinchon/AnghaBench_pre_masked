
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff_head {int dummy; } ;
struct sk_buff {scalar_t__ ip_summed; scalar_t__ len; int protocol; int data; } ;
struct page {int dummy; } ;
struct TYPE_6__ {int rx_bytes; int rx_packets; int rx_errors; } ;
struct net_device {TYPE_2__ stats; } ;
struct TYPE_8__ {unsigned int offset; struct page* page; } ;
struct TYPE_7__ {TYPE_1__* frags; } ;
struct TYPE_5__ {struct page* page; } ;


 scalar_t__ VAR_0 ;
 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct page*) ;
 struct sk_buff* FUNC_2 (struct sk_buff_head*) ;
 int FUNC_3 (struct sk_buff*,struct net_device*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,void*,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 void* FUNC_7 (struct page*) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 TYPE_3__* FUNC_10 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_1,
     struct sk_buff_head *VAR_2)
{
 int VAR_3 = 0;
 struct sk_buff *VAR_4;

 while ((VAR_4 = FUNC_2(VAR_2)) != ((void*)0)) {
  struct page *VAR_5 = FUNC_0(VAR_4)->page;
  void *VAR_6 = FUNC_7(VAR_5);
  unsigned VAR_7 = FUNC_0(VAR_4)->offset;

  FUNC_5(VAR_4->data, VAR_6 + VAR_7,
         FUNC_9(VAR_4));

  if (VAR_5 != FUNC_10(VAR_4)->frags[0].page)
   FUNC_1(VAR_5);


  VAR_4->protocol = FUNC_3(VAR_4, VAR_1);

  if (VAR_4->ip_summed == VAR_0) {
   if (FUNC_8(VAR_4)) {
    FUNC_4(VAR_4);
    VAR_3++;
    VAR_1->stats.rx_errors++;
    continue;
   }
  }

  VAR_1->stats.rx_packets++;
  VAR_1->stats.rx_bytes += VAR_4->len;


  FUNC_6(VAR_4);
 }

 return VAR_3;
}
