
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

void
FUNC_0(struct bfa_s *VAR_7)
{
 int VAR_8;

 if (VAR_7->msix.nvecs == 0)
  return;

 if (VAR_7->msix.nvecs == 1) {
  for (VAR_8 = VAR_1; VAR_8 <= VAR_2; VAR_8++)
   VAR_7->msix.handler[VAR_8] = VAR_4;
  return;
 }

 for (VAR_8 = VAR_1; VAR_8 <= VAR_0; VAR_8++)
  VAR_7->msix.handler[VAR_8] = VAR_5;

 for (VAR_8 = VAR_3; VAR_8 <= VAR_2; VAR_8++)
  VAR_7->msix.handler[VAR_8] = VAR_6;
}
