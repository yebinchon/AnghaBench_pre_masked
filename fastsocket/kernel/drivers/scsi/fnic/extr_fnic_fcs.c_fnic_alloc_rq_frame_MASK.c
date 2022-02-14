
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct vnic_rq {int vdev; } ;
struct sk_buff {int data; } ;
struct fnic {int pdev; TYPE_1__* lport; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int host; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct sk_buff* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct vnic_rq*,struct sk_buff*,int ,scalar_t__) ;
 int FUNC_3 (int ,int ,scalar_t__,int ) ;
 int FUNC_4 (struct sk_buff*,scalar_t__) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 struct fnic* FUNC_8 (int ) ;

int FUNC_9(struct vnic_rq *VAR_6)
{
 struct fnic *VAR_7 = FUNC_8(VAR_6->vdev);
 struct sk_buff *VAR_8;
 u16 VAR_9;
 dma_addr_t VAR_10;

 VAR_9 = VAR_1 + VAR_3 + VAR_2;
 VAR_8 = FUNC_1(VAR_9);
 if (!VAR_8) {
  FUNC_0(VAR_4, VAR_7->lport->host,
        "Unable to allocate RQ sk_buff\n");
  return -VAR_0;
 }
 FUNC_5(VAR_8);
 FUNC_7(VAR_8);
 FUNC_6(VAR_8);
 FUNC_4(VAR_8, VAR_9);
 VAR_10 = FUNC_3(VAR_7->pdev, VAR_8->data, VAR_9, VAR_5);
 FUNC_2(VAR_6, VAR_8, VAR_10, VAR_9);
 return 0;
}
