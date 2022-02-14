
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct deflect_struc {struct deflect_struc* next; int rule; } ;
typedef int divert_rule ;


 struct deflect_struc* VAR_0 ;

divert_rule *FUNC_0(int VAR_1)
{ struct deflect_struc *VAR_2 = VAR_0;

  if (VAR_1 < 0) return(((void*)0));
  while ((VAR_2) && (VAR_1 >= 0))
   { if (!(VAR_1--))
      { return(&VAR_2->rule);
        break;
      }
     VAR_2 = VAR_2->next;
   }
  return(((void*)0));
}
