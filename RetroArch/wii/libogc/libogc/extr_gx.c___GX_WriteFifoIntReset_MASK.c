
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int cpCLreg; } ;


 int FUNC_0 (int,int,int) ;
 TYPE_1__* VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static __inline__ void FUNC_1(u8 VAR_2,u8 VAR_3)
{
 VAR_0->cpCLreg = ((VAR_0->cpCLreg&~0x03)|(FUNC_0(VAR_3,1,1))|(VAR_2&1));
 VAR_1[2] = VAR_0->cpCLreg;
}
