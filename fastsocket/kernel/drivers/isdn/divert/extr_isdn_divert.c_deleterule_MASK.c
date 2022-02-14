
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct deflect_struc {struct deflect_struc* next; TYPE_1__* prev; } ;
struct TYPE_2__ {struct deflect_struc* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct deflect_struc*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct deflect_struc* VAR_2 ;
 TYPE_1__* VAR_3 ;

int FUNC_3(int VAR_4)
{ struct deflect_struc *VAR_5,*VAR_6;
  unsigned long VAR_7;

  if (VAR_4 < 0)
   { FUNC_1(&VAR_1, VAR_7);
     VAR_5 = VAR_2;
     VAR_2 = ((void*)0);
     VAR_3 = ((void*)0);
     FUNC_2(&VAR_1, VAR_7);
     while (VAR_5)
      { VAR_6 = VAR_5;
        VAR_5 = VAR_5->next;
        FUNC_0(VAR_6);
      }
     return(0);
   }

  FUNC_1(&VAR_1, VAR_7);
  VAR_5 = VAR_2;

  while ((VAR_5) && (VAR_4 > 0))
   { VAR_4--;
     VAR_5 = VAR_5->next;
   }

  if (!VAR_5)
   {
     FUNC_2(&VAR_1, VAR_7);
     return(-VAR_0);
   }

  if (VAR_5->next)
    VAR_5->next->prev = VAR_5->prev;
   else
     VAR_3 = VAR_5->prev;

  if (VAR_5->prev)
    VAR_5->prev->next = VAR_5->next;
   else
     VAR_2 = VAR_5->next;

  FUNC_2(&VAR_1, VAR_7);
  FUNC_0(VAR_5);
  return(0);
}
