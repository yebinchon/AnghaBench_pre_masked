
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 unsigned char** VAR_0 ;

__attribute__((used)) static unsigned char FUNC_1(unsigned int VAR_1)
{
  if (VAR_1 == 0x8000)
  {
    return (FUNC_0() >> 8);
  }

  if (VAR_1 == 0xA000)
  {
    return (FUNC_0() & 0xFF);
  }

  return VAR_0[VAR_1 >> 10][VAR_1 & 0x03FF];
}
