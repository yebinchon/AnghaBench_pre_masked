
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pending; } ;
struct stripe {TYPE_2__* sc; TYPE_1__ io; } ;
struct TYPE_4__ {int active_stripes; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct stripe*) ;

__attribute__((used)) static void FUNC_4(struct stripe *VAR_0)
{
 if (FUNC_2(&VAR_0->io.pending) == 1)

  FUNC_1(&VAR_0->sc->active_stripes);
 else
  FUNC_0(FUNC_3(VAR_0) < 0);
}
