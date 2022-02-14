
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int b; int g; int r; int a; } ;
typedef TYPE_1__ GXColor ;


 int FUNC_0 (int ,int,int) ;

void FUNC_1(u16 VAR_0,u16 VAR_1,GXColor VAR_2)
{
 u32 VAR_3;

 VAR_3 = 0xc8000000|(FUNC_0(VAR_0,2,10));
 VAR_3 = (VAR_3&~0x3FF000)|(FUNC_0(VAR_1,12,10));
 *(u32*)VAR_3 = FUNC_0(VAR_2.a,24,8)|FUNC_0(VAR_2.r,16,8)|FUNC_0(VAR_2.g,8,8)|(VAR_2.b&0xff);
}
