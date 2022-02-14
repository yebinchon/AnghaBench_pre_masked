
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stripe {TYPE_1__* sc; struct list_head* lists; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {int lists; } ;


 int VAR_0 ;
 int FUNC_0 (struct stripe*) ;
 int FUNC_1 (struct list_head*,int) ;
 scalar_t__ FUNC_2 (struct list_head*) ;

__attribute__((used)) static void FUNC_3(struct stripe *VAR_1)
{
 if (!FUNC_0(VAR_1)) {
  struct list_head *VAR_2 = VAR_1->lists + VAR_0;

  if (FUNC_2(VAR_2))
   FUNC_1(VAR_2, VAR_1->sc->lists + VAR_0);
 }
}
