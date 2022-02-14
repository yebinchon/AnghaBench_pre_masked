
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dirtyState; int genMode; int* texCoordGen; int* texCoordGen2; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_2()
{
 u32 VAR_1,VAR_2;
 u32 VAR_3;

 if(VAR_0->dirtyState&0x02000000) FUNC_0(0x103f,(VAR_0->genMode&0xf));

 VAR_1 = 0;
 VAR_3 = 0x1040;
 VAR_2 = FUNC_1(VAR_0->dirtyState,16,8);
 while(VAR_2) {
  if(VAR_2&0x0001) {
   FUNC_0(VAR_3,VAR_0->texCoordGen[VAR_1]);
   FUNC_0((VAR_3+0x10),VAR_0->texCoordGen2[VAR_1]);
  }
  VAR_2 >>= 1;
  VAR_3++;
  VAR_1++;
 }
}
