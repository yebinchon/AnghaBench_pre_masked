
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct deflect_struc {struct deflect_struc* prev; struct deflect_struc* next; int rule; } ;
typedef int divert_rule ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct deflect_struc* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct deflect_struc* VAR_3 ;
 struct deflect_struc* VAR_4 ;

int FUNC_3(int VAR_5, divert_rule *VAR_6)
{ struct deflect_struc *VAR_7,*VAR_8=((void*)0);
  unsigned long VAR_9;

  if (!(VAR_7 = FUNC_0(sizeof(struct deflect_struc),
                                              VAR_1)))
    return(-VAR_0);

  VAR_7->rule = *VAR_6;

  FUNC_1(&VAR_2, VAR_9);

  if (VAR_5 >= 0)
   { VAR_8 = VAR_3;
     while ((VAR_8) && (VAR_5 > 0))
      { VAR_5--;
        VAR_8 = VAR_8->next;
      }
     if (!VAR_8) VAR_5 = -1;
   }

  if (VAR_5 < 0)
   { VAR_7->prev = VAR_4;
     VAR_7->next = ((void*)0);
     if (VAR_7->prev)
       VAR_7->prev->next = VAR_7;
      else
        VAR_3 = VAR_7;
     VAR_4 = VAR_7;
   }
  else
    { VAR_7->next = VAR_8;
      VAR_7->prev = VAR_8->prev;
      VAR_8->prev = VAR_7;
      if (!VAR_7->prev)
        VAR_3 = VAR_7;
   }

  FUNC_2(&VAR_2, VAR_9);
  return(0);
}
