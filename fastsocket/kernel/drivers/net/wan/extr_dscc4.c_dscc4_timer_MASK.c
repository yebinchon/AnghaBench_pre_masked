
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct dscc4_dev_priv {TYPE_1__ timer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 struct dscc4_dev_priv* FUNC_1 (struct net_device*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_2)
{
 struct net_device *VAR_3 = (struct net_device *)VAR_2;
 struct dscc4_dev_priv *VAR_4 = FUNC_1(VAR_3);


 goto done;
done:
        VAR_4->timer.expires = VAR_1 + VAR_0;
        FUNC_0(&VAR_4->timer);
}
