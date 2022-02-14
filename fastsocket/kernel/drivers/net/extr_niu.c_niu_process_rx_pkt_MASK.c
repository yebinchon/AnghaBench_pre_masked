
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u64 ;
typedef size_t u32 ;
struct sk_buff {int len; int protocol; int ip_summed; } ;
struct rx_ring_info {unsigned int rcr_index; size_t* rbr_sizes; size_t rbr_block_size; int rx_bytes; int rx_channel; int rx_packets; int rbr_refill_pending; int * rcr; } ;
struct page {size_t index; int * mapping; } ;
struct niu {int dev; int device; TYPE_1__* ops; } ;
struct napi_struct {int dummy; } ;
struct TYPE_2__ {int (* unmap_page ) (int ,size_t,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (struct rx_ring_info*,unsigned int) ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct page*) ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (struct napi_struct*,struct sk_buff*) ;
 struct sk_buff* FUNC_7 (int ,int ) ;
 struct page* FUNC_8 (struct rx_ring_info*,size_t,struct page***) ;
 int FUNC_9 (struct niu*,struct rx_ring_info*) ;
 int FUNC_10 (struct sk_buff*,struct page*,size_t,size_t) ;
 int FUNC_11 (struct sk_buff*,int ) ;
 int FUNC_12 (struct sk_buff*,int ) ;
 int FUNC_13 (int ,size_t,int ,int ) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(struct napi_struct *VAR_21, struct niu *VAR_22,
         struct rx_ring_info *VAR_23)
{
 unsigned int VAR_24 = VAR_23->rcr_index;
 struct sk_buff *VAR_25;
 int VAR_26, VAR_27;

 VAR_25 = FUNC_7(VAR_22->dev, VAR_19);
 if (FUNC_14(!VAR_25))
  return FUNC_9(VAR_22, VAR_23);

 VAR_27 = 0;
 while (1) {
  struct page *VAR_28, **VAR_29;
  u32 VAR_30, VAR_31;
  u64 VAR_32, VAR_33, VAR_34;

  VAR_27++;

  VAR_33 = FUNC_4(&VAR_23->rcr[VAR_24]);

  VAR_26 = (VAR_33 & VAR_8) >>
   VAR_9;
  VAR_26 -= VAR_3;

  VAR_32 = (VAR_33 & VAR_14) <<
   VAR_15;
  VAR_28 = FUNC_8(VAR_23, VAR_32, &VAR_29);

  VAR_30 = VAR_23->rbr_sizes[(VAR_33 & VAR_12) >>
      VAR_13];

  VAR_34 = VAR_32 & ~VAR_5;
  VAR_31 = VAR_30;
  if (VAR_27 == 1) {
   int VAR_35;

   VAR_34 += 2;
   VAR_31 -= 2;

   VAR_35 = (VAR_33 >> VAR_16);
   if ((VAR_35 == VAR_17 ||
        VAR_35 == VAR_18) &&
       !(VAR_33 & (VAR_11 |
         VAR_7)))
    VAR_25->ip_summed = VAR_1;
   else
    VAR_25->ip_summed = VAR_0;
  }
  if (!(VAR_33 & VAR_10))
   VAR_31 = VAR_26 - VAR_25->len;

  FUNC_10(VAR_25, VAR_28, VAR_34, VAR_31);
  if ((VAR_28->index + VAR_23->rbr_block_size) - VAR_30 == VAR_32) {
   *VAR_29 = (struct page *) VAR_28->mapping;
   VAR_22->ops->unmap_page(VAR_22->device, VAR_28->index,
         VAR_6, VAR_2);
   VAR_28->index = 0;
   VAR_28->mapping = ((void*)0);
   VAR_23->rbr_refill_pending++;
  } else
   FUNC_3(VAR_28);

  VAR_24 = FUNC_0(VAR_23, VAR_24);
  if (!(VAR_33 & VAR_10))
   break;

 }
 VAR_23->rcr_index = VAR_24;

 FUNC_12(VAR_25, VAR_4);
 FUNC_1(VAR_25, FUNC_5(VAR_26, VAR_20));

 VAR_23->rx_packets++;
 VAR_23->rx_bytes += VAR_25->len;

 VAR_25->protocol = FUNC_2(VAR_25, VAR_22->dev);
 FUNC_11(VAR_25, VAR_23->rx_channel);
 FUNC_6(VAR_21, VAR_25);

 return VAR_27;
}
