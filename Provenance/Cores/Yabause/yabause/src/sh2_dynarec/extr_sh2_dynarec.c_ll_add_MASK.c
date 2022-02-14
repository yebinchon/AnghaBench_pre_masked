
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ll_entry {int vaddr; struct ll_entry* next; void* addr; scalar_t__ reg32; } ;


 int FUNC_0 (int ) ;
 struct ll_entry* FUNC_1 (int) ;

void FUNC_2(struct ll_entry **VAR_0,int VAR_1,void *VAR_2)
{
  struct ll_entry *VAR_3;
  VAR_3=FUNC_1(sizeof(struct ll_entry));
  FUNC_0(VAR_3!=((void*)0));
  VAR_3->vaddr=VAR_1;
  VAR_3->reg32=0;
  VAR_3->addr=VAR_2;
  VAR_3->next=*VAR_0;
  *VAR_0=VAR_3;
}
