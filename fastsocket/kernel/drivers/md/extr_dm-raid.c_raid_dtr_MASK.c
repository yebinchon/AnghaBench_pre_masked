
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int list; } ;
struct raid_set {int md; TYPE_1__ callbacks; } ;
struct dm_target {struct raid_set* private; } ;


 int FUNC_0 (struct raid_set*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct dm_target *VAR_0)
{
 struct raid_set *VAR_1 = VAR_0->private;

 FUNC_1(&VAR_1->callbacks.list);
 FUNC_2(&VAR_1->md);
 FUNC_0(VAR_1);
}
