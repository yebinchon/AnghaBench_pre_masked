
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct memb_blks {scalar_t__ num; int size; scalar_t__ mem; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

u8 FUNC_3(struct memb_blks *VAR_0,void *VAR_1)
{
 u8 VAR_2;
 s32 VAR_3;
 u32 VAR_4;
 u32 *VAR_5,*VAR_6;

 FUNC_1(VAR_4);
 VAR_6 = VAR_1;
 VAR_5 = (u32*)VAR_0->mem;
 for(VAR_3=0;VAR_3<VAR_0->num;VAR_3++) {
  if(VAR_5==(VAR_6 - 1)) {
   VAR_2 = --(*VAR_5);
   FUNC_2(VAR_4);
   return VAR_2;
  }
  VAR_5 = (u32*)((u8*)VAR_5+(FUNC_0(VAR_0->size)+sizeof(u32)));
 }
 FUNC_2(VAR_4);
 return -1;
}
