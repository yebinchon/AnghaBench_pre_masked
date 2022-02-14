
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_state; int txerrs; } ;
struct scc_channel {int dev; TYPE_1__ stat; int tx_t; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct scc_channel*) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_1)
{
 struct scc_channel *VAR_2 = (struct scc_channel *) VAR_1;

 FUNC_0(&VAR_2->tx_t);
 FUNC_1(VAR_2->dev);

 FUNC_3(VAR_2);
 VAR_2->stat.txerrs++;
 VAR_2->stat.tx_state = VAR_0;

 FUNC_2(VAR_2->dev);
}
