
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tx_state; } ;
struct TYPE_3__ {int mintime; } ;
struct scc_channel {int dev; TYPE_2__ stat; TYPE_1__ kiss; int lock; int tx_wdog; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct scc_channel*,int ) ;
 int FUNC_3 (struct scc_channel*,int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_5)
{
 struct scc_channel *VAR_6 = (struct scc_channel *) VAR_5;
 unsigned long VAR_7;

 FUNC_4(&VAR_6->lock, VAR_7);
  FUNC_0(&VAR_6->tx_wdog);
  FUNC_2(VAR_6, VAR_3);
 FUNC_5(&VAR_6->lock, VAR_7);

  if (VAR_6->stat.tx_state == VAR_1)
  {
   VAR_6->stat.tx_state = VAR_2;
  FUNC_3(VAR_6, VAR_4, VAR_6->kiss.mintime*100);
   return;
  }

  VAR_6->stat.tx_state = VAR_0;
 FUNC_1(VAR_6->dev);
}
