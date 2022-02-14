
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned long data; scalar_t__ expires; int function; } ;
struct TYPE_4__ {int maxdefer; } ;
struct scc_channel {int lock; TYPE_2__ tx_wdog; TYPE_1__ kiss; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(struct scc_channel *VAR_4)
{
 unsigned long VAR_5;

 FUNC_2(&VAR_4->lock, VAR_5);
 FUNC_1(&VAR_4->tx_wdog);

 if (VAR_4->kiss.maxdefer != 0 && VAR_4->kiss.maxdefer != VAR_1)
 {
  VAR_4->tx_wdog.data = (unsigned long) VAR_4;
  VAR_4->tx_wdog.function = VAR_3;
  VAR_4->tx_wdog.expires = VAR_2 + VAR_0*VAR_4->kiss.maxdefer;
  FUNC_0(&VAR_4->tx_wdog);
 }
 FUNC_3(&VAR_4->lock, VAR_5);
}
