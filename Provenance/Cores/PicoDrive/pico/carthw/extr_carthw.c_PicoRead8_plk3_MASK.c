
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int,...) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static u32 FUNC_1(u32 VAR_4)
{
  u32 VAR_5 = 0;
  switch (VAR_2) {
    case 1: VAR_5 = VAR_3 >> 1; break;
    case 2:
      VAR_5 = ((VAR_3 >> 4) | (VAR_3 << 4)) & 0xff;
      break;
    case 3:
      VAR_5 = VAR_3;
      VAR_5 = (VAR_5 >> 4) | (VAR_5 << 4);
      VAR_5 = ((VAR_5 & 0xcc) >> 2) | ((VAR_5 & 0x33) << 2);
      VAR_5 = ((VAR_5 & 0xaa) >> 1) | ((VAR_5 & 0x55) << 1);
      break;





    default:
      FUNC_0(VAR_0, "unhandled prot cmd %02x @%06x", VAR_2, VAR_1);
      break;
  }

  FUNC_0(VAR_0, "prot r8  [%06x]   %02x @%06x", VAR_4, VAR_5, VAR_1);
  return VAR_5;
}
