
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int __u16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

void FUNC_0(u16 VAR_2, u16 VAR_3)
{
 VAR_1 &= ~VAR_2;
 VAR_1 |= VAR_3;
 *(volatile __u16 *) VAR_0 = VAR_1;
}
