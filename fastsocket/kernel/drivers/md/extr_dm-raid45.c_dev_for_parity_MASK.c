
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int parity; } ;
struct stripe {TYPE_2__ idx; int key; int sc; } ;
struct TYPE_6__ {int dev_to_init; int pi; TYPE_1__* raid_type; } ;
struct raid_set {TYPE_3__ set; } ;
struct TYPE_4__ {scalar_t__ level; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct raid_set* FUNC_0 (int ) ;
 int FUNC_1 (struct stripe*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct raid_set*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct stripe *VAR_3, int *VAR_4)
{
 struct raid_set *VAR_5 = FUNC_0(VAR_3->sc);
 int VAR_6 = FUNC_2(VAR_5, VAR_3->key, VAR_0 | VAR_1);

 *VAR_4 = !VAR_6;


 if (VAR_6 && VAR_5->set.dev_to_init > -1)
  return VAR_5->set.dev_to_init;
 else if (VAR_5->set.raid_type->level == VAR_2)
  return VAR_5->set.pi;
 else if (!FUNC_1(VAR_3))
  return VAR_3->idx.parity;
 else
  return -1;
}
