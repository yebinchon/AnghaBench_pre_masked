
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scc_channel {int lock; int tx_queue; int * tx_buff; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_5(struct scc_channel *VAR_0)
{
 unsigned long VAR_1;

 FUNC_3(&VAR_0->lock, VAR_1);
 if (VAR_0->tx_buff != ((void*)0))
 {
  FUNC_0(VAR_0->tx_buff);
  VAR_0->tx_buff = ((void*)0);
 }

 while (!FUNC_2(&VAR_0->tx_queue))
  FUNC_0(FUNC_1(&VAR_0->tx_queue));

 FUNC_4(&VAR_0->lock, VAR_1);
}
