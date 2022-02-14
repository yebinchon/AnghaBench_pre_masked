
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__* VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static unsigned int FUNC_0(void)
{

  int VAR_4 = ((VAR_0 << 1) & 0x3FC) | ((VAR_0 & 0x200) >> 8) | (VAR_0 & 0x3C00);


  VAR_1 = 0;


  VAR_0 += (VAR_2[15] + 1);


  return *(uint16 *) &VAR_3[VAR_4];
}
