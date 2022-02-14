
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int lpWidth; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int) ;
 TYPE_1__* VAR_0 ;

void FUNC_2(u8 VAR_1,u8 VAR_2)
{
 VAR_0->lpWidth = (VAR_0->lpWidth&~0xFF00)|(FUNC_1(VAR_1,8,8));
 VAR_0->lpWidth = (VAR_0->lpWidth&~0x380000)|(FUNC_1(VAR_2,19,3));
 FUNC_0(VAR_0->lpWidth);
}
