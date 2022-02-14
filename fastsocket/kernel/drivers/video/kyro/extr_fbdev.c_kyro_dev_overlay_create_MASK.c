
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ulOverlayOffset; int ulNextFreeVidMem; int ulOverlayStride; int ulOverlayUVStride; int pSTGReg; } ;


 scalar_t__ FUNC_0 (int ,int,int,int,int,int*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,int) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_3(u32 VAR_3,
       u32 VAR_4, int VAR_5)
{
 u32 VAR_6;
 u32 VAR_7, VAR_8;

 if (VAR_2.ulOverlayOffset != 0)




  return -VAR_0;

 FUNC_1(VAR_2.pSTGReg);




 VAR_6 = VAR_2.ulNextFreeVidMem;
 if ((VAR_6 & 0x1f) != 0) {
  VAR_6 = (VAR_6 + 32L) & 0xffffffE0L;
 }

 if (FUNC_0(VAR_2.pSTGReg, VAR_3, VAR_4,
     VAR_5, VAR_6, &VAR_7, &VAR_8) < 0)
  return -VAR_0;

 VAR_2.ulOverlayOffset = VAR_6;
 VAR_2.ulOverlayStride = VAR_7;
 VAR_2.ulOverlayUVStride = VAR_8;
 VAR_2.ulNextFreeVidMem = VAR_6 + (VAR_4 * VAR_7) + (VAR_4 * 2 * VAR_8);

 FUNC_2(VAR_2.pSTGReg, VAR_1, 0xf, 0x0);

 return 0;
}
