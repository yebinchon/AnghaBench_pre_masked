
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cardinfo {int Active; size_t Ready; TYPE_1__* mm_pages; } ;
struct TYPE_2__ {scalar_t__ cnt; } ;


 scalar_t__ FUNC_0 (struct cardinfo*) ;
 int FUNC_1 (struct cardinfo*) ;

__attribute__((used)) static void FUNC_2(struct cardinfo *VAR_0)
{






 do {
  while (FUNC_0(VAR_0))
   ;

  if (VAR_0->Active == -1 &&
      VAR_0->mm_pages[VAR_0->Ready].cnt > 0) {
   VAR_0->Active = VAR_0->Ready;
   VAR_0->Ready = 1-VAR_0->Ready;
   FUNC_1(VAR_0);
  }

 } while (VAR_0->Active == -1 && FUNC_0(VAR_0));
}
