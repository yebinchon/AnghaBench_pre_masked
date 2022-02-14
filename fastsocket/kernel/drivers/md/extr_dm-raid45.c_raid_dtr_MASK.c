
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int raid_devs; } ;
struct TYPE_3__ {int wq; } ;
struct raid_set {TYPE_2__ set; TYPE_1__ io; } ;
struct dm_target {struct raid_set* private; } ;


 int FUNC_0 (struct raid_set*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct dm_target *VAR_0)
{
 struct raid_set *VAR_1 = VAR_0->private;

 FUNC_1(VAR_1->io.wq);
 FUNC_0(VAR_1, VAR_1->set.raid_devs);
}
