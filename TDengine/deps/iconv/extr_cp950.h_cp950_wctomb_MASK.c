
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,unsigned char*,int,int) ;
 int FUNC_2 (int ,unsigned char*,int,int) ;
 int FUNC_3 (int ,unsigned char*,int,int) ;

__attribute__((used)) static int
FUNC_4 (conv_t VAR_2, unsigned char *VAR_3, ucs4_t VAR_4, int VAR_5)
{
  unsigned char VAR_6[2];
  int VAR_7;


  VAR_7 = FUNC_1(VAR_2,VAR_3,VAR_4,VAR_5);
  if (VAR_7 != VAR_0)
    return VAR_7;


  switch (VAR_4 >> 8) {
    case 0x00:
      if (VAR_4 == 0x00af) { VAR_6[0] = 0xa1; VAR_6[1] = 0xc2; VAR_7 = 2; break; }
      if (VAR_4 == 0x00a2 || VAR_4 == 0x00a3 || VAR_4 == 0x00a4)
        return VAR_0;
      break;
    case 0x02:
      if (VAR_4 == 0x02cd) { VAR_6[0] = 0xa1; VAR_6[1] = 0xc5; VAR_7 = 2; break; }
      break;
    case 0x20:
      if (VAR_4 == 0x2027) { VAR_6[0] = 0xa1; VAR_6[1] = 0x45; VAR_7 = 2; break; }
      if (VAR_4 == 0x20ac) { VAR_6[0] = 0xa3; VAR_6[1] = 0xe1; VAR_7 = 2; break; }
      if (VAR_4 == 0x2022 || VAR_4 == 0x203e)
        return VAR_0;
      break;
    case 0x22:
      if (VAR_4 == 0x2215) { VAR_6[0] = 0xa2; VAR_6[1] = 0x41; VAR_7 = 2; break; }
      if (VAR_4 == 0x2295) { VAR_6[0] = 0xa1; VAR_6[1] = 0xf2; VAR_7 = 2; break; }
      if (VAR_4 == 0x2299) { VAR_6[0] = 0xa1; VAR_6[1] = 0xf3; VAR_7 = 2; break; }
      if (VAR_4 == 0x223c)
        return VAR_0;
      break;
    case 0x25:
      if (VAR_4 == 0x2574) { VAR_6[0] = 0xa1; VAR_6[1] = 0x5a; VAR_7 = 2; break; }
      break;
    case 0x26:
      if (VAR_4 == 0x2609 || VAR_4 == 0x2641)
        return VAR_0;
      break;
    case 0xe0: case 0xe1: case 0xe2: case 0xe3: case 0xe4: case 0xe5:
    case 0xe6: case 0xe7: case 0xe8: case 0xe9: case 0xea: case 0xeb:
    case 0xec: case 0xed: case 0xee: case 0xef: case 0xf0: case 0xf1:
    case 0xf2: case 0xf3: case 0xf4: case 0xf5: case 0xf6:
      {

        unsigned int VAR_8 = VAR_4 - 0xe000;
        if (VAR_8 < 5809) {
          unsigned int VAR_9 = VAR_8 / 157;
          unsigned int VAR_10 = VAR_8 % 157;
          VAR_6[0] = VAR_9 + (VAR_9 < 5 ? 0xfa : VAR_9 < 24 ? 0x89 : 0x69);
          VAR_6[1] = VAR_10 + (VAR_10 < 0x3f ? 0x40 : 0x62);
          VAR_7 = 2;
          break;
        }
      }
      break;
    case 0xfe:
      if (VAR_4 == 0xfe51) { VAR_6[0] = 0xa1; VAR_6[1] = 0x4e; VAR_7 = 2; break; }
      if (VAR_4 == 0xfe68) { VAR_6[0] = 0xa2; VAR_6[1] = 0x42; VAR_7 = 2; break; }
      break;
    case 0xff:
      if (VAR_4 == 0xff0f) { VAR_6[0] = 0xa1; VAR_6[1] = 0xfe; VAR_7 = 2; break; }
      if (VAR_4 == 0xff3c) { VAR_6[0] = 0xa2; VAR_6[1] = 0x40; VAR_7 = 2; break; }
      if (VAR_4 == 0xff5e) { VAR_6[0] = 0xa1; VAR_6[1] = 0xe3; VAR_7 = 2; break; }
      if (VAR_4 == 0xffe0) { VAR_6[0] = 0xa2; VAR_6[1] = 0x46; VAR_7 = 2; break; }
      if (VAR_4 == 0xffe1) { VAR_6[0] = 0xa2; VAR_6[1] = 0x47; VAR_7 = 2; break; }
      if (VAR_4 == 0xffe3) { VAR_6[0] = 0xa1; VAR_6[1] = 0xc3; VAR_7 = 2; break; }
      if (VAR_4 == 0xffe5) { VAR_6[0] = 0xa2; VAR_6[1] = 0x44; VAR_7 = 2; break; }
      if (VAR_4 == 0xff64)
        return VAR_0;
      break;
  }
  if (VAR_7 == VAR_0)
    VAR_7 = FUNC_2(VAR_2,VAR_6,VAR_4,2);
  if (VAR_7 != VAR_0) {
    if (VAR_7 != 2) FUNC_0();
    if (!((VAR_6[0] == 0xc6 && VAR_6[1] >= 0xa1) || VAR_6[0] == 0xc7)) {
      if (VAR_5 < 2)
        return VAR_1;
      VAR_3[0] = VAR_6[0];
      VAR_3[1] = VAR_6[1];
      return 2;
    }
  }
  VAR_7 = FUNC_3(VAR_2,VAR_6,VAR_4,2);
  if (VAR_7 != VAR_0) {
    if (VAR_7 != 2) FUNC_0();
    if (VAR_5 < 2)
      return VAR_1;
    VAR_3[0] = VAR_6[0];
    VAR_3[1] = VAR_6[1];
    return 2;
  }

  return VAR_0;
}
