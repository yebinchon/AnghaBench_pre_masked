
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct device* parent; } ;
struct net_device {int priv_flags; TYPE_1__ dev; } ;
struct neighbour {struct net_device* dev; } ;
struct device {int * driver; } ;
struct TYPE_4__ {int driver; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (struct device const*) ;
 int FUNC_1 (int ,struct neighbour*) ;
 struct net_device* FUNC_2 (struct net_device const*) ;

__attribute__((used)) static void FUNC_3(struct neighbour *VAR_2)
{
 const struct device *VAR_3;
 const struct net_device *VAR_4 = VAR_2->dev;

 if (VAR_4->priv_flags & VAR_0)
  VAR_4 = FUNC_2(VAR_4);
 VAR_3 = VAR_4->dev.parent;
 if (VAR_3 && VAR_3->driver == &VAR_1.driver)
  FUNC_1(FUNC_0(VAR_3), VAR_2);
}
