
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct memb_blks {int num; int size; int mem; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;

void FUNC_2(struct memb_blks *VAR_0)
{
 FUNC_1(VAR_0->mem,0,(FUNC_0(VAR_0->size)+sizeof(u32))*VAR_0->num);
}
