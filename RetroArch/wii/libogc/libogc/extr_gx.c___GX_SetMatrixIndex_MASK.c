
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int mtxIdxHi; int mtxIdxLo; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_2(u32 VAR_1)
{
 if(VAR_1<5) {
  FUNC_0(0x30,VAR_0->mtxIdxLo);
  FUNC_1(0x1018,VAR_0->mtxIdxLo);
 } else {
  FUNC_0(0x40,VAR_0->mtxIdxHi);
  FUNC_1(0x1019,VAR_0->mtxIdxHi);
 }
}
