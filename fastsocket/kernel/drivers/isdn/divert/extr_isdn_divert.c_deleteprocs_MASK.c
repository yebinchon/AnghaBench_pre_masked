
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct call_struc {struct call_struc* next; int timer; } ;


 int FUNC_0 (int *) ;
 struct call_struc* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct call_struc*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(void)
{ struct call_struc *VAR_2, *VAR_3;
  unsigned long VAR_4;

  FUNC_2(&VAR_1, VAR_4);
  VAR_2 = VAR_0;
  VAR_0 = ((void*)0);
  while (VAR_2)
   { FUNC_0(&VAR_2->timer);
     VAR_3 = VAR_2;
     VAR_2 = VAR_2->next;
     FUNC_1(VAR_3);
   }
  FUNC_3(&VAR_1, VAR_4);
}
