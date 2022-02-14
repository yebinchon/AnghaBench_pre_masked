
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int a; int r; int g; int b; } ;
typedef TYPE_1__ GXColor ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;

void FUNC_2(u8 VAR_0,GXColor VAR_1)
{
 u32 VAR_2;

 VAR_2 = (FUNC_1((0xe0+(VAR_0<<1)),24,8)|(FUNC_1(VAR_1.a,12,8))|(VAR_1.r&0xff));
 FUNC_0(VAR_2);

 VAR_2 = (FUNC_1((0xe1+(VAR_0<<1)),24,8)|(FUNC_1(VAR_1.g,12,8))|(VAR_1.b&0xff));
 FUNC_0(VAR_2);


 FUNC_0(VAR_2);
 FUNC_0(VAR_2);
}
