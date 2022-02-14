
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_24__ ;
typedef struct TYPE_29__ TYPE_22__ ;
typedef struct TYPE_28__ TYPE_20__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_16__ ;


struct TYPE_32__ {int mask; void* addr; } ;
struct TYPE_31__ {void const** write8_tab; void const** write16_tab; TYPE_16__* read16_map; TYPE_3__* read8_map; } ;
struct TYPE_27__ {int ncart_in; } ;
struct TYPE_30__ {unsigned int romsize; scalar_t__ rom; TYPE_1__ m; } ;
struct TYPE_29__ {unsigned long* Fetch; } ;
struct TYPE_28__ {scalar_t__ sdram; scalar_t__ m68k_rom; scalar_t__ m68k_rom_bank; } ;
struct TYPE_26__ {int mask; void* addr; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (scalar_t__) ;
 TYPE_24__ VAR_2 ;
 TYPE_20__* VAR_3 ;
 int FUNC_3 (int) ;
 TYPE_22__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int,scalar_t__,int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 () ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 TYPE_2__ VAR_19 ;
 TYPE_20__* FUNC_8 (int,int,int ,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int VAR_20 ;
 int VAR_21 ;
 TYPE_3__ VAR_22 ;
 TYPE_3__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 TYPE_16__* VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 TYPE_3__* VAR_30 ;
 int VAR_31 ;
 TYPE_3__ VAR_32 ;
 TYPE_3__ VAR_33 ;
 TYPE_3__* VAR_34 ;
 TYPE_3__ VAR_35 ;
 TYPE_3__ VAR_36 ;
 TYPE_3__ VAR_37 ;
 TYPE_3__ VAR_38 ;
 TYPE_3__* VAR_39 ;
 TYPE_3__ VAR_40 ;
 TYPE_3__ VAR_41 ;
 TYPE_3__ VAR_42 ;
 TYPE_3__ VAR_43 ;
 TYPE_2__ VAR_44 ;
 int FUNC_10 (int ,int,int,int ,int) ;
 int VAR_45 ;
 int VAR_46 ;

void FUNC_11(void)
{
  unsigned int VAR_47;
  int VAR_48;

  VAR_3 = FUNC_8(0x06000000, sizeof(*VAR_3), 0, 0);
  if (VAR_3 == ((void*)0)) {
    FUNC_6(VAR_0, "OOM");
    return;
  }

  FUNC_7();






  if (!VAR_2.m.ncart_in) {

    VAR_47 = sizeof(VAR_3->m68k_rom_bank);
    FUNC_5(VAR_16, 0x000000, VAR_47 - 1, VAR_3->m68k_rom_bank, 0);
    FUNC_5(VAR_15, 0x000000, VAR_47 - 1, VAR_3->m68k_rom_bank, 0);
    FUNC_5(VAR_18, 0x000000, VAR_47 - 1, VAR_14, 1);
    FUNC_5(VAR_17, 0x000000, VAR_47 - 1, VAR_10, 1);


    VAR_47 = (VAR_2.romsize + VAR_1) & ~VAR_1;
    if (VAR_47 > 0x80000)
      VAR_47 = 0x80000;
    FUNC_5(VAR_16, 0x880000, 0x880000 + VAR_47 - 1, VAR_2.rom, 0);
    FUNC_5(VAR_15, 0x880000, 0x880000 + VAR_47 - 1, VAR_2.rom, 0);
    FUNC_5(VAR_18, 0x880000, 0x880000 + VAR_47 - 1, VAR_13, 1);
    FUNC_5(VAR_17, 0x880000, 0x880000 + VAR_47 - 1, VAR_9, 1);
    FUNC_4(0);
    FUNC_5(VAR_18, 0x900000, 0x9fffff, VAR_12, 1);
    FUNC_5(VAR_17, 0x900000, 0x9fffff, VAR_8, 1);
  }


  FUNC_5(VAR_16, 0xa10000, 0xa1ffff, VAR_6, 1);
  FUNC_5(VAR_15, 0xa10000, 0xa1ffff, VAR_5, 1);
  FUNC_5(VAR_18, 0xa10000, 0xa1ffff, VAR_11, 1);
  FUNC_5(VAR_17, 0xa10000, 0xa1ffff, VAR_7, 1);



  for (VAR_48 = 0; VAR_48 < FUNC_0(VAR_30); VAR_48++) {
    VAR_30[VAR_48].addr = FUNC_1(VAR_31);
    VAR_26[VAR_48].addr = FUNC_1(VAR_27);
  }

  for (VAR_48 = 0; VAR_48 < FUNC_0(VAR_39); VAR_48++) {
    VAR_39[VAR_48] = VAR_42;
    VAR_34[VAR_48] = VAR_36;
  }


  for (VAR_48 = 0x40; VAR_48 <= 0x5f; VAR_48++) {
    VAR_39[VAR_48 >> 1] =
    VAR_34[VAR_48 >> 1] = VAR_43;
  }


  VAR_30[0x00/2].addr = VAR_30[0x20/2].addr = FUNC_1(VAR_28);
  VAR_26[0x00/2].addr = VAR_26[0x20/2].addr = FUNC_1(VAR_24);
  VAR_39[0x00/2] = VAR_39[0x20/2] = VAR_37;
  VAR_34[0x00/2] = VAR_34[0x20/2] = VAR_32;

  VAR_30[0x02/2].addr = VAR_30[0x22/2].addr =
  VAR_26[0x02/2].addr = VAR_26[0x22/2].addr = FUNC_2(VAR_2.rom);
  VAR_30[0x02/2].mask = VAR_30[0x22/2].mask =
  VAR_26[0x02/2].mask = VAR_26[0x22/2].mask = 0x3fffff;

  VAR_30[0x04/2].mask = VAR_30[0x24/2].mask =
  VAR_26[0x04/2].mask = VAR_26[0x24/2].mask = 0x01ffff;

  VAR_30[0x06/2].addr = VAR_30[0x26/2].addr =
  VAR_26[0x06/2].addr = VAR_26[0x26/2].addr = FUNC_2(VAR_3->sdram);
  VAR_39[0x06/2] = VAR_40;
  VAR_39[0x26/2] = VAR_41;
  VAR_34[0x06/2] = VAR_34[0x26/2] = VAR_35;
  VAR_30[0x06/2].mask = VAR_30[0x26/2].mask =
  VAR_26[0x06/2].mask = VAR_26[0x26/2].mask = 0x03ffff;

  VAR_30[0xc0/2].addr = FUNC_1(VAR_29);
  VAR_26[0xc0/2].addr = FUNC_1(VAR_25);
  VAR_39[0xc0/2] = VAR_38;
  VAR_34[0xc0/2] = VAR_33;

  VAR_30[0xff/2].addr = FUNC_1(VAR_21);
  VAR_26[0xff/2].addr = FUNC_1(VAR_20);
  VAR_39[0xff/2] = VAR_23;
  VAR_34[0xff/2] = VAR_22;


  FUNC_3(1);

  VAR_19 = VAR_44 = VAR_30;
  VAR_19 = VAR_44 = VAR_26;
  VAR_19 = VAR_44 = (const void **)(void *)VAR_39;
  VAR_19 = VAR_44 = (const void **)(void *)VAR_34;

  FUNC_9(&VAR_19);
  FUNC_9(&VAR_44);


  FUNC_10(VAR_46, 0x8000, 0xffff, VAR_45, 1);
}
