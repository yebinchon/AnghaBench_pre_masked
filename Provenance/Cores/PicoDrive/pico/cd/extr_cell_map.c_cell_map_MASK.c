
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(int VAR_0)
{
  int VAR_1, VAR_2;

  switch ((VAR_0 >> 12) & 7) {
    case 0:
    case 1:
    case 2:
    case 3:
      VAR_1 = VAR_0 >> 8;
      VAR_2 = VAR_0 & 0xff;
      break;
    case 4:
    case 5:
      VAR_1 = VAR_0 >> 7;
      VAR_2 = VAR_0 & 0x7f;
      VAR_2 |= 0x10000 >> 8;
      break;
    case 6:
      VAR_1 = VAR_0 >> 6;
      VAR_2 = VAR_0 & 0x3f;
      VAR_2 |= 0x18000 >> 8;
      break;
    case 7:
      VAR_1 = VAR_0 >> 5;
      VAR_2 = VAR_0 & 0x1f;
      VAR_2 |= (VAR_0 & 0x7800) >> 6;
      break;
    default:
      VAR_1 = VAR_2 = 0;
      break;
  }

  return (VAR_1 & 0x3f) + VAR_2*64;
}
