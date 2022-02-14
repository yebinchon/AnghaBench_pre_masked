
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int uint16 ;


 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_3)
{
  uint16 VAR_4;


  uint32 VAR_5 = (VAR_1[23] << 17) | (VAR_0 << 1);

  do
  {

    VAR_4 = *(uint16 *)(VAR_2 + (VAR_5 & 0xFFFF));


    VAR_5 += 2;


    VAR_5 = (VAR_1[23] << 17) | (VAR_5 & 0x1FFFF);


    FUNC_0(VAR_4);
  }
  while (--VAR_3);


  VAR_0 = (VAR_5 >> 1) & 0xffff;
}
