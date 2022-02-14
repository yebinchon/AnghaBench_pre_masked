
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;



__attribute__((used)) static uint32 FUNC_0(uint32 VAR_0, uint32 VAR_1)
{
  int VAR_2 = (VAR_0 & 0x7F);
  int VAR_3 = (VAR_0 & 0x40);
  int VAR_4 = (VAR_0 & 0x0F);

  int VAR_5 = (VAR_1 & 0x7F);
  int VAR_6 = (VAR_1 & 0x40);
  int VAR_7 = (VAR_1 & 0x0F);

  int VAR_8 = (VAR_6 ? (VAR_7 ? VAR_5 : VAR_2) : (VAR_3 ? (VAR_4 ? VAR_2 : VAR_5) : (VAR_7 ? VAR_5 : VAR_2)));


  VAR_8 |= ((VAR_6 | VAR_3) << 1);


  if((VAR_8 & 0x0F) == 0x00) VAR_8 &= 0x80;

  return (VAR_8);
}
