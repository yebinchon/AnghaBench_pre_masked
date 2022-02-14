
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stripe_chunk {scalar_t__ bl; struct stripe* stripe; int cnt; } ;
struct stripe_cache {int dummy; } ;
struct TYPE_5__ {int pending; int size; } ;
struct stripe {TYPE_2__ io; int cnt; scalar_t__ lists; struct stripe_cache* sc; } ;
struct TYPE_4__ {unsigned int raid_devs; int io_size; } ;
struct TYPE_6__ {TYPE_1__ set; } ;


 unsigned int FUNC_0 (scalar_t__) ;
 struct stripe_chunk* FUNC_1 (struct stripe*,unsigned int) ;
 int FUNC_2 (scalar_t__) ;
 TYPE_3__* FUNC_3 (struct stripe_cache*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct stripe*) ;

__attribute__((used)) static void FUNC_7(struct stripe_cache *VAR_0, struct stripe *VAR_1)
{
 unsigned VAR_2, VAR_3 = FUNC_3(VAR_0)->set.raid_devs;


 while (VAR_3--) {
  struct stripe_chunk *VAR_4 = FUNC_1(VAR_1, VAR_3);

  FUNC_4(&VAR_4->cnt, 0);
  VAR_4->stripe = VAR_1;
  VAR_2 = FUNC_0(VAR_4->bl);
  while (VAR_2--)
   FUNC_5(VAR_4->bl + VAR_2);
 }

 VAR_1->sc = VAR_0;

 VAR_2 = FUNC_0(VAR_1->lists);
 while (VAR_2--)
  FUNC_2(VAR_1->lists + VAR_2);

 VAR_1->io.size = FUNC_3(VAR_0)->set.io_size;
 FUNC_4(&VAR_1->cnt, 0);
 FUNC_4(&VAR_1->io.pending, 0);
 FUNC_6(VAR_1);
}
