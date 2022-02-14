
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int address; int TA; int mode; int TB; int status; } ;
struct TYPE_5__ {TYPE_1__ ST; } ;
struct TYPE_6__ {int dacout; int dacen; int addr_A1; int* REGS; TYPE_2__ OPN; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int ,char*,int,...) ;
 int FUNC_4 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_3__ VAR_11 ;
 int FUNC_5 (int,int,int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(u32 VAR_12, u32 VAR_13, int VAR_14)
{
  int VAR_15;

  VAR_12 &= 3;
  if (VAR_12 == 1 && VAR_11 == 0x2a)
  {
    int VAR_16 = FUNC_4(VAR_14);

    VAR_11 = ((int)VAR_13 - 0x80) << 6;
    if (VAR_4 && VAR_11 && VAR_16 >= VAR_3)
      FUNC_0(VAR_16);
    return 0;
  }

  switch (VAR_12)
  {
    case 0:
      VAR_11 = VAR_13;
      VAR_11 = 0;



      return 0;

    case 1:
      if (VAR_11 != 0)
        return 0;

      VAR_15 = VAR_11;
      VAR_11[VAR_15] = VAR_13;

      switch (VAR_15)
      {
        case 0x24:
        case 0x25: {
          int VAR_17 = (VAR_15 == 0x24) ? ((VAR_11 & 0x03)|(((int)VAR_13)<<2))
                                     : ((VAR_11 & 0x3fc)|(VAR_13&3));
          if (VAR_11 != VAR_17)
          {

            VAR_11 = VAR_17;


            VAR_8 = VAR_5 * (1024 - VAR_17);
            if (VAR_11 & 1) {

              int VAR_18 = VAR_14 ? FUNC_6() : FUNC_7();
              VAR_7 = (VAR_18 << 8) + VAR_8;
            }
            FUNC_3(VAR_0, "timer a set to %i, %i", 1024 - VAR_17, VAR_7>>8);
          }
          return 0;
        }
        case 0x26:
          if (VAR_11 != VAR_13) {

            VAR_11 = VAR_13;


            VAR_10 = VAR_6 * (256 - VAR_13);
            if (VAR_11 & 2) {
              int VAR_19 = VAR_14 ? FUNC_6() : FUNC_7();
              VAR_9 = (VAR_19 << 8) + VAR_10;
            }
            FUNC_3(VAR_0, "timer b set to %i, %i", 256 - VAR_13, VAR_9>>8);
          }
          return 0;
        case 0x27: {
          int VAR_20 = VAR_11;
          int VAR_21 = VAR_14 ? FUNC_6() : FUNC_7();
          VAR_11 = VAR_13;

          FUNC_3(VAR_0, "st mode %02x", VAR_13);
          FUNC_5(VAR_21, VAR_20, VAR_13);


          if (VAR_13 & 0x10)
            VAR_11 &= ~1;


          if (VAR_13 & 0x20)
            VAR_11 &= ~2;

          if ((VAR_13 ^ VAR_20) & 0xc0) {



            return 1;
          }
          return 0;
        }
        case 0x2b: {
          int VAR_22 = FUNC_4(VAR_14);
          VAR_11 = VAR_13 & 0x80;
          if (VAR_13 & 0x80) VAR_3 = VAR_22;



          return 0;
        }
      }
      break;

    case 2:
      VAR_11 = VAR_13;
      VAR_11 = 1;



      return 0;

    case 3:
      if (VAR_11 != 1)
        return 0;

      VAR_15 = VAR_11 | 0x100;
      VAR_11[VAR_15] = VAR_13;
      break;
  }





  return FUNC_1(VAR_12, VAR_13);
}
