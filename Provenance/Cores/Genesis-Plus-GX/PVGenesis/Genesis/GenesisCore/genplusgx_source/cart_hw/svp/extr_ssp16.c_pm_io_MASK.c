
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef unsigned short u32 ;
struct TYPE_12__ {scalar_t__ rom; } ;
struct TYPE_11__ {int v; } ;
struct TYPE_7__ {int* RAM1; } ;
struct TYPE_8__ {TYPE_1__ bank; } ;
struct TYPE_10__ {int emu_status; int** pmac; TYPE_2__ mem; } ;
struct TYPE_9__ {scalar_t__ iram_rom; scalar_t__ dram; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_6__ VAR_6 ;
 int FUNC_1 (int,char*,int,...) ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int FUNC_3 (unsigned short,unsigned short) ;
 TYPE_5__ VAR_8 ;
 int VAR_9 ;
 TYPE_4__* VAR_10 ;
 TYPE_3__* VAR_11 ;

__attribute__((used)) static u32 FUNC_4(int VAR_12, int VAR_13, u32 VAR_14)
{
  if (VAR_10->emu_status & VAR_5)
  {

    if ((*(VAR_3-1) & 0xff0f) && (*(VAR_3-1) & 0xfff0)) {




      VAR_10->emu_status &= ~VAR_5;
      return 0;
    }



    VAR_10->pmac[VAR_13][VAR_12] = VAR_8.v;
    VAR_10->emu_status &= ~VAR_5;
    return 0;
  }


  if (VAR_10->emu_status & VAR_4) {




    VAR_10->emu_status &= ~VAR_4;
  }

  if (VAR_12 == 4 || (VAR_9 & 0x60))
  {



    unsigned short *VAR_15 = (unsigned short *)VAR_11->dram;
    if (VAR_13)
    {


      int VAR_16 = VAR_10->pmac[1][VAR_12]&0xffff;
      int VAR_17 = VAR_10->pmac[1][VAR_12]>>16;




      if ((VAR_17 & 0x43ff) == 0x0018)
      {
        int VAR_18 = FUNC_2(VAR_17);




        if (VAR_17 & 0x0400) {
               FUNC_3(VAR_15[VAR_16], VAR_14);
        } else VAR_15[VAR_16] = VAR_14;
        VAR_10->pmac[1][VAR_12] += VAR_18;
      }
      else if ((VAR_17 & 0xfbff) == 0x4018)
      {




        if (VAR_17 & 0x0400) {
               FUNC_3(VAR_15[VAR_16], VAR_14);
        } else VAR_15[VAR_16] = VAR_14;

        VAR_10->pmac[1][VAR_12] += (VAR_16&1) ? 31 : 1;
      }
      else if ((VAR_17 & 0x47ff) == 0x001c)
      {
        int VAR_19 = FUNC_2(VAR_17);





        ((unsigned short *)VAR_11->iram_rom)[VAR_16&0x3ff] = VAR_14;
        VAR_10->pmac[1][VAR_12] += VAR_19;
      }







    }
    else
    {


      int VAR_20 = VAR_10->pmac[0][VAR_12]&0xffff;
      int VAR_21 = VAR_10->pmac[0][VAR_12]>>16;

      if ((VAR_21 & 0xfff0) == 0x0800)
      {






        if ((signed int)(VAR_10->pmac[0][VAR_12] & 0xffff) == -1) VAR_10->pmac[0][VAR_12] += 1<<16;
        VAR_10->pmac[0][VAR_12] ++;

        VAR_14 = ((unsigned short *)VAR_6.rom)[VAR_20|((VAR_21&0xf)<<16)];
      }
      else if ((VAR_21 & 0x47ff) == 0x0018)
      {
        int VAR_22 = FUNC_2(VAR_21);



        VAR_14 = VAR_15[VAR_20];
        VAR_10->pmac[0][VAR_12] += VAR_22;
      }
      else
      {




        VAR_14 = 0;
      }
    }


    VAR_8.v = VAR_10->pmac[VAR_13][VAR_12];

    return VAR_14;
  }

  return (u32)-1;
}
