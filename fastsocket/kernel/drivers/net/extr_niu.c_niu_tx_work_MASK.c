
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct tx_ring_info {int tx_cs; int last_pkt_cnt; int cons; } ;
struct niu {TYPE_1__* dev; struct tx_ring_info* tx_rings; } ;
struct netdev_queue {int dummy; } ;
struct TYPE_2__ {int name; } ;


 scalar_t__ FUNC_0 (struct tx_ring_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct netdev_queue*,int ) ;
 int FUNC_2 (struct netdev_queue*) ;
 struct netdev_queue* FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (struct netdev_queue*) ;
 int FUNC_5 (struct netdev_queue*) ;
 scalar_t__ FUNC_6 (struct tx_ring_info*) ;
 int FUNC_7 (int ,char*,int ,int,int) ;
 int FUNC_8 (struct niu*,struct tx_ring_info*,int) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(struct niu *VAR_5, struct tx_ring_info *VAR_6)
{
 struct netdev_queue *VAR_7;
 u16 VAR_8, VAR_9;
 int VAR_10, VAR_11;
 u64 VAR_12;

 VAR_11 = (VAR_6 - VAR_5->tx_rings);
 VAR_7 = FUNC_3(VAR_5->dev, VAR_11);

 VAR_12 = VAR_6->tx_cs;
 if (FUNC_11(!(VAR_12 & (VAR_0 | VAR_1))))
  goto out;

 VAR_9 = VAR_8 = (VAR_12 & VAR_2) >> VAR_3;
 VAR_8 = (VAR_8 - VAR_6->last_pkt_cnt) &
  (VAR_2 >> VAR_3);

 VAR_6->last_pkt_cnt = VAR_9;

 VAR_10 = VAR_6->cons;

 FUNC_7(VAR_4, "%s: niu_tx_work() pkt_cnt[%u] cons[%d]\n",
        VAR_5->dev->name, VAR_8, VAR_10);

 while (VAR_8--)
  VAR_10 = FUNC_8(VAR_5, VAR_6, VAR_10);

 VAR_6->cons = VAR_10;
 FUNC_9();

out:
 if (FUNC_11(FUNC_4(VAR_7) &&
       (FUNC_6(VAR_6) > FUNC_0(VAR_6)))) {
  FUNC_1(VAR_7, FUNC_10());
  if (FUNC_4(VAR_7) &&
      (FUNC_6(VAR_6) > FUNC_0(VAR_6)))
   FUNC_5(VAR_7);
  FUNC_2(VAR_7);
 }
}
