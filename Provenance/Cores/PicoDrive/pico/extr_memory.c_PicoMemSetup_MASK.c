
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int romsize; scalar_t__ ram; scalar_t__ rom; } ;
struct TYPE_7__ {int * fetch32; int * fetch16; int * fetch8; int * checkpc; void* write32; void* write16; void* write8; void* read32; void* read16; void* read8; } ;
struct TYPE_6__ {unsigned long* Fetch; int write_long; int write_word; int write_byte; int read_long; int read_word; int read_byte; } ;
struct TYPE_5__ {int flags; int end; int start; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;
 TYPE_3__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 TYPE_1__ VAR_23 ;
 int FUNC_0 (scalar_t__,int,int,scalar_t__,int) ;
 int FUNC_1 () ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 scalar_t__ VAR_37 ;
 int FUNC_2 () ;

void FUNC_3(void)
{
  int VAR_38, VAR_39, VAR_40;


  FUNC_0(VAR_28, 0x000000, 0xffffff, VAR_30, 1);
  FUNC_0(VAR_25, 0x000000, 0xffffff, VAR_29, 1);
  FUNC_0(VAR_37, 0x000000, 0xffffff, VAR_32, 1);
  FUNC_0(VAR_34, 0x000000, 0xffffff, VAR_31, 1);



  VAR_38 = (1 << VAR_2) - 1;
  VAR_39 = (VAR_3.romsize + VAR_38) & ~VAR_38;
  FUNC_0(VAR_28, 0x000000, VAR_39 - 1, VAR_3.rom, 0);
  FUNC_0(VAR_25, 0x000000, VAR_39 - 1, VAR_3.rom, 0);


  if ((VAR_23.flags & VAR_22) && VAR_23.data != ((void*)0)) {
    VAR_39 = VAR_23.end - VAR_23.start;
    VAR_39 = (VAR_39 + VAR_38) & ~VAR_38;
    if (VAR_23.start + VAR_39 >= 0x1000000)
      VAR_39 = 0x1000000 - VAR_23.start;
    FUNC_0(VAR_28, VAR_23.start, VAR_23.start + VAR_39 - 1, VAR_11, 1);
    FUNC_0(VAR_25, VAR_23.start, VAR_23.start + VAR_39 - 1, VAR_7, 1);
    FUNC_0(VAR_37, VAR_23.start, VAR_23.start + VAR_39 - 1, VAR_19, 1);
    FUNC_0(VAR_34, VAR_23.start, VAR_23.start + VAR_39 - 1, VAR_15, 1);
  }


  FUNC_0(VAR_28, 0xa00000, 0xa0ffff, VAR_13, 1);
  FUNC_0(VAR_25, 0xa00000, 0xa0ffff, VAR_9, 1);
  FUNC_0(VAR_37, 0xa00000, 0xa0ffff, VAR_21, 1);
  FUNC_0(VAR_34, 0xa00000, 0xa0ffff, VAR_17, 1);


  FUNC_0(VAR_28, 0xa10000, 0xa1ffff, VAR_10, 1);
  FUNC_0(VAR_25, 0xa10000, 0xa1ffff, VAR_6, 1);
  FUNC_0(VAR_37, 0xa10000, 0xa1ffff, VAR_18, 1);
  FUNC_0(VAR_34, 0xa10000, 0xa1ffff, VAR_14, 1);


  for (VAR_40 = 0xc00000; VAR_40 < 0xe00000; VAR_40 += 0x010000) {
    if ((VAR_40 & 0xe700e0) != 0xc00000)
      continue;
    FUNC_0(VAR_28, VAR_40, VAR_40 + 0xffff, VAR_12, 1);
    FUNC_0(VAR_25, VAR_40, VAR_40 + 0xffff, VAR_8, 1);
    FUNC_0(VAR_37, VAR_40, VAR_40 + 0xffff, VAR_20, 1);
    FUNC_0(VAR_34, VAR_40, VAR_40 + 0xffff, VAR_16, 1);
  }


  for (VAR_40 = 0xe00000; VAR_40 < 0x1000000; VAR_40 += 0x010000) {
    FUNC_0(VAR_28, VAR_40, VAR_40 + 0xffff, VAR_3.ram, 0);
    FUNC_0(VAR_25, VAR_40, VAR_40 + 0xffff, VAR_3.ram, 0);
    FUNC_0(VAR_37, VAR_40, VAR_40 + 0xffff, VAR_3.ram, 0);
    FUNC_0(VAR_34, VAR_40, VAR_40 + 0xffff, VAR_3.ram, 0);
  }
  FUNC_2();
}
