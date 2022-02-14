
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;



__attribute__((used)) static uint32 FUNC_0(uint32 VAR_0, uint32 VAR_1)
{
  int VAR_2;

  int VAR_3 = (VAR_0 & 0x3F);
  int VAR_4 = (VAR_0 & 0x80);
  int VAR_5 = (VAR_0 & 0x40);
  int VAR_6 = (VAR_0 & 0x0F);

  int VAR_7 = (VAR_1 & 0x3F);
  int VAR_8 = (VAR_1 & 0x40);
  int VAR_9 = (VAR_1 & 0x0F);

  if(VAR_9 == 0) return VAR_0;


  if(VAR_4) return VAR_0;

  VAR_2 = (VAR_8 ? VAR_7 : (VAR_5 ? (VAR_6 ? VAR_3 : VAR_7) : VAR_7));


  if((VAR_2 & 0x0F) == 0x00) VAR_2 &= 0x80;

  return (VAR_2 | 0x80);
}
