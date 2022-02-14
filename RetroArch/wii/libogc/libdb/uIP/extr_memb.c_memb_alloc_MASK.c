
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct memb_blks {scalar_t__ num; int size; scalar_t__ mem; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int ) ;

void* FUNC_1(struct memb_blks *VAR_0)
{
 s32 VAR_1;
 u32 *VAR_2;

 VAR_2 = (u32*)VAR_0->mem;
 for(VAR_1=0;VAR_1<VAR_0->num;VAR_1++) {
  if(*VAR_2==0) {
   ++(*VAR_2);
   return (void*)(VAR_2+1);
  }
  VAR_2 = (u32*)(u8*)VAR_2+(FUNC_0(VAR_0->size)+sizeof(u32));
 }
 return ((void*)0);
}
