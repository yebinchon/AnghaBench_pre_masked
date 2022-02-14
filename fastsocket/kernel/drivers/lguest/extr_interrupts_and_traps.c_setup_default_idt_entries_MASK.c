
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lguest_ro_state {int * guest_idt; } ;


 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned int,unsigned long const,int *) ;

void FUNC_2(struct lguest_ro_state *VAR_0,
          const unsigned long *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->guest_idt); VAR_2++)
  FUNC_1(&VAR_0->guest_idt[VAR_2], VAR_2, VAR_1[VAR_2], ((void*)0));
}
