
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stmmac_priv {TYPE_2__* dev; TYPE_1__* tm; } ;
struct TYPE_4__ {scalar_t__ base_addr; } ;
struct TYPE_3__ {int (* timer_start ) (int ) ;int enable; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct stmmac_priv *VAR_3)
{





 FUNC_2(VAR_0, VAR_3->dev->base_addr + VAR_1);
}
