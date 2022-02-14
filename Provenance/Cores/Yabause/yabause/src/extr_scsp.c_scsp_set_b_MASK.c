
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int pointer ;
struct TYPE_4__ {int (* SetFetch ) (int,int,int ) ;} ;
struct TYPE_3__ {int mem4b; int mvol; int rbl; int rbp; int mslc; int dmea; int drga; int dmlen; int dmfl; int timasd; int timacnt; int timbsd; int timbcnt; int timcsd; int timccnt; int scieb; int scipd; int scilv0; int scilv1; int scilv2; int mcieb; int mcipd; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int* VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (int,int,int ) ;
 int FUNC_8 (int,int,int ) ;
 int FUNC_9 (int,int,int ) ;
 int FUNC_10 (int,int,int ) ;
 int FUNC_11 (int,int,int ) ;

__attribute__((used)) static void
FUNC_12 (u32 VAR_4, u8 VAR_5)
{
  if ((VAR_4 != 0x408) && (VAR_4 != 0x41D))
    {
      FUNC_0("scsp : reg %.2X = %.2X\n", VAR_4 & 0x3F, VAR_5);
    }

  VAR_3[VAR_4 ^ 3] = VAR_5;

  switch (VAR_4 & 0x3F)
    {
    case 0x00:
      VAR_2.mem4b = (VAR_5 >> 1) & 0x1;
      if (VAR_2.mem4b)
        {
          VAR_0->SetFetch(0x000000, 0x080000, (pointer)VAR_1);
        }
      else
        {
          VAR_0->SetFetch(0x000000, 0x040000, (pointer)VAR_1);
          VAR_0->SetFetch(0x040000, 0x080000, (pointer)VAR_1);
          VAR_0->SetFetch(0x080000, 0x0C0000, (pointer)VAR_1);
          VAR_0->SetFetch(0x0C0000, 0x100000, (pointer)VAR_1);
        }
      return;

    case 0x01:
      VAR_2.mvol = VAR_5 & 0xF;
      return;

    case 0x02:
      VAR_2.rbl = (VAR_2.rbl & 1) + ((VAR_5 & 1) << 1);
      return;

    case 0x03:
      VAR_2.rbl = (VAR_2.rbl & 2) + ((VAR_5 >> 7) & 1);



      VAR_2.rbp = (VAR_5 & 0x7F) * (4 * 1024 * 2);

      return;

    case 0x07:
      FUNC_3(VAR_5);
      return;

    case 0x08:
      VAR_2.mslc = (VAR_5 >> 3) & 0x1F;
      FUNC_6 ();
      return;

    case 0x12:
      VAR_2.dmea = (VAR_2.dmea & 0x700FE) + (VAR_5 << 8);
      return;

    case 0x13:
      VAR_2.dmea = (VAR_2.dmea & 0x7FF00) + (VAR_5 & 0xFE);
      return;

    case 0x14:
      VAR_2.dmea = (VAR_2.dmea & 0xFFFE) + ((VAR_5 & 0x70) << 12);
      VAR_2.drga = (VAR_2.drga & 0xFE) + ((VAR_5 & 0xF) << 8);
      return;

    case 0x15:
      VAR_2.drga = (VAR_2.drga & 0xF00) + (VAR_5 & 0xFE);
      return;

    case 0x16:
      VAR_2.dmlen = (VAR_2.dmlen & 0xFE) + ((VAR_5 & 0xF) << 8);
      if ((VAR_2.dmfl = VAR_5 & 0xF0) & 0x10) FUNC_1 ();
      return;

    case 0x17:
      VAR_2.dmlen = (VAR_2.dmlen & 0xF00) + (VAR_5 & 0xFE);
      return;

    case 0x18:
      VAR_2.timasd = VAR_5 & 7;
      return;

    case 0x19:
      VAR_2.timacnt = VAR_5 << 8;
      return;

    case 0x1A:
      VAR_2.timbsd = VAR_5 & 7;
      return;

    case 0x1B:
      VAR_2.timbcnt = VAR_5 << 8;
      return;

    case 0x1C:
      VAR_2.timcsd = VAR_5 & 7;
      return;

    case 0x1D:
      VAR_2.timccnt = VAR_5 << 8;
      return;

    case 0x1E:
    {
      int VAR_6;
      VAR_2.scieb = (VAR_2.scieb & 0xFF) + (VAR_5 << 8);

      for (VAR_6 = 0; VAR_6 < 3; VAR_6++)
        {
          if (VAR_2.scieb & (1 << VAR_6) && VAR_2.scipd & (1 << VAR_6))
            FUNC_5 ((1 << (VAR_6+8)));
        }

      return;
    }
    case 0x1F:
    {
      int VAR_7;
      VAR_2.scieb = (VAR_2.scieb & 0x700) + VAR_5;

      for (VAR_7 = 0; VAR_7 < 8; VAR_7++)
        {
          if (VAR_2.scieb & (1 << VAR_7) && VAR_2.scipd & (1 << VAR_7))
            FUNC_5 ((1 << VAR_7));
        }
      return;
    }
    case 0x21:
      if (VAR_5 & 0x20) FUNC_4 (0x20);
      return;

    case 0x22:
      VAR_2.scipd &= ~(VAR_5 << 8);
      return;

    case 0x23:
      VAR_2.scipd &= ~(u32)VAR_5;
      return;

    case 0x25:
      VAR_2.scilv0 = VAR_5;
      return;

    case 0x27:
      VAR_2.scilv1 = VAR_5;
      return;

    case 0x29:
      VAR_2.scilv2 = VAR_5;
      return;

    case 0x2A:
      VAR_2.mcieb = (VAR_2.mcieb & 0xFF) + (VAR_5 << 8);
      return;

    case 0x2B:
      VAR_2.mcieb = (VAR_2.mcieb & 0x700) + VAR_5;
      return;

    case 0x2D:
      if (VAR_5 & 0x20)
        FUNC_2(0x20);
      return;

    case 0x2E:
      VAR_2.mcipd &= ~(VAR_5 << 8);
      return;

    case 0x2F:
      VAR_2.mcipd &= ~(u32)VAR_5;
      return;
    }
}
