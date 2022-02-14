
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int buff ;
struct TYPE_4__ {int romsize; } ;
struct TYPE_3__ {int start; int end; int eeprom_type; int eeprom_bit_cl; int eeprom_bit_in; int eeprom_bit_out; int flags; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 () ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 char* VAR_7 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int,int,int,int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (int *) ;
 char* FUNC_12 (char*,int,int *) ;
 int * FUNC_13 (char const*,char*) ;
 int FUNC_14 (char*,char**) ;
 int FUNC_15 (char*,char const*,int) ;
 int FUNC_16 (char*,int*,int*,int*) ;
 int FUNC_17 () ;
 int FUNC_18 (int) ;
 scalar_t__ FUNC_19 (int,char*) ;
 int FUNC_20 (char*) ;
 char* FUNC_21 (char*) ;
 char* FUNC_22 (char*,char) ;
 scalar_t__ FUNC_23 (char*,char*) ;
 void* FUNC_24 (char*,char**,int ) ;

__attribute__((used)) static void FUNC_25(const char *VAR_8, int *VAR_9)
{
  int VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;
  const char *VAR_13, *VAR_14 = VAR_7;
  int VAR_15, VAR_16 = 0;
  char VAR_17[256], *VAR_18, *VAR_19;
  FILE *VAR_20;

  VAR_20 = FUNC_13(VAR_8, "r");
  if (VAR_20 == ((void*)0))
    VAR_20 = FUNC_13("pico/carthw.cfg", "r");
  if (VAR_20 == ((void*)0))
    FUNC_10(VAR_0, "couldn't open carthw.cfg!");

  for (;;)
  {
    if (VAR_20 != ((void*)0)) {
      VAR_18 = FUNC_12(VAR_17, sizeof(VAR_17), VAR_20);
      if (VAR_18 == ((void*)0))
        break;
    }
    else {
      if (*VAR_14 == 0)
        break;
      for (VAR_13 = VAR_14; *VAR_13 != 0 && *VAR_13 != '\n'; VAR_13++)
        ;
      while (*VAR_13 == '\n')
        VAR_13++;
      VAR_15 = VAR_13 - VAR_14;
      if (VAR_15 > sizeof(VAR_17) - 1)
        VAR_15 = sizeof(VAR_17) - 1;
      FUNC_15(VAR_17, VAR_14, VAR_15);
      VAR_17[VAR_15] = 0;
      VAR_18 = VAR_17;
      VAR_14 = VAR_13;
    }

    VAR_10++;
    VAR_18 = FUNC_21(VAR_18);
    if (*VAR_18 == 0 || *VAR_18 == '#')
      continue;

    if (*VAR_18 == '[') {
      VAR_11 = 0;
      VAR_12 = 0;
      continue;
    }

    if (VAR_12)
      continue;


    if (FUNC_14("check_str", &VAR_18))
    {
      int VAR_21;
      VAR_21 = FUNC_24(VAR_18, &VAR_19, 0);
      if (VAR_21 < 0 || VAR_21 > VAR_2.romsize) {
        FUNC_10(VAR_0, "carthw:%d: check_str offs out of range: %d\n", VAR_10, VAR_21);
 goto bad;
      }
      VAR_18 = FUNC_21(VAR_19);
      if (*VAR_18 != ',')
        goto bad;
      VAR_18 = FUNC_21(VAR_18 + 1);
      if (*VAR_18 != '"')
        goto bad;
      VAR_18++;
      VAR_19 = FUNC_22(VAR_18, '"');
      if (VAR_19 == ((void*)0))
        goto bad;
      *VAR_19 = 0;

      if (FUNC_19(VAR_21, VAR_18) == 0)
        VAR_11 = 1;
      else
        VAR_12 = 1;
      continue;
    }
    else if (FUNC_14("check_size_gt", &VAR_18))
    {
      int VAR_22;
      VAR_22 = FUNC_24(VAR_18, &VAR_19, 0);
      if (VAR_19 == VAR_18 || VAR_22 < 0)
        goto bad;

      if (VAR_2.romsize > VAR_22)
        VAR_11 = 1;
      else
        VAR_12 = 1;
      continue;
    }
    else if (FUNC_14("check_csum", &VAR_18))
    {
      int VAR_23;
      VAR_23 = FUNC_24(VAR_18, &VAR_19, 0);
      if (VAR_19 == VAR_18 || (VAR_23 & 0xffff0000))
        goto bad;

      if (VAR_23 == (FUNC_18(0x18c) & 0xffff))
        VAR_11 = 1;
      else
        VAR_12 = 1;
      continue;
    }
    else if (FUNC_14("check_crc32", &VAR_18))
    {
      unsigned int VAR_24;
      VAR_24 = FUNC_24(VAR_18, &VAR_19, 0);
      if (VAR_19 == VAR_18)
        goto bad;

      if (VAR_16 == 0)
        VAR_16 = FUNC_17();
      if (VAR_24 == VAR_16)
        VAR_11 = 1;
      else
        VAR_12 = 1;
      continue;
    }


    if (FUNC_14("hw", &VAR_18)) {
      if (!VAR_11)
        goto no_checks;
      FUNC_20(VAR_18);

      if (FUNC_23(VAR_18, "svp") == 0)
        FUNC_1();
      else if (FUNC_23(VAR_18, "pico") == 0)
        FUNC_0();
      else if (FUNC_23(VAR_18, "prot") == 0)
        FUNC_8();
      else if (FUNC_23(VAR_18, "ssf2_mapper") == 0)
        FUNC_9();
      else if (FUNC_23(VAR_18, "x_in_1_mapper") == 0)
        FUNC_2();
      else if (FUNC_23(VAR_18, "realtec_mapper") == 0)
        FUNC_6();
      else if (FUNC_23(VAR_18, "radica_mapper") == 0)
        FUNC_5();
      else if (FUNC_23(VAR_18, "piersolar_mapper") == 0)
        FUNC_3();
      else if (FUNC_23(VAR_18, "prot_lk3") == 0)
        FUNC_4();
      else {
        FUNC_10(VAR_0, "carthw:%d: unsupported mapper: %s", VAR_10, VAR_18);
        VAR_12 = 1;
      }
      continue;
    }
    if (FUNC_14("sram_range", &VAR_18)) {
      int VAR_25, VAR_26;

      if (!VAR_11)
        goto no_checks;
      FUNC_20(VAR_18);

      VAR_25 = FUNC_24(VAR_18, &VAR_19, 0);
      if (VAR_19 == VAR_18)
        goto bad;
      VAR_18 = FUNC_21(VAR_19);
      if (*VAR_18 != ',')
        goto bad;
      VAR_18 = FUNC_21(VAR_18 + 1);
      VAR_26 = FUNC_24(VAR_18, &VAR_19, 0);
      if (VAR_19 == VAR_18)
        goto bad;
      if (((VAR_25 | VAR_26) & 0xff000000) || VAR_25 > VAR_26) {
        FUNC_10(VAR_0, "carthw:%d: bad sram_range: %08x - %08x", VAR_10, VAR_25, VAR_26);
        goto bad_nomsg;
      }
      VAR_6.start = VAR_25;
      VAR_6.end = VAR_26;
      continue;
    }
    else if (FUNC_14("prop", &VAR_18)) {
      if (!VAR_11)
        goto no_checks;
      FUNC_20(VAR_18);

      if (FUNC_23(VAR_18, "no_sram") == 0)
        VAR_6.flags &= ~VAR_5;
      else if (FUNC_23(VAR_18, "no_eeprom") == 0)
        VAR_6.flags &= ~VAR_4;
      else if (FUNC_23(VAR_18, "filled_sram") == 0)
        *VAR_9 = 1;
      else if (FUNC_23(VAR_18, "force_6btn") == 0)
        VAR_3 |= VAR_1;
      else {
        FUNC_10(VAR_0, "carthw:%d: unsupported prop: %s", VAR_10, VAR_18);
        goto bad_nomsg;
      }
      FUNC_10(VAR_0, "game prop: %s", VAR_18);
      continue;
    }
    else if (FUNC_14("eeprom_type", &VAR_18)) {
      int VAR_27;
      if (!VAR_11)
        goto no_checks;
      FUNC_20(VAR_18);

      VAR_27 = FUNC_24(VAR_18, &VAR_19, 0);
      if (VAR_19 == VAR_18 || VAR_27 < 0)
        goto bad;
      VAR_6.eeprom_type = VAR_27;
      VAR_6.flags |= VAR_4;
      continue;
    }
    else if (FUNC_14("eeprom_lines", &VAR_18)) {
      int VAR_28, VAR_29, VAR_30;
      if (!VAR_11)
        goto no_checks;
      FUNC_20(VAR_18);

      if (!FUNC_16(VAR_18, &VAR_28, &VAR_29, &VAR_30))
        goto bad;
      if (VAR_28 < 0 || VAR_28 > 15 || VAR_29 < 0 || VAR_29 > 15 ||
          VAR_30 < 0 || VAR_30 > 15)
        goto bad;

      VAR_6.eeprom_bit_cl = VAR_28;
      VAR_6.eeprom_bit_in = VAR_29;
      VAR_6.eeprom_bit_out= VAR_30;
      continue;
    }
    else if ((VAR_15 = FUNC_14("prot_ro_value16", &VAR_18)) || FUNC_14("prot_rw_value16", &VAR_18)) {
      int VAR_31, VAR_32, VAR_33;
      if (!VAR_11)
        goto no_checks;
      FUNC_20(VAR_18);

      if (!FUNC_16(VAR_18, &VAR_31, &VAR_32, &VAR_33))
        goto bad;

      FUNC_7(VAR_31, VAR_32, VAR_33, VAR_15 ? 1 : 0);
      continue;
    }


bad:
    FUNC_10(VAR_0, "carthw:%d: unrecognized expression: %s", VAR_10, VAR_17);
bad_nomsg:
    VAR_12 = 1;
    continue;

no_checks:
    FUNC_10(VAR_0, "carthw:%d: command without any checks before it: %s", VAR_10, VAR_17);
    VAR_12 = 1;
    continue;
  }

  if (VAR_20 != ((void*)0))
    FUNC_11(VAR_20);
}
