
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raid_set {int md; } ;
struct dm_target {struct raid_set* private; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct dm_target *VAR_0)
{
 struct raid_set *VAR_1 = VAR_0->private;

 FUNC_0(&VAR_1->md);
}
