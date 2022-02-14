
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long data; void (* function ) (unsigned long) ;scalar_t__ expires; } ;
struct scc_channel {TYPE_1__ tx_t; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_2(struct scc_channel *VAR_3, void (*VAR_4)(unsigned long), unsigned long VAR_5)
{
 FUNC_1(&VAR_3->tx_t);

 if (VAR_5 == 0)
 {
  VAR_4((unsigned long) VAR_3);
 } else
 if (VAR_5 != VAR_1)
 {
  VAR_3->tx_t.data = (unsigned long) VAR_3;
  VAR_3->tx_t.function = VAR_4;
  VAR_3->tx_t.expires = VAR_2 + (VAR_5*VAR_0)/100;
  FUNC_0(&VAR_3->tx_t);
 }
}
