
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static u32 FUNC_0(u32 VAR_4)
{
 VAR_4 &= ~VAR_3;
 if (VAR_4 & VAR_2)
  VAR_4 &= ~VAR_2;
 if (VAR_4 & VAR_1)
  VAR_4 &= ~VAR_1;
 if (VAR_4 & VAR_0)
  VAR_4 &= ~VAR_0;
 return VAR_4;
}
