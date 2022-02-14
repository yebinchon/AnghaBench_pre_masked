
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static unsigned int FUNC_0(const u32 *VAR_2)
{
 unsigned int VAR_3 = 0;
 u32 VAR_4 = VAR_2[0];

 if (VAR_4 & 1)
  VAR_3 |= VAR_0;
 else
  VAR_3 |= VAR_1;
 return VAR_3;
}
