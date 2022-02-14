
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stripe_chunk {int dummy; } ;
struct TYPE_4__ {unsigned int parity; } ;
struct stripe {int sc; TYPE_2__ idx; } ;
struct TYPE_3__ {unsigned int raid_devs; } ;
struct raid_set {scalar_t__ stats; TYPE_1__ set; } ;


 int FUNC_0 (struct stripe_chunk*) ;
 struct raid_set* FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct stripe_chunk*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (struct stripe_chunk*) ;
 struct stripe_chunk* FUNC_5 (struct stripe*,unsigned int,unsigned int*) ;

__attribute__((used)) static void FUNC_6(struct stripe *VAR_1)
{
 struct raid_set *VAR_2 = FUNC_1(VAR_1->sc);
 unsigned VAR_3 = 0, VAR_4 = VAR_2->set.raid_devs;


 while (VAR_4--) {
  struct stripe_chunk *VAR_5 =
   FUNC_5(VAR_1, VAR_4, &VAR_3);

  if (!VAR_5)
   continue;


  if (FUNC_4(VAR_5) || VAR_4 == VAR_1->idx.parity)
   FUNC_2(VAR_5);
  else {
   FUNC_0(VAR_5);

   FUNC_3(FUNC_1(VAR_1->sc)->stats + VAR_0);
  }
 }
}
