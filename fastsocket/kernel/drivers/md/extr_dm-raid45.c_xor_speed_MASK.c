
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; } ;
struct stripe {TYPE_1__ io; int sc; } ;
struct TYPE_5__ {unsigned int raid_devs; } ;
struct TYPE_6__ {TYPE_2__ set; } ;


 int FUNC_0 (struct stripe*,unsigned int) ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (struct stripe*,int ,int ,int ) ;
 unsigned long VAR_1 ;
 int FUNC_4 () ;

__attribute__((used)) static unsigned FUNC_5(struct stripe *VAR_2)
{
 int VAR_3 = VAR_0;
 unsigned VAR_4 = FUNC_1(VAR_2->sc)->set.raid_devs, VAR_5 = 0;
 unsigned long VAR_6;


 while (VAR_4--)
  FUNC_2(FUNC_0(VAR_2, VAR_4));


 for (VAR_6 = VAR_1; VAR_6 == VAR_1; );


 while (VAR_3--) {
  unsigned VAR_7 = 0;

  for (VAR_6 = VAR_1; VAR_6 == VAR_1; ) {
   FUNC_4();
   FUNC_3(VAR_2, VAR_2->io.size, 0, 0);
   FUNC_4();
   VAR_7++;
   FUNC_4();
  }

  if (VAR_7 > VAR_5)
   VAR_5 = VAR_7;
 }

 return VAR_5;
}
