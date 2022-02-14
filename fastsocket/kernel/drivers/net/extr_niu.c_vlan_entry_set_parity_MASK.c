
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static u64 FUNC_1(u64 VAR_2)
{
 u64 VAR_3;
 u64 VAR_4;

 VAR_3 = 0x00ff;
 VAR_4 = 0xff00;

 if (FUNC_0(VAR_2 & VAR_3) & 1)
  VAR_2 |= VAR_0;
 else
  VAR_2 &= ~VAR_0;

 if (FUNC_0(VAR_2 & VAR_4) & 1)
  VAR_2 |= VAR_1;
 else
  VAR_2 &= ~VAR_1;

 return VAR_2;
}
