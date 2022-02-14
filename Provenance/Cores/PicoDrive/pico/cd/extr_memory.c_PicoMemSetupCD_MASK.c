
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int romsize; scalar_t__ ram; scalar_t__ rom; } ;
struct TYPE_9__ {int * fetch32; int * fetch16; int * fetch8; int * checkpc; void* write32; void* write16; void* write8; void* read32; void* read16; void* read8; } ;
struct TYPE_8__ {unsigned long* Fetch; } ;
struct TYPE_7__ {unsigned long* Fetch; int write_long; int write_word; int write_byte; int read_long; int read_word; int read_byte; } ;
struct TYPE_6__ {scalar_t__ word_ram2M; scalar_t__ prg_ram; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__ VAR_3 ;
 TYPE_4__ VAR_4 ;
 TYPE_3__ VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_0 () ;
 int VAR_7 ;
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
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 TYPE_1__* VAR_26 ;
 int FUNC_1 (scalar_t__,int,int,scalar_t__,int) ;
 int FUNC_2 () ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 int FUNC_3 (int) ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 int VAR_40 ;
 scalar_t__ VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 scalar_t__ VAR_44 ;

void FUNC_4(void)
{

  FUNC_0();



  if (VAR_7 & VAR_2) {
    FUNC_1(VAR_28, 0x400000, 0x7fffff, VAR_11, 1);
    FUNC_1(VAR_27, 0x400000, 0x7fffff, VAR_10, 1);
    FUNC_1(VAR_30, 0x400000, 0x7fffff, VAR_19, 1);
    FUNC_1(VAR_29, 0x400000, 0x7fffff, VAR_18, 1);
  }


  FUNC_1(VAR_28, 0xa10000, 0xa1ffff, VAR_9, 1);
  FUNC_1(VAR_27, 0xa10000, 0xa1ffff, VAR_8, 1);
  FUNC_1(VAR_30, 0xa10000, 0xa1ffff, VAR_17, 1);
  FUNC_1(VAR_29, 0xa10000, 0xa1ffff, VAR_16, 1);


  FUNC_1(VAR_35, 0x000000, 0xffffff, VAR_37, 1);
  FUNC_1(VAR_32, 0x000000, 0xffffff, VAR_36, 1);
  FUNC_1(VAR_44, 0x000000, 0xffffff, VAR_39, 1);
  FUNC_1(VAR_41, 0x000000, 0xffffff, VAR_38, 1);


  FUNC_1(VAR_35, 0x000000, 0x07ffff, VAR_26->prg_ram, 0);
  FUNC_1(VAR_32, 0x000000, 0x07ffff, VAR_26->prg_ram, 0);
  FUNC_1(VAR_44, 0x000000, 0x07ffff, VAR_26->prg_ram, 0);
  FUNC_1(VAR_41, 0x000000, 0x07ffff, VAR_26->prg_ram, 0);
  FUNC_1(VAR_44, 0x000000, 0x01ffff, VAR_25, 1);
  FUNC_1(VAR_41, 0x000000, 0x01ffff, VAR_22, 1);


  FUNC_1(VAR_35, 0xfe0000, 0xfeffff, VAR_14, 1);
  FUNC_1(VAR_32, 0xfe0000, 0xfeffff, VAR_12, 1);
  FUNC_1(VAR_44, 0xfe0000, 0xfeffff, VAR_23, 1);
  FUNC_1(VAR_41, 0xfe0000, 0xfeffff, VAR_20, 1);


  FUNC_1(VAR_35, 0xff0000, 0xffffff, VAR_15, 1);
  FUNC_1(VAR_32, 0xff0000, 0xffffff, VAR_13, 1);
  FUNC_1(VAR_44, 0xff0000, 0xffffff, VAR_24, 1);
  FUNC_1(VAR_41, 0xff0000, 0xffffff, VAR_21, 1);


  FUNC_3(1);
}
