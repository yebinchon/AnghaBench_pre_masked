
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct TYPE_2__ {int* tevColorEnv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 TYPE_1__* VAR_0 ;

void FUNC_2(u8 VAR_1,u8 VAR_2,u8 VAR_3,u8 VAR_4,u8 VAR_5)
{
 u32 VAR_6 = (VAR_1&0xf);
 VAR_0->tevColorEnv[VAR_6] = (VAR_0->tevColorEnv[VAR_6]&~0xF000)|(FUNC_1(VAR_2,12,4));
 VAR_0->tevColorEnv[VAR_6] = (VAR_0->tevColorEnv[VAR_6]&~0xF00)|(FUNC_1(VAR_3,8,4));
 VAR_0->tevColorEnv[VAR_6] = (VAR_0->tevColorEnv[VAR_6]&~0xF0)|(FUNC_1(VAR_4,4,4));
 VAR_0->tevColorEnv[VAR_6] = (VAR_0->tevColorEnv[VAR_6]&~0xf)|(VAR_5&0xf);

 FUNC_0(VAR_0->tevColorEnv[VAR_6]);
}
