
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
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct stripe*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct stripe*) ;
 scalar_t__ FUNC_6 (struct stripe*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct stripe *VAR_0)
{
 if (FUNC_4(&VAR_0->io.pending)) {
  if (FUNC_7(FUNC_2(VAR_0)))

   FUNC_8(FUNC_1(VAR_0->sc));
  else

   FUNC_5(VAR_0);


  FUNC_3(&VAR_0->sc->active_stripes);
 } else
  FUNC_0(FUNC_6(VAR_0) < 0);
}
