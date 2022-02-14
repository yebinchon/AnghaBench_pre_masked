
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {unsigned long data; int function; scalar_t__ expires; } ;
struct bmac_data {int timeout_active; int lock; TYPE_1__ tx_timeout; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 struct bmac_data* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_5(struct net_device *VAR_3)
{
 struct bmac_data *VAR_4 = FUNC_2(VAR_3);
 unsigned long VAR_5;

 FUNC_3(&VAR_4->lock, VAR_5);
 if (VAR_4->timeout_active)
  FUNC_1(&VAR_4->tx_timeout);
 VAR_4->tx_timeout.expires = VAR_2 + VAR_0;
 VAR_4->tx_timeout.function = VAR_1;
 VAR_4->tx_timeout.data = (unsigned long) VAR_3;
 FUNC_0(&VAR_4->tx_timeout);
 VAR_4->timeout_active = 1;
 FUNC_4(&VAR_4->lock, VAR_5);
}
