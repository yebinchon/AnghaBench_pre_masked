
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int * len; int * addr; } ;
struct veth_msg {int token; TYPE_1__ data; int * skb; int dev; scalar_t__ in_use; } ;
struct veth_lpar_connection {int state; int remote_lp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (struct veth_lpar_connection*,struct veth_msg*) ;

__attribute__((used)) static void FUNC_6(struct veth_lpar_connection *VAR_2,
        struct veth_msg *VAR_3)
{
 u32 VAR_4, VAR_5;

 if (VAR_3->in_use) {
  VAR_3->in_use = 0;
  VAR_4 = VAR_3->data.addr[0];
  VAR_5 = VAR_3->data.len[0];

  if (!FUNC_1(VAR_3->dev, VAR_4))
   FUNC_2(VAR_3->dev, VAR_4, VAR_5,
     VAR_0);

  if (VAR_3->skb) {
   FUNC_0(VAR_3->skb);
   VAR_3->skb = ((void*)0);
  }

  FUNC_3(&VAR_3->data, 0, sizeof(VAR_3->data));
  FUNC_5(VAR_2, VAR_3);
 } else if (VAR_2->state & VAR_1) {
  FUNC_4("Non-pending frame (# %d) acked by LPAR %d.\n",
    VAR_2->remote_lp, VAR_3->token);
 }
}
