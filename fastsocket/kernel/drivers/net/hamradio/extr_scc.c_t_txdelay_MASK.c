
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scc_channel {int irq; int * tx_buff; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct scc_channel*) ;
 int FUNC_3 (struct scc_channel*) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_0)
{
 struct scc_channel *VAR_1 = (struct scc_channel *) VAR_0;

 FUNC_2(VAR_1);

 if (VAR_1->tx_buff == ((void*)0))
 {
  FUNC_0(VAR_1->irq);
  FUNC_3(VAR_1);
  FUNC_1(VAR_1->irq);
 }
}
