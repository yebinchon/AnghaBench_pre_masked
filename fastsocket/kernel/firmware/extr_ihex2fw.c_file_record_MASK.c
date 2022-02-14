
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ihex_binrec {scalar_t__ addr; struct ihex_binrec* next; } ;


 struct ihex_binrec* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct ihex_binrec *VAR_2)
{
 struct ihex_binrec **VAR_3 = &VAR_0;

 while ((*VAR_3) && (!VAR_1 || (*VAR_3)->addr < VAR_2->addr))
  VAR_3 = &((*VAR_3)->next);

 VAR_2->next = *VAR_3;
 *VAR_3 = VAR_2;
}
