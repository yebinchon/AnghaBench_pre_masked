
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;



__attribute__((used)) static uint32 FUNC_0(uint32 VAR_0, uint32 VAR_1)
{
  int VAR_2;

  int VAR_3 = (VAR_0 & 0x7F);
  int VAR_4 = (VAR_0 & 0x80);
  int VAR_5 = (VAR_1 & 0x7F);

  if((VAR_1 & 0x0F) == 0) return VAR_0;

  VAR_2 = (VAR_4 ? VAR_3 : VAR_5);


  if((VAR_2 & 0x0F) == 0x00) VAR_2 &= 0xC0;

  return (VAR_2 | 0x80);
}
