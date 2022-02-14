
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int lpWidth; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 () ;
 TYPE_1__* VAR_0 ;

void FUNC_3(u8 VAR_1,u8 VAR_2)
{
 VAR_0->lpWidth = (VAR_0->lpWidth&~0x400000)|(FUNC_1(VAR_2,22,1));
 FUNC_0(VAR_0->lpWidth);

 FUNC_2();
 FUNC_0(0x68000000|(VAR_1&1));
 FUNC_2();
}
