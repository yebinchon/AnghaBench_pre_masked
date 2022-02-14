
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int peCMode1; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 TYPE_1__* VAR_0 ;

void FUNC_2(u8 VAR_1,u8 VAR_2)
{
 VAR_0->peCMode1 = (VAR_0->peCMode1&~0xff)|(VAR_2&0xff);
 VAR_0->peCMode1 = (VAR_0->peCMode1&~0x100)|(FUNC_1(VAR_1,8,1));
 FUNC_0(VAR_0->peCMode1);
}
