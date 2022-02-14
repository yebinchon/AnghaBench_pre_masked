
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int genMode; int dirtyState; } ;


 int FUNC_0 (scalar_t__,int,int) ;
 TYPE_1__* VAR_0 ;

void FUNC_1(u8 VAR_1)
{
 VAR_0->genMode = (VAR_0->genMode&~0x3C00)|(FUNC_0((VAR_1-1),10,4));
 VAR_0->dirtyState |= 0x0004;
}
