
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int recovery; int flags; } ;
struct raid_set {int bitmap_loaded; TYPE_1__ md; } ;
struct dm_target {struct raid_set* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct raid_set*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct dm_target *VAR_2)
{
 struct raid_set *VAR_3 = VAR_2->private;

 FUNC_4(VAR_0, &VAR_3->md.flags);
 if (!VAR_3->bitmap_loaded) {
  FUNC_1(&VAR_3->md);
  VAR_3->bitmap_loaded = 1;
 } else {





  FUNC_0(VAR_3);
 }

 FUNC_2(VAR_1, &VAR_3->md.recovery);
 FUNC_3(&VAR_3->md);
}
