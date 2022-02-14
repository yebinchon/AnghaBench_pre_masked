
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char) ;
 unsigned char** VAR_0 ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_1, unsigned char VAR_2)
{
  if (VAR_1 == 0x6000)
  {
    FUNC_0(VAR_2);
    return;
  }

  VAR_0[VAR_1 >> 10][VAR_1 & 0x03FF] = VAR_2;
}
