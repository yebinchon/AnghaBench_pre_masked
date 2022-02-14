
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stripe {int sc; } ;
struct TYPE_2__ {unsigned int raid_devs; } ;
struct raid_set {TYPE_1__ set; } ;


 int FUNC_0 (struct stripe*,unsigned int) ;
 scalar_t__ FUNC_1 (int ) ;
 struct raid_set* FUNC_2 (int ) ;
 int FUNC_3 (struct raid_set*,struct stripe*,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct stripe *VAR_0)
{
 struct raid_set *VAR_1 = FUNC_2(VAR_0->sc);
 unsigned VAR_2 = VAR_1->set.raid_devs;

 while (VAR_2--) {
  if (FUNC_1(FUNC_0(VAR_0, VAR_2)))
   FUNC_3(VAR_1, VAR_0, VAR_2);
 }
}
