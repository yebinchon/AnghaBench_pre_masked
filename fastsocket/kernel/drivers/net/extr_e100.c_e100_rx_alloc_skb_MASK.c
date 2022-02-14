
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rx {TYPE_2__* prev; scalar_t__ dma_addr; TYPE_3__* skb; } ;
struct rfd {int link; } ;
struct nic {int pdev; int blank_rfd; int netdev; } ;
struct TYPE_8__ {int data; } ;
struct TYPE_7__ {int dma_addr; TYPE_1__* skb; } ;
struct TYPE_6__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,int ,int,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (scalar_t__,int *) ;
 int FUNC_6 (TYPE_3__*,int *,int) ;

__attribute__((used)) static int FUNC_7(struct nic *VAR_3, struct rx *VAR_4)
{
 if (!(VAR_4->skb = FUNC_1(VAR_3->netdev, VAR_2)))
  return -VAR_0;


 FUNC_6(VAR_4->skb, &VAR_3->blank_rfd, sizeof(struct rfd));
 VAR_4->dma_addr = FUNC_4(VAR_3->pdev, VAR_4->skb->data,
  VAR_2, VAR_1);

 if (FUNC_2(VAR_3->pdev, VAR_4->dma_addr)) {
  FUNC_0(VAR_4->skb);
  VAR_4->skb = ((void*)0);
  VAR_4->dma_addr = 0;
  return -VAR_0;
 }




 if (VAR_4->prev->skb) {
  struct rfd *VAR_5 = (struct rfd *)VAR_4->prev->skb->data;
  FUNC_5(VAR_4->dma_addr, &VAR_5->link);
  FUNC_3(VAR_3->pdev, VAR_4->prev->dma_addr,
   sizeof(struct rfd), VAR_1);
 }

 return 0;
}
