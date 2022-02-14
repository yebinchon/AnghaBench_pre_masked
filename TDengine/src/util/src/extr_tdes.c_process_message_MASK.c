
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* k; } ;
typedef TYPE_1__ key_set ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__* VAR_3 ;
 scalar_t__* VAR_4 ;
 scalar_t__* VAR_5 ;
 scalar_t__* VAR_6 ;
 scalar_t__* VAR_7 ;
 scalar_t__* VAR_8 ;
 int* VAR_9 ;
 int* VAR_10 ;
 int FUNC_0 (unsigned char*,unsigned char*,int) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int* VAR_11 ;
 int* VAR_12 ;

void FUNC_2(unsigned char* VAR_13, unsigned char* VAR_14, key_set* VAR_15, int VAR_16) {
  int VAR_17, VAR_18;
  int VAR_19;
  unsigned char VAR_20;

  unsigned char VAR_21[8];
  FUNC_1(VAR_21, 0, 8);
  FUNC_1(VAR_14, 0, 8);

  for (VAR_17 = 0; VAR_17 < 64; VAR_17++) {
    VAR_19 = VAR_10[VAR_17];
    VAR_20 = 0x80 >> ((VAR_19 - 1) % 8);
    VAR_20 &= VAR_13[(VAR_19 - 1) / 8];
    VAR_20 <<= ((VAR_19 - 1) % 8);

    VAR_21[VAR_17 / 8] |= (VAR_20 >> VAR_17 % 8);
  }

  unsigned char VAR_22[4], VAR_23[4];
  for (VAR_17 = 0; VAR_17 < 4; VAR_17++) {
    VAR_22[VAR_17] = VAR_21[VAR_17];
    VAR_23[VAR_17] = VAR_21[VAR_17 + 4];
  }

  unsigned char VAR_24[4], VAR_25[4], VAR_26[6], VAR_27[4];

  int VAR_28;
  for (VAR_18 = 1; VAR_18 <= 16; VAR_18++) {
    FUNC_0(VAR_24, VAR_23, 4);

    FUNC_1(VAR_26, 0, 6);

    for (VAR_17 = 0; VAR_17 < 48; VAR_17++) {
      VAR_19 = VAR_11[VAR_17];
      VAR_20 = 0x80 >> ((VAR_19 - 1) % 8);
      VAR_20 &= VAR_23[(VAR_19 - 1) / 8];
      VAR_20 <<= ((VAR_19 - 1) % 8);

      VAR_26[VAR_17 / 8] |= (VAR_20 >> VAR_17 % 8);
    }

    if (VAR_16 == VAR_0) {
      VAR_28 = 17 - VAR_18;
    } else {
      VAR_28 = VAR_18;
    }

    for (VAR_17 = 0; VAR_17 < 6; VAR_17++) {
      VAR_26[VAR_17] ^= VAR_15[VAR_28].k[VAR_17];
    }

    unsigned char VAR_29, VAR_30;

    for (VAR_17 = 0; VAR_17 < 4; VAR_17++) {
      VAR_27[VAR_17] = 0;
    }





    VAR_29 = 0;
    VAR_29 |= ((VAR_26[0] & 0x80) >> 6);
    VAR_29 |= ((VAR_26[0] & 0x04) >> 2);

    VAR_30 = 0;
    VAR_30 |= ((VAR_26[0] & 0x78) >> 3);

    VAR_27[0] |= ((unsigned char)VAR_1[VAR_29 * 16 + VAR_30] << 4);

    VAR_29 = 0;
    VAR_29 |= (VAR_26[0] & 0x02);
    VAR_29 |= ((VAR_26[1] & 0x10) >> 4);

    VAR_30 = 0;
    VAR_30 |= ((VAR_26[0] & 0x01) << 3);
    VAR_30 |= ((VAR_26[1] & 0xE0) >> 5);

    VAR_27[0] |= (unsigned char)VAR_2[VAR_29 * 16 + VAR_30];


    VAR_29 = 0;
    VAR_29 |= ((VAR_26[1] & 0x08) >> 2);
    VAR_29 |= ((VAR_26[2] & 0x40) >> 6);

    VAR_30 = 0;
    VAR_30 |= ((VAR_26[1] & 0x07) << 1);
    VAR_30 |= ((VAR_26[2] & 0x80) >> 7);

    VAR_27[1] |= ((unsigned char)VAR_3[VAR_29 * 16 + VAR_30] << 4);

    VAR_29 = 0;
    VAR_29 |= ((VAR_26[2] & 0x20) >> 4);
    VAR_29 |= (VAR_26[2] & 0x01);

    VAR_30 = 0;
    VAR_30 |= ((VAR_26[2] & 0x1E) >> 1);

    VAR_27[1] |= (unsigned char)VAR_4[VAR_29 * 16 + VAR_30];


    VAR_29 = 0;
    VAR_29 |= ((VAR_26[3] & 0x80) >> 6);
    VAR_29 |= ((VAR_26[3] & 0x04) >> 2);

    VAR_30 = 0;
    VAR_30 |= ((VAR_26[3] & 0x78) >> 3);

    VAR_27[2] |= ((unsigned char)VAR_5[VAR_29 * 16 + VAR_30] << 4);

    VAR_29 = 0;
    VAR_29 |= (VAR_26[3] & 0x02);
    VAR_29 |= ((VAR_26[4] & 0x10) >> 4);

    VAR_30 = 0;
    VAR_30 |= ((VAR_26[3] & 0x01) << 3);
    VAR_30 |= ((VAR_26[4] & 0xE0) >> 5);

    VAR_27[2] |= (unsigned char)VAR_6[VAR_29 * 16 + VAR_30];


    VAR_29 = 0;
    VAR_29 |= ((VAR_26[4] & 0x08) >> 2);
    VAR_29 |= ((VAR_26[5] & 0x40) >> 6);

    VAR_30 = 0;
    VAR_30 |= ((VAR_26[4] & 0x07) << 1);
    VAR_30 |= ((VAR_26[5] & 0x80) >> 7);

    VAR_27[3] |= ((unsigned char)VAR_7[VAR_29 * 16 + VAR_30] << 4);

    VAR_29 = 0;
    VAR_29 |= ((VAR_26[5] & 0x20) >> 4);
    VAR_29 |= (VAR_26[5] & 0x01);

    VAR_30 = 0;
    VAR_30 |= ((VAR_26[5] & 0x1E) >> 1);

    VAR_27[3] |= (unsigned char)VAR_8[VAR_29 * 16 + VAR_30];

    for (VAR_17 = 0; VAR_17 < 4; VAR_17++) {
      VAR_25[VAR_17] = 0;
    }

    for (VAR_17 = 0; VAR_17 < 32; VAR_17++) {
      VAR_19 = VAR_12[VAR_17];
      VAR_20 = 0x80 >> ((VAR_19 - 1) % 8);
      VAR_20 &= VAR_27[(VAR_19 - 1) / 8];
      VAR_20 <<= ((VAR_19 - 1) % 8);

      VAR_25[VAR_17 / 8] |= (VAR_20 >> VAR_17 % 8);
    }

    for (VAR_17 = 0; VAR_17 < 4; VAR_17++) {
      VAR_25[VAR_17] ^= VAR_22[VAR_17];
    }

    for (VAR_17 = 0; VAR_17 < 4; VAR_17++) {
      VAR_22[VAR_17] = VAR_24[VAR_17];
      VAR_23[VAR_17] = VAR_25[VAR_17];
    }
  }

  unsigned char VAR_31[8];
  for (VAR_17 = 0; VAR_17 < 4; VAR_17++) {
    VAR_31[VAR_17] = VAR_23[VAR_17];
    VAR_31[4 + VAR_17] = VAR_22[VAR_17];
  }

  for (VAR_17 = 0; VAR_17 < 64; VAR_17++) {
    VAR_19 = VAR_9[VAR_17];
    VAR_20 = 0x80 >> ((VAR_19 - 1) % 8);
    VAR_20 &= VAR_31[(VAR_19 - 1) / 8];
    VAR_20 <<= ((VAR_19 - 1) % 8);

    VAR_14[VAR_17 / 8] |= (VAR_20 >> VAR_17 % 8);
  }
}
