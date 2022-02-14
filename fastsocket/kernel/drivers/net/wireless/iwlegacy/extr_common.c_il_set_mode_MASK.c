
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct il_priv {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_rxon_chain ) (struct il_priv*) ;} ;


 int FUNC_0 (struct il_priv*) ;
 int FUNC_1 (struct il_priv*) ;
 int FUNC_2 (struct il_priv*) ;

__attribute__((used)) static int
FUNC_3(struct il_priv *VAR_0)
{
 FUNC_1(VAR_0);

 if (VAR_0->ops->set_rxon_chain)
  VAR_0->ops->set_rxon_chain(VAR_0);

 return FUNC_0(VAR_0);
}
