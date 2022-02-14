
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 unsigned char** VAR_0 ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_1, unsigned char VAR_2)
{
  if (VAR_1 == 0x4000)
  {
    FUNC_0(2,VAR_2);
    return;
  }

  if (VAR_1 == 0x6000)
  {
    FUNC_0(3,VAR_2);
    return;
  }

  if (VAR_1 == 0x8000)
  {
    FUNC_0(0,VAR_2);
    return;
  }

  if (VAR_1 == 0xA000)
  {
    FUNC_0(1,VAR_2);
    return;
  }

  if (VAR_1 == 0xFFFE)
  {
    FUNC_0(2,(VAR_2 << 1) & 0xFF);
    FUNC_0(3,(1 + (VAR_2 << 1)) & 0xFF);
  }
  else if (VAR_1 == 0xFFFF)
  {
    FUNC_0(0,(VAR_2 << 1) & 0xFF);
    FUNC_0(1,(1 + (VAR_2 << 1)) & 0xFF);
  }

  VAR_0[VAR_1 >> 10][VAR_1 & 0x03FF] = VAR_2;
}
