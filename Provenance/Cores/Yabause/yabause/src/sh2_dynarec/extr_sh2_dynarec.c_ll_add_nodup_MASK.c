
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ll_entry {int vaddr; struct ll_entry* next; } ;


 int FUNC_0 (struct ll_entry**,int,void*) ;

void FUNC_1(struct ll_entry **VAR_0,int VAR_1,void *VAR_2)
{
  struct ll_entry *VAR_3;
  VAR_3=*VAR_0;
  while(VAR_3!=((void*)0)) {
    if(VAR_3->vaddr==VAR_1) {
      return;
    }
    VAR_3=VAR_3->next;
  }
  FUNC_0(VAR_0,VAR_1,VAR_2);
}
