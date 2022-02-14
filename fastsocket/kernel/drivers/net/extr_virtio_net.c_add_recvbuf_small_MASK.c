
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtnet_info {int rvq; int dev; } ;
struct skb_vnet_hdr {int hdr; } ;
struct sk_buff {int len; } ;
struct scatterlist {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct scatterlist*,int *,int) ;
 int FUNC_3 (struct sk_buff*,scalar_t__) ;
 int FUNC_4 (struct sk_buff*,scalar_t__) ;
 int FUNC_5 (struct sk_buff*,struct scatterlist*,int ,int ) ;
 struct skb_vnet_hdr* FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int ,struct scatterlist*,int ,int,struct sk_buff*) ;

__attribute__((used)) static int FUNC_9(struct virtnet_info *VAR_3, gfp_t VAR_4)
{
 struct sk_buff *VAR_5;
 struct skb_vnet_hdr *VAR_6;
 struct scatterlist VAR_7[2];
 int VAR_8;

 VAR_5 = FUNC_1(VAR_3->dev, VAR_1 + VAR_2);
 if (FUNC_7(!VAR_5))
  return -VAR_0;

 FUNC_4(VAR_5, VAR_2);
 FUNC_3(VAR_5, VAR_1);

 VAR_6 = FUNC_6(VAR_5);
 FUNC_2(VAR_7, &VAR_6->hdr, sizeof VAR_6->hdr);

 FUNC_5(VAR_5, VAR_7 + 1, 0, VAR_5->len);

 VAR_8 = FUNC_8(VAR_3->rvq, VAR_7, 0, 2, VAR_5);
 if (VAR_8 < 0)
  FUNC_0(VAR_5);

 return VAR_8;
}
