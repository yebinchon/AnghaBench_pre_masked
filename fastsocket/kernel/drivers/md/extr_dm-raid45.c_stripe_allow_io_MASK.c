
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stripe {int sc; } ;
struct TYPE_3__ {unsigned int raid_devs; } ;
struct TYPE_4__ {TYPE_1__ set; } ;


 int FUNC_0 (struct stripe*,unsigned int) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct stripe *VAR_0)
{
 unsigned VAR_1 = FUNC_1(VAR_0->sc)->set.raid_devs;

 while (VAR_1--)
  FUNC_2(FUNC_0(VAR_0, VAR_1));
}
