
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zd_addr_t ;
typedef int u16 ;


 int VAR_0 ;

__attribute__((used)) static zd_addr_t FUNC_0(zd_addr_t VAR_1)
{
 u16 VAR_2 = (u16)VAR_1;


 if ((VAR_2 & 0xf000) == VAR_0)
  VAR_2 += 2;
 else
  VAR_2 += 1;
 return (zd_addr_t)VAR_2;
}
