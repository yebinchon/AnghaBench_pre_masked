
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int midflag; int ca; int sgc; int eg; int scieb; int scipd; int mcipd; } ;


 int FUNC_0 (char*,int) ;
 TYPE_1__ VAR_0 ;
 int* VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static u8
FUNC_3 (u32 VAR_2)
{
  VAR_2 &= 0x3F;

  if ((VAR_2 != 0x09) && (VAR_2 != 0x21))
    {
      FUNC_0("r_b scsp : reg %.2X\n", VAR_2);
    }


  switch (VAR_2)
    {
    case 0x01:
      VAR_1[VAR_2 ^ 3] &= 0x0F;
      break;

    case 0x04:
      return VAR_0.midflag;

    case 0x05:
      return FUNC_1();

    case 0x07:
      return FUNC_2();

    case 0x08:
      return (VAR_0.ca >> 8);

    case 0x09:
      return (VAR_0.ca & 0xE0) | (VAR_0.sgc << 5) | VAR_0.eg;

    case 0x1E:
      return (VAR_0.scieb >> 8);

    case 0x1F:
      return VAR_0.scieb;

    case 0x20:
      return (VAR_0.scipd >> 8);

    case 0x21:
      return VAR_0.scipd;

    case 0x2C:
      return (VAR_0.mcipd >> 8);

    case 0x2D:
      return VAR_0.mcipd;
    }

  return VAR_1[VAR_2 ^ 3];
}
