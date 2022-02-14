
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netif {int mtu; int hwaddr_len; int * hwaddr; int flags; int linkoutput; int output; int * name; } ;
struct eth_addr {int dummy; } ;
struct bba_priv {int state; struct eth_addr* ethaddr; int tq_xmit; } ;
typedef struct bba_priv* dev_s ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct netif* VAR_7 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct bba_priv*,int ,int) ;
 int VAR_8 ;

dev_s FUNC_5(struct netif *VAR_9)
{
 struct bba_priv *VAR_10 = ((void*)0);

 FUNC_0(VAR_3, ("bba_create()\n"));

 VAR_10 = (struct bba_priv*)FUNC_3(sizeof(struct bba_priv));
 if(!VAR_10) {
  FUNC_1(("bba_create: out of memory for bba_priv\n"));
  return ((void*)0);
 }
 FUNC_4(VAR_10,0,sizeof(struct bba_priv));

 FUNC_2(&VAR_10->tq_xmit);
 FUNC_2(&VAR_8);

 VAR_9->name[0] = VAR_1;
 VAR_9->name[1] = VAR_2;
 VAR_9->output = VAR_6;
 VAR_9->linkoutput = VAR_5;
 VAR_9->mtu = 1500;
 VAR_9->flags = VAR_4;
 VAR_9->hwaddr_len = 6;

 VAR_10->ethaddr = (struct eth_addr*)&(VAR_9->hwaddr[0]);
 VAR_10->state = VAR_0;

 VAR_7 = VAR_9;
 return VAR_10;
}
