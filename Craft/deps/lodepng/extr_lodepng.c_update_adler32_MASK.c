
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned FUNC_0(unsigned VAR_0, const unsigned char* VAR_1, unsigned VAR_2)
{
   unsigned VAR_3 = VAR_0 & 0xffff;
   unsigned VAR_4 = (VAR_0 >> 16) & 0xffff;

  while(VAR_2 > 0)
  {

    unsigned VAR_5 = VAR_2 > 5550 ? 5550 : VAR_2;
    VAR_2 -= VAR_5;
    while(VAR_5 > 0)
    {
      VAR_3 += (*VAR_1++);
      VAR_4 += VAR_3;
      VAR_5--;
    }
    VAR_3 %= 65521;
    VAR_4 %= 65521;
  }

  return (VAR_4 << 16) | VAR_3;
}
