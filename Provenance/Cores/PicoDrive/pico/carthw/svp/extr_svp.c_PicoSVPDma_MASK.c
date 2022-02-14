
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int romsize; scalar_t__ rom; } ;
struct TYPE_3__ {scalar_t__ dram; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (int,char*,unsigned int,int) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_5, int VAR_6, unsigned short **VAR_7, unsigned short **VAR_8)
{
 if (VAR_5 < VAR_3.romsize)
 {
  VAR_5 -= 2;
  *VAR_7 = (unsigned short *)(VAR_3.rom + (VAR_5&~1));
  *VAR_8 = (unsigned short *)(VAR_3.rom + VAR_3.romsize);
  return 1;
 }
 else if ((VAR_5 & 0xfe0000) == 0x300000)
 {
  FUNC_0(VAR_2|VAR_1, "SVP DmaSlow from %06x, len=%i", VAR_5, VAR_6);
  VAR_5 &= 0x1fffe;
  VAR_5 -= 2;
  *VAR_7 = (unsigned short *)(VAR_4->dram + VAR_5);
  *VAR_8 = (unsigned short *)(VAR_4->dram + sizeof(VAR_4->dram));
  return 1;
 }
 else
  FUNC_0(VAR_2|VAR_1|VAR_0, "SVP FIXME unhandled DmaSlow from %06x, len=%i", VAR_5, VAR_6);

 return 0;
}
