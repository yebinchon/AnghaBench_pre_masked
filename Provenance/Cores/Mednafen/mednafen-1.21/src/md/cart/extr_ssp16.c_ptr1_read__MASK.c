
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int* RAM0; size_t* r0; int* RAM1; size_t* r1; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static u32 FUNC_0(int VAR_2, int VAR_3, int VAR_4)
{

 u32 VAR_5, VAR_6 = 0, VAR_7 = VAR_2 | VAR_3 | VAR_4;
 unsigned char *VAR_8 = ((void*)0);
 switch (VAR_7)
 {

  case 0x00:
  case 0x01:
  case 0x02: return VAR_1->RAM0[VAR_1->r0[VAR_7&3]];
  case 0x03: return VAR_1->RAM0[0];
  case 0x04:
  case 0x05:
  case 0x06: return VAR_1->RAM1[VAR_1->r1[VAR_7&3]];
  case 0x07: return VAR_1->RAM1[0];

  case 0x08:
  case 0x09:
  case 0x0a: return VAR_1->RAM0[VAR_1->r0[VAR_7&3]++];
  case 0x0b: return VAR_1->RAM0[1];
  case 0x0c:
  case 0x0d:
  case 0x0e: return VAR_1->RAM1[VAR_1->r1[VAR_7&3]++];
  case 0x0f: return VAR_1->RAM1[1];

  case 0x10:
  case 0x11:
  case 0x12: VAR_8 = &VAR_1->r0[VAR_7&3]; VAR_7 = VAR_1->RAM0[*VAR_8];
             if (!(VAR_0&7)) { (*VAR_8)--; return VAR_7; }
             VAR_6 = -1; goto modulo;
  case 0x13: return VAR_1->RAM0[2];
  case 0x14:
  case 0x15:
  case 0x16: VAR_8 = &VAR_1->r1[VAR_7&3]; VAR_7 = VAR_1->RAM1[*VAR_8];
             if (!(VAR_0&7)) { (*VAR_8)--; return VAR_7; }
             VAR_6 = -1; goto modulo;
  case 0x17: return VAR_1->RAM1[2];

  case 0x18:
  case 0x19:
  case 0x1a: VAR_8 = &VAR_1->r0[VAR_7&3]; VAR_7 = VAR_1->RAM0[*VAR_8];
             if (!(VAR_0&7)) { (*VAR_8)++; return VAR_7; }
             VAR_6 = 1; goto modulo;
  case 0x1b: return VAR_1->RAM0[3];
  case 0x1c:
  case 0x1d:
  case 0x1e: VAR_8 = &VAR_1->r1[VAR_7&3]; VAR_7 = VAR_1->RAM1[*VAR_8];
             if (!(VAR_0&7)) { (*VAR_8)++; return VAR_7; }
             VAR_6 = 1; goto modulo;
  case 0x1f: return VAR_1->RAM1[3];
 }

 return 0;

modulo:
 VAR_5 = (1 << (VAR_0&7)) - 1;
 *VAR_8 = (*VAR_8 & ~VAR_5) | ((*VAR_8 + VAR_6) & VAR_5);
 return VAR_7;
}
