
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct TYPE_2__ {int* tevAlphaEnv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 TYPE_1__* VAR_0 ;

void FUNC_2(u8 VAR_1,u8 VAR_2,u8 VAR_3,u8 VAR_4,u8 VAR_5)
{
 u32 VAR_6 = (VAR_1&0xf);
 VAR_0->tevAlphaEnv[VAR_6] = (VAR_0->tevAlphaEnv[VAR_6]&~0xE000)|(FUNC_1(VAR_2,13,3));
 VAR_0->tevAlphaEnv[VAR_6] = (VAR_0->tevAlphaEnv[VAR_6]&~0x1C00)|(FUNC_1(VAR_3,10,3));
 VAR_0->tevAlphaEnv[VAR_6] = (VAR_0->tevAlphaEnv[VAR_6]&~0x380)|(FUNC_1(VAR_4,7,3));
 VAR_0->tevAlphaEnv[VAR_6] = (VAR_0->tevAlphaEnv[VAR_6]&~0x70)|(FUNC_1(VAR_5,4,3));

 FUNC_0(VAR_0->tevAlphaEnv[VAR_6]);
}
