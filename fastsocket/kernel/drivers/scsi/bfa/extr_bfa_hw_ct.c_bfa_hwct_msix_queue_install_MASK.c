
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nvecs; int * handler; } ;
struct bfa_s {TYPE_1__ msix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void
FUNC_0(struct bfa_s *VAR_8)
{
 int VAR_9;

 if (VAR_8->msix.nvecs == 0)
  return;

 if (VAR_8->msix.nvecs == 1) {
  for (VAR_9 = VAR_1; VAR_9 < VAR_2; VAR_9++)
   VAR_8->msix.handler[VAR_9] = VAR_5;
  return;
 }

 for (VAR_9 = VAR_1; VAR_9 <= VAR_0; VAR_9++)
  VAR_8->msix.handler[VAR_9] = VAR_6;

 for (VAR_9 = VAR_4; VAR_9 <= VAR_3; VAR_9++)
  VAR_8->msix.handler[VAR_9] = VAR_7;
}
