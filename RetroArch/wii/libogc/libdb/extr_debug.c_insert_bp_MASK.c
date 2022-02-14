
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct bp_entry {int * address; int instr; struct bp_entry* next; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int) ;
 size_t VAR_1 ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 () ;
 struct bp_entry* VAR_2 ;
 struct bp_entry* VAR_3 ;

__attribute__((used)) static u32 FUNC_3(void *VAR_4)
{
 u32 VAR_5;
 struct bp_entry *VAR_6;

 for(VAR_5=0;VAR_5<VAR_1;VAR_5++) {
  if(VAR_2[VAR_5].address == ((void*)0)) break;
 }
 if(VAR_5==VAR_1) return 0;

 VAR_6 = &VAR_2[VAR_5];
 VAR_6->next = VAR_3;
 VAR_6->address = VAR_4;
 VAR_3 = VAR_6;

 VAR_6->instr = *(VAR_6->address);
 *(VAR_6->address) = VAR_0;

 FUNC_0((void*)((u32)VAR_4&~0x1f),32);
 FUNC_1((void*)((u32)VAR_4&~0x1f),32);
 FUNC_2();

 return 1;
}
