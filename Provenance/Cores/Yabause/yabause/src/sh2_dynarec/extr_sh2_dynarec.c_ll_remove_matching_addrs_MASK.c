
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ll_entry {struct ll_entry* next; int vaddr; scalar_t__ addr; } ;


 char* VAR_0 ;
 int FUNC_0 (struct ll_entry*) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct ll_entry **VAR_1,int VAR_2,int VAR_3)
{
  struct ll_entry *VAR_4;
  while(*VAR_1) {
    if(((u32)((*VAR_1)->addr)>>VAR_3)==(VAR_2>>VAR_3) ||
       ((u32)(((char *)(*VAR_1)->addr)-VAR_0)>>VAR_3)==(VAR_2>>VAR_3))
    {
      FUNC_1("EXP: Remove pointer to %x (%x)\n",(int)(*VAR_1)->addr,(*VAR_1)->vaddr);
      FUNC_2((*VAR_1)->vaddr);
      VAR_4=(*VAR_1)->next;
      FUNC_0(*VAR_1);
      *VAR_1=VAR_4;
    }
    else
    {
      VAR_1=&((*VAR_1)->next);
    }
  }
}
