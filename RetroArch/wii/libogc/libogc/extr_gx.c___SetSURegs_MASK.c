
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
typedef int u16 ;
struct TYPE_2__ {int* texMapSize; int* texMapWrap; int* suSsize; int* suTsize; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (size_t,int,int) ;
 void* FUNC_2 (int,int,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_3(u8 VAR_1,u8 VAR_2)
{
 u32 VAR_3;
 u16 VAR_4,VAR_5;
 u8 VAR_6,VAR_7;

 VAR_4 = VAR_0->texMapSize[VAR_1]&0x3ff;
 VAR_5 = FUNC_2(VAR_0->texMapSize[VAR_1],10,10);
 VAR_6 = VAR_0->texMapWrap[VAR_1]&3;
 VAR_7 = FUNC_2(VAR_0->texMapWrap[VAR_1],2,2);

 VAR_3 = (VAR_2&0x7);
 VAR_0->suSsize[VAR_3] = (VAR_0->suSsize[VAR_3]&~0x0000ffff)|VAR_4;
 VAR_0->suTsize[VAR_3] = (VAR_0->suTsize[VAR_3]&~0x0000ffff)|VAR_5;
 VAR_0->suSsize[VAR_3] = (VAR_0->suSsize[VAR_3]&~0x00010000)|(FUNC_1(VAR_6,16,1));
 VAR_0->suTsize[VAR_3] = (VAR_0->suTsize[VAR_3]&~0x00010000)|(FUNC_1(VAR_7,16,1));

 FUNC_0(VAR_0->suSsize[VAR_3]);
 FUNC_0(VAR_0->suTsize[VAR_3]);
}
