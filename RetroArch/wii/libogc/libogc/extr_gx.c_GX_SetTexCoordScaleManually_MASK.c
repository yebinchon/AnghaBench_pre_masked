
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
typedef int u16 ;
struct TYPE_2__ {int texCoordManually; int* suSsize; int* suTsize; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 TYPE_1__* VAR_0 ;

void FUNC_2(u8 VAR_1,u8 VAR_2,u16 VAR_3,u16 VAR_4)
{
 u32 VAR_5;

 VAR_0->texCoordManually = (VAR_0->texCoordManually&~(FUNC_1(1,VAR_1,1)))|(FUNC_1(VAR_2,VAR_1,1));
 if(!VAR_2) return;

 VAR_5 = (VAR_1&0x7);
 VAR_0->suSsize[VAR_5] = (VAR_0->suSsize[VAR_5]&~0xffff)|((VAR_3-1)&0xffff);
 VAR_0->suTsize[VAR_5] = (VAR_0->suTsize[VAR_5]&~0xffff)|((VAR_4-1)&0xffff);

 FUNC_0(VAR_0->suSsize[VAR_5]);
 FUNC_0(VAR_0->suTsize[VAR_5]);
}
