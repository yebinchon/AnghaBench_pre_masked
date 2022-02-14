
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scc_channel {int lock; int dev; int ctrl; int tx_wdog; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct scc_channel*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct scc_channel*,int ,int ) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_5)
{
 struct scc_channel *VAR_6 = (struct scc_channel *) VAR_5;
 unsigned long VAR_7;

 FUNC_4(&VAR_6->lock, VAR_7);
 FUNC_1(&VAR_6->tx_wdog);
 FUNC_3(VAR_6, VAR_4);
 FUNC_6(VAR_6, VAR_1, 0);
 FUNC_6(VAR_6, VAR_2, VAR_0);
 FUNC_0(VAR_6->ctrl,VAR_3);
 FUNC_0(VAR_6->ctrl,VAR_3);

 FUNC_2(VAR_6->dev);
 FUNC_5(&VAR_6->lock, VAR_7);
}
