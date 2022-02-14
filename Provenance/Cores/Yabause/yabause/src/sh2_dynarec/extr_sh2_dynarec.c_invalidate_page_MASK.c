
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct ll_entry {struct ll_entry* next; scalar_t__ addr; int vaddr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ll_entry*) ;
 int FUNC_1 (char*,int ,...) ;
 struct ll_entry** VAR_1 ;
 struct ll_entry** VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int* VAR_3 ;
 int FUNC_3 (int ) ;

void FUNC_4(u32 VAR_4)
{
  struct ll_entry *VAR_5;
  struct ll_entry *VAR_6;
  VAR_5=VAR_1[VAR_4];
  VAR_1[VAR_4]=0;
  while(VAR_5!=((void*)0)) {
    FUNC_1("INVALIDATE: %x\n",VAR_5->vaddr);
    FUNC_3(VAR_5->vaddr);
    VAR_6=VAR_5->next;
    FUNC_0(VAR_5);
    VAR_5=VAR_6;
  }
  VAR_5=VAR_2[VAR_4];
  VAR_2[VAR_4]=0;
  while(VAR_5!=((void*)0)) {
    u32 VAR_7;
    FUNC_1("INVALIDATE: kill pointer to %x (%x)\n",VAR_5->vaddr,(int)VAR_5->addr);
    VAR_7=(u32)FUNC_2(VAR_5->addr);



    VAR_6=VAR_5->next;
    FUNC_0(VAR_5);
    VAR_5=VAR_6;
  }
}
