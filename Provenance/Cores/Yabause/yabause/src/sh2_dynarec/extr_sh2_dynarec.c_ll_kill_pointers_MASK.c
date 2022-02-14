
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ll_entry {struct ll_entry* next; scalar_t__ addr; int vaddr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int,int,...) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int* VAR_2 ;

void FUNC_3(struct ll_entry *VAR_3,int VAR_4,int VAR_5)
{
  while(VAR_3) {
    int VAR_6=FUNC_0(VAR_3->addr);
    FUNC_1("EXP: Lookup pointer to %x at %x (%x)\n",(int)VAR_6,(int)VAR_3->addr,VAR_3->vaddr);
    if(((VAR_6>>VAR_5)==(VAR_4>>VAR_5)) ||
       (((VAR_6-VAR_1)>>VAR_5)==(VAR_4>>VAR_5)))
    {
      u32 VAR_7;
      FUNC_1("EXP: Kill pointer at %x (%x)\n",(int)VAR_3->addr,VAR_3->vaddr);
      VAR_7=(u32)FUNC_2(VAR_3->addr);



    }
    VAR_3=VAR_3->next;
  }
}
