
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct TYPE_2__ {int* suSsize; int* suTsize; int texCoordManually; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 TYPE_1__* VAR_0 ;

void FUNC_2(u8 VAR_1,u8 VAR_2,u8 VAR_3)
{
 u32 VAR_4;

 VAR_4 = (VAR_1&0x7);
 VAR_0->suSsize[VAR_4] = (VAR_0->suSsize[VAR_4]&~0x10000)|(FUNC_1(VAR_2,16,1));
 VAR_0->suTsize[VAR_4] = (VAR_0->suTsize[VAR_4]&~0x10000)|(FUNC_1(VAR_3,16,1));

 if(!(VAR_0->texCoordManually&(FUNC_1(1,VAR_1,1)))) return;

 FUNC_0(VAR_0->suSsize[VAR_4]);
 FUNC_0(VAR_0->suTsize[VAR_4]);
}
