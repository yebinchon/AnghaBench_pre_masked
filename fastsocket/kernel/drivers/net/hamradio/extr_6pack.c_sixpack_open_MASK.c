
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int receive_room; struct sixpack* disc_data; TYPE_1__* ops; } ;
struct TYPE_4__ {unsigned long data; int function; } ;
struct sixpack {char* rbuff; char* xbuff; unsigned long buffsize; int led_state; int status; int status1; int lock; TYPE_2__ resync_t; TYPE_2__ tx_t; scalar_t__ tx_enable; scalar_t__ status2; int slottime; int persistence; int tx_delay; scalar_t__ duplex; scalar_t__ flags; scalar_t__ xleft; scalar_t__ rx_count_cooked; scalar_t__ rx_count; scalar_t__ rcount; scalar_t__ mtu; struct tty_struct* tty; int dead_sem; int refcnt; struct net_device* dev; } ;
struct net_device {int mtu; } ;
struct TYPE_3__ {int * write; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct net_device* FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (unsigned long,int ) ;
 struct sixpack* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 scalar_t__ FUNC_10 (struct net_device*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct sixpack*) ;

__attribute__((used)) static int FUNC_15(struct tty_struct *VAR_12)
{
 char *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
 struct net_device *VAR_15;
 struct sixpack *VAR_16;
 unsigned long VAR_17;
 int VAR_18 = 0;

 if (!FUNC_2(VAR_1))
  return -VAR_5;
 if (VAR_12->ops->write == ((void*)0))
  return -VAR_4;

 VAR_15 = FUNC_0(sizeof(struct sixpack), "sp%d", VAR_10);
 if (!VAR_15) {
  VAR_18 = -VAR_3;
  goto out;
 }

 VAR_16 = FUNC_8(VAR_15);
 VAR_16->dev = VAR_15;

 FUNC_12(&VAR_16->lock);
 FUNC_1(&VAR_16->refcnt, 1);
 FUNC_4(&VAR_16->dead_sem);



 VAR_17 = VAR_15->mtu * 2;

 VAR_13 = FUNC_7(VAR_17 + 4, VAR_6);
 VAR_14 = FUNC_7(VAR_17 + 4, VAR_6);

 if (VAR_13 == ((void*)0) || VAR_14 == ((void*)0)) {
  VAR_18 = -VAR_2;
  goto out_free;
 }

 FUNC_11(&VAR_16->lock);

 VAR_16->tty = VAR_12;

 VAR_16->rbuff = VAR_13;
 VAR_16->xbuff = VAR_14;

 VAR_16->mtu = VAR_0 + 73;
 VAR_16->buffsize = VAR_17;
 VAR_16->rcount = 0;
 VAR_16->rx_count = 0;
 VAR_16->rx_count_cooked = 0;
 VAR_16->xleft = 0;

 VAR_16->flags = 0;

 VAR_16->duplex = 0;
 VAR_16->tx_delay = VAR_9;
 VAR_16->persistence = VAR_7;
 VAR_16->slottime = VAR_8;
 VAR_16->led_state = 0x60;
 VAR_16->status = 1;
 VAR_16->status1 = 1;
 VAR_16->status2 = 0;
 VAR_16->tx_enable = 0;

 FUNC_9(VAR_15);

 FUNC_5(&VAR_16->tx_t);
 VAR_16->tx_t.function = VAR_11;
 VAR_16->tx_t.data = (unsigned long) VAR_16;

 FUNC_5(&VAR_16->resync_t);

 FUNC_13(&VAR_16->lock);


 VAR_12->disc_data = VAR_16;
 VAR_12->receive_room = 65536;


 if (FUNC_10(VAR_15))
  goto out_free;

 FUNC_14(VAR_16);

 return 0;

out_free:
 FUNC_6(VAR_14);
 FUNC_6(VAR_13);

 if (VAR_15)
  FUNC_3(VAR_15);

out:
 return VAR_18;
}
