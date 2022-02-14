
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {unsigned int cycles; int status; short* ram; int* out; TYPE_3__* chan; scalar_t__ enabled; } ;
struct TYPE_9__ {char* cycles; } ;
struct TYPE_7__ {scalar_t__ w; } ;
struct TYPE_6__ {int w; } ;
struct TYPE_8__ {int addr; short env; int pan; TYPE_2__ fd; TYPE_1__ ls; } ;


 unsigned int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (char*,int ,char*,unsigned int,unsigned int) ;
 TYPE_5__ VAR_2 ;
 TYPE_4__ VAR_3 ;
 int VAR_4 ;

void FUNC_3(unsigned int VAR_5)
{




  if (VAR_2.enabled)
  {
    int VAR_6, VAR_7, VAR_8, VAR_9;


    for (VAR_6=0; VAR_6<VAR_5; VAR_6++)
    {

      VAR_8 = VAR_9 = 0;


      for (VAR_7=0; VAR_7<8; VAR_7++)
      {

        if (VAR_2.status & (1 << VAR_7))
        {

          short VAR_10 = VAR_2.ram[(VAR_2.chan[VAR_7].addr >> 11) & 0xffff];


          if (VAR_10 == 0xff)
          {

            VAR_2.chan[VAR_7].addr = VAR_2.chan[VAR_7].ls.w << 11;


            VAR_10 = VAR_2.ram[VAR_2.chan[VAR_7].ls.w];
          }
          else
          {

            VAR_2.chan[VAR_7].addr += VAR_2.chan[VAR_7].fd.w;
          }


          if (VAR_10 != 0xff)
          {

            if (VAR_10 & 0x80)
            {

              VAR_10 = VAR_10 & 0x7f;
            }
            else
            {

              VAR_10 = -(VAR_10 & 0x7f);
            }


            VAR_8 += ((VAR_10 * VAR_2.chan[VAR_7].env * (VAR_2.chan[VAR_7].pan & 0x0F)) >> 5);
            VAR_9 += ((VAR_10 * VAR_2.chan[VAR_7].env * (VAR_2.chan[VAR_7].pan >> 4)) >> 5);
          }
        }
      }


      if (VAR_8 < -32768) VAR_8 = -32768;
      else if (VAR_8 > 32767) VAR_8 = 32767;
      if (VAR_9 < -32768) VAR_9 = -32768;
      else if (VAR_9 > 32767) VAR_9 = 32767;


      if (VAR_2.out[0] != VAR_8)
      {
        FUNC_0(VAR_1[0], VAR_6, VAR_8-VAR_2.out[0]);
        VAR_2.out[0] = VAR_8;
      }


      if (VAR_2.out[1] != VAR_9)
      {
        FUNC_0(VAR_1[1], VAR_6, VAR_9-VAR_2.out[1]);
        VAR_2.out[1] = VAR_9;
      }
    }
  }
  else
  {

    if (VAR_2.out[0])
    {
      FUNC_0(VAR_1[0], 0, -VAR_2.out[0]);
      VAR_2.out[0] = 0;
    }


    if (VAR_2.out[1])
    {
      FUNC_0(VAR_1[1], 0, -VAR_2.out[1]);
      VAR_2.out[1] = 0;
    }
  }


  FUNC_1(VAR_1[0], VAR_5);
  FUNC_1(VAR_1[1], VAR_5);


  VAR_2.cycles += VAR_5 * VAR_0;
}
