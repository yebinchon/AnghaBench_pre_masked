
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* carthw; } ;
struct TYPE_4__ {TYPE_1__ ms; int rom; } ;
typedef int FPTR ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 unsigned char VAR_5 ;
 int FUNC_1 (int,char*,unsigned char,...) ;
 int FUNC_2 (int ,int,int,int ,int ) ;
 int FUNC_3 () ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_4(unsigned short VAR_7, unsigned char VAR_8)
{
  FUNC_1(VAR_3, "bank %04x %02x @ %04x", VAR_7, VAR_8, FUNC_3());
  switch (VAR_7 & 0x0f)
  {
    case 0x0c:
      FUNC_1(VAR_2|VAR_1, "%02x written to control reg!", VAR_8);
      break;
    case 0x0d:
      if (VAR_8 != 0)
        FUNC_1(VAR_2|VAR_1, "bank0 changed to %d!", VAR_8);
      break;
    case 0x0e:
      VAR_8 &= VAR_5;
      FUNC_2(VAR_6, 0x4000, 0x7fff, VAR_4.rom + (VAR_8 << 14), 0);



      break;
    case 0x0f:
      VAR_8 &= VAR_5;
      FUNC_2(VAR_6, 0x8000, 0xbfff, VAR_4.rom + (VAR_8 << 14), 0);



      break;
  }
  VAR_4.ms.carthw[VAR_7 & 0x0f] = VAR_8;
}
