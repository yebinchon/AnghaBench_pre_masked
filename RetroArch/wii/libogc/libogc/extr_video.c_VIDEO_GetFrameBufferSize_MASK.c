
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int xfbHeight; scalar_t__ aa; int fbWidth; } ;
typedef TYPE_1__ GXRModeObj ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

u32 FUNC_1(GXRModeObj *VAR_1) {
 u16 VAR_2, VAR_3;

 VAR_2 = FUNC_0(VAR_1->fbWidth);
 VAR_3 = VAR_1->xfbHeight;

 if (VAR_1->aa)
  VAR_3 += 4;

 return VAR_2 * VAR_3 * VAR_0;
}
