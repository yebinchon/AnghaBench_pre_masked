
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct memb_blks {scalar_t__ num; int size; scalar_t__ mem; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int ) ;

u8 FUNC_1(struct memb_blks *VAR_0,void *VAR_1)
{
 s32 VAR_2;
 u32 *VAR_3,*VAR_4;

 VAR_4 = VAR_1;
 VAR_3 = (u32*)VAR_0->mem;
 for(VAR_2=0;VAR_2<VAR_0->num;VAR_2++) {
  if(VAR_3==(VAR_4 - 1)) {
   return --(*VAR_3);
  }
  VAR_3 = (u32*)(u8*)VAR_3+(FUNC_0(VAR_0->size)+sizeof(u32));
 }
 return -1;
}
