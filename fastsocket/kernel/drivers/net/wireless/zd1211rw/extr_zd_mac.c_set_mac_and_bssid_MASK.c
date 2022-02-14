
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zd_mac {scalar_t__ type; TYPE_1__* vif; int chip; } ;
struct TYPE_2__ {int addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct zd_mac*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(struct zd_mac *VAR_1)
{
 int VAR_2;

 if (!VAR_1->vif)
  return -1;

 VAR_2 = FUNC_2(&VAR_1->chip, VAR_1->vif->addr);
 if (VAR_2)
  return VAR_2;




 if (VAR_1->type != VAR_0)
  return FUNC_0(VAR_1);
 else
  return FUNC_1(&VAR_1->chip, VAR_1->vif->addr);
}
