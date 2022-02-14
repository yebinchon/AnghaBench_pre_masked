
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stripe_chunk {int dummy; } ;
struct stripe {int sc; } ;
struct TYPE_3__ {unsigned int raid_devs; } ;
struct TYPE_4__ {TYPE_1__ set; } ;


 struct stripe_chunk* FUNC_0 (struct stripe*,unsigned int) ;
 int FUNC_1 (struct stripe_chunk*) ;
 TYPE_2__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct stripe_chunk*) ;

__attribute__((used)) static void FUNC_4(struct stripe *VAR_0)
{
 unsigned VAR_1 = FUNC_2(VAR_0->sc)->set.raid_devs;
 struct stripe_chunk *VAR_2;

 while (VAR_1--) {
  VAR_2 = FUNC_0(VAR_0, VAR_1);

  if (FUNC_3(VAR_2))
   FUNC_1(VAR_2);
 }
}
