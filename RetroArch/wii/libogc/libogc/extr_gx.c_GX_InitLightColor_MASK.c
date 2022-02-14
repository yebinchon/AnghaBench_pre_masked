
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct __gx_litobj {int col; } ;
struct TYPE_3__ {int a; int b; int g; int r; } ;
typedef int GXLightObj ;
typedef TYPE_1__ GXColor ;


 int FUNC_0 (int ,int,int) ;

void FUNC_1(GXLightObj *VAR_0,GXColor VAR_1)
{
 struct __gx_litobj *VAR_2 = (struct __gx_litobj*)VAR_0;
 VAR_2->col = ((FUNC_0(VAR_1.r,24,8))|(FUNC_0(VAR_1.g,16,8))|(FUNC_0(VAR_1.b,8,8))|(VAR_1.a&0xff));
}
