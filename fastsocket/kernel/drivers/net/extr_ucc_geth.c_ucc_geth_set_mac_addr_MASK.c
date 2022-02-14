
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucc_geth_private {int lock; TYPE_1__* ug_regs; } ;
struct sockaddr {int sa_data; } ;
struct net_device {int * dev_addr; int addr_len; } ;
struct TYPE_2__ {int macstnaddr2; int macstnaddr1; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;
 struct ucc_geth_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_1, void *VAR_2)
{
 struct ucc_geth_private *VAR_3 = FUNC_3(VAR_1);
 struct sockaddr *VAR_4 = VAR_2;

 if (!FUNC_1(VAR_4->sa_data))
  return -VAR_0;

 FUNC_2(VAR_1->dev_addr, VAR_4->sa_data, VAR_1->addr_len);





 if (!FUNC_4(VAR_1))
  return 0;

 FUNC_5(&VAR_3->lock);
 FUNC_0(VAR_1->dev_addr[0],
       VAR_1->dev_addr[1],
       VAR_1->dev_addr[2],
       VAR_1->dev_addr[3],
       VAR_1->dev_addr[4],
       VAR_1->dev_addr[5],
       &VAR_3->ug_regs->macstnaddr1,
       &VAR_3->ug_regs->macstnaddr2);
 FUNC_6(&VAR_3->lock);

 return 0;
}
