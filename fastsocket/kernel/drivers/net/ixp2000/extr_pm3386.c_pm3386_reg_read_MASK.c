
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static u16 FUNC_0(int VAR_2, int VAR_3)
{
 void *VAR_4;
 u16 VAR_5;

 VAR_4 = (void *)VAR_0;
 if (VAR_2 == 1)
  VAR_4 = (void *)VAR_1;

 VAR_5 = *((volatile u16 *)(VAR_4 + (VAR_3 << 1)));



 return VAR_5;
}
