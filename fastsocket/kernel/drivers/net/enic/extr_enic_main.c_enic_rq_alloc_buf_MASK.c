
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnic_rq {int vdev; } ;
struct sk_buff {int data; } ;
struct net_device {unsigned int mtu; } ;
struct enic {int pdev; struct net_device* netdev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct vnic_rq*,struct sk_buff*,unsigned int,int ,unsigned int) ;
 struct sk_buff* FUNC_1 (struct net_device*,unsigned int) ;
 int FUNC_2 (int ,int ,unsigned int,int ) ;
 struct enic* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct vnic_rq *VAR_3)
{
 struct enic *VAR_4 = FUNC_3(VAR_3->vdev);
 struct net_device *VAR_5 = VAR_4->netdev;
 struct sk_buff *VAR_6;
 unsigned int VAR_7 = VAR_5->mtu + VAR_2;
 unsigned int VAR_8 = 0;
 dma_addr_t VAR_9;

 VAR_6 = FUNC_1(VAR_5, VAR_7);
 if (!VAR_6)
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_4->pdev, VAR_6->data,
  VAR_7, VAR_1);

 FUNC_0(VAR_3, VAR_6, VAR_8,
  VAR_9, VAR_7);

 return 0;
}
