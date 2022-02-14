
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static u8 FUNC_0(unsigned int VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2 = (VAR_0 >> VAR_1) & 15;

 return VAR_2 ? (1 << (VAR_2 - 1)) : 0;
}
