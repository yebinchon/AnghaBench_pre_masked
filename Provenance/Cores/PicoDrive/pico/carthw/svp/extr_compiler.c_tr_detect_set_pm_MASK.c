
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int v; } ;
struct TYPE_4__ {int* pmac_write; int* pmac_read; int emu_status; TYPE_1__ pmc; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(unsigned int VAR_6, int *VAR_7, int VAR_8)
{
 u32 VAR_9, VAR_10;
 if (!((VAR_6&0xfef0) == 0x08e0 && (FUNC_0(*VAR_7)&0xfef0) == 0x08e0)) return 0;




 (*VAR_7)++;
 VAR_9 = VAR_8 | (FUNC_0((*VAR_7)++) << 16);
 VAR_4.pmc.v = VAR_9;
 VAR_3 |= VAR_0;
 VAR_2 |= VAR_0;
 VAR_4.emu_status |= VAR_1;
 VAR_5++;


 VAR_10 = FUNC_0(*VAR_7);
 if ((VAR_10 & 0xfff8) == 0x08 || (VAR_10 & 0xff8f) == 0x80)
 {
  int VAR_11 = (VAR_10 & 0xff8f) == 0x80;
  int VAR_12 = VAR_11 ? ((VAR_10>>4)&0x7) : (VAR_10&0x7);
  if (VAR_12 > 4) FUNC_1();
  if ((VAR_10 & 0x0f) != 0 && (VAR_10 & 0xf0) != 0) FUNC_1();
  if (VAR_11)
   VAR_4.pmac_write[VAR_12] = VAR_9;
  else
   VAR_4.pmac_read[VAR_12] = VAR_9;
  VAR_3 |= VAR_11 ? (1 << (VAR_12+25)) : (1 << (VAR_12+20));
  VAR_2 |= VAR_11 ? (1 << (VAR_12+25)) : (1 << (VAR_12+20));
  VAR_4.emu_status &= ~VAR_1;
  (*VAR_7)++;
  VAR_5++;
  return 5;
 }

 FUNC_1();
 return 4;
}
