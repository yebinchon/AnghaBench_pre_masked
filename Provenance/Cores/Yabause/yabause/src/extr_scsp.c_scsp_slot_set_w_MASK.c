
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
typedef int u16 ;
struct TYPE_5__ {int key; int sbctl; int ssctl; int lpctl; int pcm8b; int sa; int lsa; int lea; int sr; int dr; int eghold; int ar; int lslnk; int krs; int sl; int rr; int sdir; int swe; int mdl; int mdx; int mdy; int fsft; int finc; int lfoinc; int lfofms; int lfoems; int imxl; int dislr; int disll; int efslr; int efsll; int lfoemw; int lfofmw; int lfocnt; int tl; int * rrp; int * arp; int * drp; int * srp; int ecnt; } ;
typedef TYPE_1__ slot_t ;
typedef int s32 ;
struct TYPE_6__ {TYPE_1__* slot; } ;


 int FUNC_0 (char*,size_t,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_4__ VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int * VAR_20 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int,int) ;
 int * VAR_21 ;

__attribute__((used)) static void
FUNC_5 (u32 VAR_22, s32 VAR_23, u16 VAR_24)
{



  slot_t *VAR_25 = &(VAR_7.slot[VAR_22]);

  FUNC_0 ("slot %d : reg %.2X = %.4X\n", VAR_22, VAR_23 & 0x1E, VAR_24);

  *(u16 *)&VAR_10[VAR_23 ^ 2] = VAR_24;

  switch (VAR_23 & 0x1E)
    {
    case 0x00:
      VAR_25->key = (VAR_24 >> 11) & 1;
      VAR_25->sbctl = (VAR_24 >> 9) & 3;
      VAR_25->ssctl = (VAR_24 >> 7) & 3;
      VAR_25->lpctl = (VAR_24 >> 5) & 3;

      VAR_25->pcm8b = VAR_24 & 0x10;
      VAR_25->sa = (VAR_25->sa & 0x0FFFF) | ((VAR_24 & 0xF) << 16);
      VAR_25->sa &= VAR_5;

      if (VAR_25->ecnt < VAR_0)
        FUNC_3(VAR_25);

      if (VAR_24 & 0x1000)
        FUNC_1();
      return;

    case 0x02:
      VAR_25->sa = (VAR_25->sa & 0xF0000) | VAR_24;
      VAR_25->sa &= VAR_5;

      if (VAR_25->ecnt < VAR_0)
        FUNC_3(VAR_25);
      return;

    case 0x04:
      VAR_25->lsa = VAR_24 << VAR_4;
      return;

    case 0x06:
      VAR_25->lea = VAR_24 << VAR_4;
      return;

    case 0x08:
      VAR_25->sr = (VAR_24 >> 11) & 0x1F;
      VAR_25->dr = (VAR_24 >> 6) & 0x1F;
      VAR_25->eghold = VAR_24 & 0x20;
      VAR_25->ar = VAR_24 & 0x1F;

      if (VAR_25->sr)
        VAR_25->srp = &VAR_9[VAR_25->sr << 1];
      else
        VAR_25->srp = &VAR_20[0];

      if (VAR_25->dr)
        VAR_25->drp = &VAR_9[VAR_25->dr << 1];
      else
        VAR_25->drp = &VAR_20[0];

      if (VAR_25->ar)
        VAR_25->arp = &VAR_8[VAR_25->ar << 1];
      else
        VAR_25->arp = &VAR_20[0];

      FUNC_2 (VAR_25, 0x1 | 0x2 | 0x4);
      return;

    case 0x0A:
      VAR_25->lslnk = (VAR_24 >> 8) & 0x40;
      VAR_25->krs = (VAR_24 >> 10) & 0xF;

      if (VAR_25->krs == 0xF)
        VAR_25->krs = 4;
      else
        VAR_25->krs >>= 2;

      VAR_25->sl = ((VAR_24 & 0x3E0) << VAR_3) + VAR_1;
      VAR_25->rr = VAR_24 & 0x1F;

      if (VAR_25->rr)
        VAR_25->rrp = &VAR_9[VAR_25->rr << 1];
      else
        VAR_25->rrp = &VAR_20[0];

      FUNC_2 (VAR_25, 0xF);
      return;

    case 0x0C:
      VAR_25->sdir = (VAR_24 >> 8) & 2;
      VAR_25->swe = (VAR_24 >> 8) & 1;
      VAR_25->tl = VAR_21[(VAR_24 & 0xFF)];
      return;

    case 0x0E:
      VAR_25->mdl = (VAR_24 >> 12) & 0xF;
      VAR_25->mdx = (VAR_24 >> 6) & 0x3F;
      VAR_25->mdy = VAR_24 & 0x3F;
      return;

    case 0x10:
      if (VAR_24 & 0x4000)
        VAR_25->fsft = 23 - ((VAR_24 >> 11) & 0xF);
      else
        VAR_25->fsft = (((VAR_24 >> 11) & 7) ^ 7);

      VAR_25->finc = ((0x400 + (VAR_24 & 0x3FF)) << 7) >> VAR_25->fsft;

      FUNC_2 (VAR_25, 0xF);
      return;

    case 0x12:
      if (VAR_24 & 0x8000)
        {
          VAR_25->lfoinc = -1;
          return;
        }
      else if (VAR_25->lfoinc == -1)
        {
          VAR_25->lfocnt = 0;
        }

      VAR_25->lfoinc = VAR_17[(VAR_24 >> 10) & 0x1F];
      if ((VAR_24 >> 5) & 7)
        VAR_25->lfofms = ((VAR_24 >> 5) & 7) + 7;
      else
        VAR_25->lfofms = 31;

      if (VAR_24 & 7)
        VAR_25->lfoems = ((VAR_24 & 7) ^ 7) + 4;
      else
        VAR_25->lfoems = 31;

      switch ((VAR_24 >> 8) & 3)
        {
        case 0:
          VAR_25->lfofmw = VAR_14;
          break;

        case 1:
          VAR_25->lfofmw = VAR_16;
          break;

        case 2:
          VAR_25->lfofmw = VAR_19;
          break;

        case 3:
          VAR_25->lfofmw = VAR_12;
          break;
        }

      switch ((VAR_24 >> 3) & 3)
        {
        case 0:
          VAR_25->lfoemw = VAR_13;
          return;

        case 1:
          VAR_25->lfoemw = VAR_15;
          return;

        case 2:
          VAR_25->lfoemw = VAR_18;
          return;

        case 3:
          VAR_25->lfoemw = VAR_11;
        }
      return;

    case 0x14:
      if (VAR_24 & 7)
        VAR_25->imxl = ((VAR_24 & 7) ^ 7) + VAR_2;
      else
        VAR_25->imxl = 31;
      return;

    case 0x16:
      if (VAR_24 & 0xE000)
        {


          VAR_25->dislr = VAR_25->disll = (((VAR_24 >> 13) & 7) ^ 7) + VAR_2;
          if (VAR_24 & 0x1000)
            {

              if ((VAR_24 & 0xF00) == 0xF00)
                VAR_25->dislr = 31;
              else
                VAR_25->dislr += (VAR_24 >> 9) & 7;
            }
          else
            {

              if ((VAR_24 & 0xF00) == 0xF00)
                VAR_25->disll = 31;
              else
                VAR_25->disll += (VAR_24 >> 9) & 7;
            }
        }
      else
        {
          VAR_25->dislr = VAR_25->disll = 31;
        }

      if (VAR_24 & 0xE0)
        {
          VAR_25->efslr = VAR_25->efsll = (((VAR_24 >> 5) & 7) ^ 7) + VAR_2;
          if (VAR_24 & 0x10)
            {

              if ((VAR_24 & 0xF) == 0xF)
                VAR_25->efslr = 31;
              else
                VAR_25->efslr += (VAR_24 >> 1) & 7;
            }
          else
            {

              if ((VAR_24 & 0xF) == 0xF)
                VAR_25->efsll = 31;
              else
                VAR_25->efsll += (VAR_24 >> 1) & 7;
            }
        }
      else
        {
          VAR_25->efslr = VAR_25->efsll = 31;
        }
      return;
    }
}
