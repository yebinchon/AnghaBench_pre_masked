
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct memb_blks {int size; int num; int * mem; } ;
typedef int s32 ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct memb_blks*) ;

__attribute__((used)) static s32 FUNC_6(struct memb_blks *VAR_0,u32 VAR_1,u32 VAR_2)
{
 u32 VAR_3;
 u8 *VAR_4 = ((void*)0);

 VAR_3 = ((FUNC_0(VAR_1)+sizeof(u32))*VAR_2);
 VAR_4 = (u8*)FUNC_1(((u32)FUNC_2() - VAR_3));
 if((u32)VAR_4<(u32)FUNC_3()) return -4;

 FUNC_4(VAR_4);

 VAR_0->size = VAR_1;
 VAR_0->num = VAR_2;
 VAR_0->mem = VAR_4;

 FUNC_5(VAR_0);
 return 0;
}
