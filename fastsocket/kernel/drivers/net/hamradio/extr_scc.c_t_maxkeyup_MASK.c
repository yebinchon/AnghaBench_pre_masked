
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tailtime; } ;
struct TYPE_3__ {int tx_state; int txerrs; } ;
struct scc_channel {TYPE_2__ kiss; TYPE_1__ stat; int lock; int ctrl; int tx_t; int dev; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct scc_channel*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct scc_channel*) ;
 int FUNC_5 (struct scc_channel*,int ,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_8(unsigned long VAR_8)
{
 struct scc_channel *VAR_9 = (struct scc_channel *) VAR_8;
 unsigned long VAR_10;

 FUNC_6(&VAR_9->lock, VAR_10);





 FUNC_3(VAR_9->dev);
 FUNC_4(VAR_9);

 FUNC_2(&VAR_9->tx_t);

 FUNC_1(VAR_9, VAR_1, VAR_5);
 FUNC_1(VAR_9, VAR_2, VAR_6);
 FUNC_0(VAR_9->ctrl, VAR_0, VAR_3);

 FUNC_7(&VAR_9->lock, VAR_10);

 VAR_9->stat.txerrs++;
 VAR_9->stat.tx_state = VAR_4;
 FUNC_5(VAR_9, VAR_7, VAR_9->kiss.tailtime);
}
