
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int flags; int tx_queue_len; int * netdev_ops; int * header_ops; } ;
struct TYPE_4__ {int isdn_device; int isdn_channel; int pre_device; int pre_channel; int exclusive; int ppp_slot; int pppbind; int triggercps; int slavedelay; int onhtime; int dialmax; int flags; int cbdelay; int dialtimeout; int dialwait; scalar_t__ dialwait_timer; scalar_t__ dialstarted; int hupflags; int l3_proto; int l2_proto; int super_tx_queue; struct TYPE_4__* next; struct TYPE_4__* last; int magic; int p_encap; } ;
typedef TYPE_1__ isdn_net_local ;
struct TYPE_5__ {int ext_priv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_11 ;
 TYPE_3__* FUNC_1 (struct net_device*) ;
 TYPE_1__* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_12)
{
 isdn_net_local *VAR_13 = FUNC_2(VAR_12);

 FUNC_0(VAR_12);


 VAR_12->flags = VAR_1|VAR_2;


 FUNC_1(VAR_12)->ext_priv_flags &= ~VAR_3;
 VAR_12->header_ops = ((void*)0);
 VAR_12->netdev_ops = &VAR_11;


 VAR_12->tx_queue_len = 30;

 VAR_13->p_encap = VAR_7;
 VAR_13->magic = VAR_8;
 VAR_13->last = VAR_13;
 VAR_13->next = VAR_13;
 VAR_13->isdn_device = -1;
 VAR_13->isdn_channel = -1;
 VAR_13->pre_device = -1;
 VAR_13->pre_channel = -1;
 VAR_13->exclusive = -1;
 VAR_13->ppp_slot = -1;
 VAR_13->pppbind = -1;
 FUNC_3(&VAR_13->super_tx_queue);
 VAR_13->l2_proto = VAR_9;
 VAR_13->l3_proto = VAR_10;
 VAR_13->triggercps = 6000;
 VAR_13->slavedelay = 10 * VAR_0;
 VAR_13->hupflags = VAR_4;
 VAR_13->onhtime = 10;
 VAR_13->dialmax = 1;

 VAR_13->flags = VAR_5 | VAR_6;
 VAR_13->cbdelay = 25;
 VAR_13->dialtimeout = -1;
 VAR_13->dialwait = 5 * VAR_0;
 VAR_13->dialstarted = 0;
 VAR_13->dialwait_timer = 0;
}
