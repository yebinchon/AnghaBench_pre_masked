
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct slave {TYPE_2__* dev; int state; } ;
struct TYPE_3__ {int all_slaves_active; } ;
struct bonding {TYPE_1__ params; } ;
struct TYPE_4__ {int priv_flags; int master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bonding*) ;
 struct bonding* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct bonding*,struct slave*) ;

__attribute__((used)) static inline void FUNC_3(struct slave *VAR_3)
{
 struct bonding *VAR_4 = FUNC_1(VAR_3->dev->master);
 if (!FUNC_0(VAR_4))
  VAR_3->state = VAR_0;
 if (!VAR_4->params.all_slaves_active)
  VAR_3->dev->priv_flags |= VAR_1;
 if (FUNC_2(VAR_4, VAR_3))
  VAR_3->dev->priv_flags |= VAR_2;
}
