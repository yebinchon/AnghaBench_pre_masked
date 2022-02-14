
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(unsigned short *VAR_3, int VAR_4)
{

  switch (VAR_4)
  {
    case 2:
      if ((*VAR_3 & 0xf000) != 0x6000)
        return 1;
      break;
    case 4:
      if ( (*VAR_3 & 0xff3f) == 0x4a38 ||
           (*VAR_3 & 0xc1ff) == 0x0038 ||
           (*VAR_3 & 0xf13f) == 0xb038)
        return 1;
      if (VAR_2 & (VAR_1|VAR_0))
        break;


      if ( (*VAR_3 & 0xfff8) == 0x4a10 ||
           (*VAR_3 & 0xfff8) == 0x4a28)
        return 1;
      break;
    case 6:
      if ( ((VAR_3[1] & 0xe0) == 0xe0 && (
            *VAR_3 == 0x4a39 ||
            *VAR_3 == 0x4a79 ||
            *VAR_3 == 0x4ab9 ||
            (*VAR_3 & 0xc1ff) == 0x0039 ||
            (*VAR_3 & 0xf13f) == 0xb039))||
            *VAR_3 == 0x0838 ||
            (*VAR_3 & 0xffbf) == 0x0c38)
        return 1;
      break;
    case 8:
      if ( ((VAR_3[2] & 0xe0) == 0xe0 && (
            *VAR_3 == 0x0839 ||
            (*VAR_3 & 0xffbf) == 0x0c39))||
            *VAR_3 == 0x0cb8)
        return 1;
      break;
    case 12:
      if (VAR_2 & (VAR_1|VAR_0))
        break;
      if ( (*VAR_3 & 0xf1f8) == 0x3010 &&
            (VAR_3[1]&0xf100) == 0x0000 &&
            (VAR_3[3]&0xf100) == 0x0000)
        return 1;
      break;
  }

  return 0;
}
