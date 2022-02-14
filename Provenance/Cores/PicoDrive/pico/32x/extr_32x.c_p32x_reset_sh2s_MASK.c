
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {unsigned int romsize; scalar_t__ rom; } ;
struct TYPE_10__ {unsigned short* regs; } ;
struct TYPE_9__ {scalar_t__ sdram; } ;
struct TYPE_8__ {int m68krcycles_done; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 TYPE_7__ VAR_3 ;
 TYPE_6__ VAR_4 ;
 TYPE_5__* VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (scalar_t__,scalar_t__,unsigned int) ;
 TYPE_1__ VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,unsigned int) ;
 TYPE_1__ VAR_9 ;

void FUNC_8(void)
{
  FUNC_2(VAR_0, "sh2 reset");

  FUNC_5(&VAR_6);
  FUNC_5(&VAR_9);
  FUNC_4(&VAR_6);
  FUNC_4(&VAR_9);



  if (VAR_7 == ((void*)0)) {
    unsigned int VAR_10, VAR_11, VAR_12;
    unsigned int VAR_13;


    VAR_10 = FUNC_0(*(unsigned int *)(VAR_3.rom + 0x3d4)) & ~0xf0000000;
    VAR_11 = FUNC_0(*(unsigned int *)(VAR_3.rom + 0x3d8)) & ~0xf0000000;
    VAR_12= FUNC_0(*(unsigned int *)(VAR_3.rom + 0x3dc));
    if (VAR_12 > VAR_3.romsize || VAR_10 + VAR_12 > VAR_3.romsize ||
        VAR_12 > 0x40000 || VAR_11 + VAR_12 > 0x40000 || (VAR_10 & 3) || (VAR_11 & 3)) {
      FUNC_2(VAR_2|VAR_1, "32x: invalid initial data ptrs: %06x -> %06x, %06x",
        VAR_10, VAR_11, VAR_12);
    }
    else
      FUNC_3(VAR_5->sdram + VAR_11, VAR_3.rom + VAR_10, VAR_12);


    VAR_13 = FUNC_0(*(unsigned int *)(VAR_3.rom + 0x3e8));
    FUNC_6(0, 0x20004000);
    FUNC_7(0, VAR_13);


    VAR_4.regs[0x28 / 2] = *(unsigned short *)(VAR_3.rom + 0x18e);

  }


  if (VAR_8 == ((void*)0)) {
    unsigned int VAR_14;


    VAR_14 = FUNC_0(*(unsigned int *)(VAR_3.rom + 0x3ec));
    FUNC_6(1, 0x20004000);
    FUNC_7(1, VAR_14);

  }

  VAR_6 = VAR_9 = FUNC_1();
}
