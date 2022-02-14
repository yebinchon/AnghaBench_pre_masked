
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int midflag; int ca; int sgc; int eg; int timasd; int timbsd; int timcsd; int scieb; int scipd; int mcipd; } ;


 int FUNC_0 (char*,int) ;
 TYPE_1__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static u16
FUNC_3 (u32 VAR_2)
{
  VAR_2 &= 0x3E;

  if ((VAR_2 != 0x20) && (VAR_2 != 0x08))
    {
      FUNC_0("r_w scsp : reg %.2X\n", VAR_2 * 2);
    }

  switch (VAR_2)
    {
    case 0x00:
      *(u16 *)&VAR_1[VAR_2 ^ 2] &= 0xFF0F;
      break;

    case 0x04:
      return (VAR_0.midflag << 8) | FUNC_1();

    case 0x06:
      return FUNC_2();

    case 0x08:
      return (VAR_0.ca & 0x780) | (VAR_0.sgc << 5) | VAR_0.eg;

    case 0x18:
      return (VAR_0.timasd << 8);

    case 0x1A:
      return (VAR_0.timbsd << 8);

    case 0x1C:
      return (VAR_0.timcsd << 8);

    case 0x1E:
      return VAR_0.scieb;

    case 0x20:
      return VAR_0.scipd;

    case 0x2C:
      return VAR_0.mcipd;
    }

  return *(u16 *)&VAR_1[VAR_2 ^ 2];
}
