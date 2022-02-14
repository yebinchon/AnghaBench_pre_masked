
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int r; int b; int g; int a; } ;
typedef TYPE_1__ GXColor ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int) ;

void FUNC_2(GXColor VAR_0,u32 VAR_1)
{
 u32 VAR_2;

 VAR_2 = (FUNC_1(VAR_0.a,8,8))|(VAR_0.r&0xff);
 FUNC_0(0x4f000000|VAR_2);

 VAR_2 = (FUNC_1(VAR_0.g,8,8))|(VAR_0.b&0xff);
 FUNC_0(0x50000000|VAR_2);

 VAR_2 = VAR_1&0x00ffffff;
 FUNC_0(0x51000000|VAR_2);
}
