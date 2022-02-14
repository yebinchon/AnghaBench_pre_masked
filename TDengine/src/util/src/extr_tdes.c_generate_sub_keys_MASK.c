
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* k; int* c; int* d; } ;
typedef TYPE_1__ key_set ;


 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;

void FUNC_0(unsigned char* VAR_3, key_set* VAR_4) {
  int VAR_5, VAR_6;
  int VAR_7;
  unsigned char VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

  for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
    VAR_4[0].k[VAR_5] = 0;
  }

  for (VAR_5 = 0; VAR_5 < 56; VAR_5++) {
    VAR_7 = VAR_0[VAR_5];
    VAR_8 = 0x80 >> ((VAR_7 - 1) % 8);
    VAR_8 &= VAR_3[(VAR_7 - 1) / 8];
    VAR_8 <<= ((VAR_7 - 1) % 8);

    VAR_4[0].k[VAR_5 / 8] |= (VAR_8 >> VAR_5 % 8);
  }

  for (VAR_5 = 0; VAR_5 < 3; VAR_5++) {
    VAR_4[0].c[VAR_5] = VAR_4[0].k[VAR_5];
  }

  VAR_4[0].c[3] = VAR_4[0].k[3] & 0xF0;

  for (VAR_5 = 0; VAR_5 < 3; VAR_5++) {
    VAR_4[0].d[VAR_5] = (VAR_4[0].k[VAR_5 + 3] & 0x0F) << 4;
    VAR_4[0].d[VAR_5] |= (VAR_4[0].k[VAR_5 + 4] & 0xF0) >> 4;
  }

  VAR_4[0].d[3] = (VAR_4[0].k[6] & 0x0F) << 4;

  for (VAR_5 = 1; VAR_5 < 17; VAR_5++) {
    for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
      VAR_4[VAR_5].c[VAR_6] = VAR_4[VAR_5 - 1].c[VAR_6];
      VAR_4[VAR_5].d[VAR_6] = VAR_4[VAR_5 - 1].d[VAR_6];
    }

    VAR_7 = VAR_1[VAR_5];
    if (VAR_7 == 1) {
      VAR_8 = 0x80;
    } else {
      VAR_8 = 0xC0;
    }


    VAR_9 = VAR_8 & VAR_4[VAR_5].c[0];
    VAR_10 = VAR_8 & VAR_4[VAR_5].c[1];
    VAR_11 = VAR_8 & VAR_4[VAR_5].c[2];
    VAR_12 = VAR_8 & VAR_4[VAR_5].c[3];

    VAR_4[VAR_5].c[0] <<= VAR_7;
    VAR_4[VAR_5].c[0] |= (VAR_10 >> (8 - VAR_7));

    VAR_4[VAR_5].c[1] <<= VAR_7;
    VAR_4[VAR_5].c[1] |= (VAR_11 >> (8 - VAR_7));

    VAR_4[VAR_5].c[2] <<= VAR_7;
    VAR_4[VAR_5].c[2] |= (VAR_12 >> (8 - VAR_7));

    VAR_4[VAR_5].c[3] <<= VAR_7;
    VAR_4[VAR_5].c[3] |= (VAR_9 >> (4 - VAR_7));


    VAR_9 = VAR_8 & VAR_4[VAR_5].d[0];
    VAR_10 = VAR_8 & VAR_4[VAR_5].d[1];
    VAR_11 = VAR_8 & VAR_4[VAR_5].d[2];
    VAR_12 = VAR_8 & VAR_4[VAR_5].d[3];

    VAR_4[VAR_5].d[0] <<= VAR_7;
    VAR_4[VAR_5].d[0] |= (VAR_10 >> (8 - VAR_7));

    VAR_4[VAR_5].d[1] <<= VAR_7;
    VAR_4[VAR_5].d[1] |= (VAR_11 >> (8 - VAR_7));

    VAR_4[VAR_5].d[2] <<= VAR_7;
    VAR_4[VAR_5].d[2] |= (VAR_12 >> (8 - VAR_7));

    VAR_4[VAR_5].d[3] <<= VAR_7;
    VAR_4[VAR_5].d[3] |= (VAR_9 >> (4 - VAR_7));

    for (VAR_6 = 0; VAR_6 < 48; VAR_6++) {
      VAR_7 = VAR_2[VAR_6];
      if (VAR_7 <= 28) {
        VAR_8 = 0x80 >> ((VAR_7 - 1) % 8);
        VAR_8 &= VAR_4[VAR_5].c[(VAR_7 - 1) / 8];
        VAR_8 <<= ((VAR_7 - 1) % 8);
      } else {
        VAR_8 = 0x80 >> ((VAR_7 - 29) % 8);
        VAR_8 &= VAR_4[VAR_5].d[(VAR_7 - 29) / 8];
        VAR_8 <<= ((VAR_7 - 29) % 8);
      }

      VAR_4[VAR_5].k[VAR_6 / 8] |= (VAR_8 >> VAR_6 % 8);
    }
  }
}
