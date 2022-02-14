
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct TYPE_3__ {int parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct i596_rfd {void* cmd; void* b_next; struct i596_rfd* v_next; struct i596_rfd* v_prev; void* rbd; void* size; void* b_data; int v_data; struct sk_buff* skb; void* b_addr; } ;
struct i596_rbd {void* cmd; void* b_next; struct i596_rbd* v_next; struct i596_rbd* v_prev; void* rbd; void* size; void* b_data; int v_data; struct sk_buff* skb; void* b_addr; } ;
struct i596_private {struct i596_rfd* rbd_head; struct i596_rfd* rfd_head; struct i596_dma* dma; } ;
struct TYPE_4__ {void* rfd; } ;
struct i596_dma {struct i596_rfd* rfds; TYPE_2__ scb; struct i596_rfd* rbds; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,struct i596_dma*,int) ;
 void* VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int,int ) ;
 struct sk_buff* FUNC_4 (struct net_device*,int) ;
 struct i596_private* FUNC_5 (struct net_device*) ;
 int VAR_5 ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct i596_private*,struct i596_rfd*) ;

__attribute__((used)) static inline int FUNC_8(struct net_device *VAR_6)
{
 struct i596_private *VAR_7 = FUNC_5(VAR_6);
 struct i596_dma *VAR_8 = VAR_7->dma;
 int VAR_9;
 struct i596_rfd *VAR_10;
 struct i596_rbd *VAR_11;



 for (VAR_9 = 0, VAR_11 = VAR_8->rbds; VAR_9 < VAR_5; VAR_9++, VAR_11++) {
  dma_addr_t VAR_12;
  struct sk_buff *VAR_13 = FUNC_4(VAR_6, VAR_4 + 4);

  if (VAR_13 == ((void*)0))
   return -1;
  FUNC_6(VAR_13, 2);
  VAR_12 = FUNC_3(VAR_6->dev.parent, VAR_13->data,
       VAR_4, VAR_2);
  VAR_11->v_next = VAR_11+1;
  VAR_11->b_next = FUNC_2(FUNC_7(VAR_7, VAR_11+1));
  VAR_11->b_addr = FUNC_2(FUNC_7(VAR_7, VAR_11));
  VAR_11->skb = VAR_13;
  VAR_11->v_data = VAR_13->data;
  VAR_11->b_data = FUNC_2(VAR_12);
  VAR_11->size = FUNC_1(VAR_4);
 }
 VAR_7->rbd_head = VAR_8->rbds;
 VAR_11 = VAR_8->rbds + VAR_5 - 1;
 VAR_11->v_next = VAR_8->rbds;
 VAR_11->b_next = FUNC_2(FUNC_7(VAR_7, VAR_8->rbds));



 for (VAR_9 = 0, VAR_10 = VAR_8->rfds; VAR_9 < VAR_5; VAR_9++, VAR_10++) {
  VAR_10->rbd = VAR_3;
  VAR_10->v_next = VAR_10+1;
  VAR_10->v_prev = VAR_10-1;
  VAR_10->b_next = FUNC_2(FUNC_7(VAR_7, VAR_10+1));
  VAR_10->cmd = FUNC_1(VAR_1);
 }
 VAR_7->rfd_head = VAR_8->rfds;
 VAR_8->scb.rfd = FUNC_2(FUNC_7(VAR_7, VAR_8->rfds));
 VAR_10 = VAR_8->rfds;
 VAR_10->rbd = FUNC_2(FUNC_7(VAR_7, VAR_7->rbd_head));
 VAR_10->v_prev = VAR_8->rfds + VAR_5 - 1;
 VAR_10 = VAR_8->rfds + VAR_5 - 1;
 VAR_10->v_next = VAR_8->rfds;
 VAR_10->b_next = FUNC_2(FUNC_7(VAR_7, VAR_8->rfds));
 VAR_10->cmd = FUNC_1(VAR_0|VAR_1);

 FUNC_0(VAR_6, VAR_8, sizeof(struct i596_dma));
 return 0;
}
