
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8 ;
typedef int int16 ;
struct TYPE_16__ {int* ram; } ;
struct TYPE_12__ {TYPE_3__* tracks; } ;
struct TYPE_15__ {int* audio; size_t index; int volume; TYPE_4__ toc; } ;
struct TYPE_14__ {scalar_t__ datasource; } ;
struct TYPE_13__ {TYPE_2__* regs; } ;
struct TYPE_11__ {scalar_t__ fd; TYPE_6__ vf; } ;
struct TYPE_9__ {int h; } ;
struct TYPE_10__ {int w; TYPE_1__ byte; } ;


 int * VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 unsigned int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ,unsigned int) ;
 TYPE_8__ VAR_1 ;
 TYPE_7__ VAR_2 ;
 int FUNC_3 (int*,int,unsigned int,scalar_t__) ;
 int FUNC_4 (TYPE_6__*,char*,unsigned int,int ) ;
 TYPE_5__ VAR_3 ;

void FUNC_5(unsigned int VAR_4)
{

  int16 VAR_5 = VAR_2.audio[0];
  int16 VAR_6 = VAR_2.audio[1];


  VAR_4 = FUNC_1(VAR_0[0], VAR_4);


  if (!VAR_3.regs[0x36>>1].byte.h && VAR_2.toc.tracks[VAR_2.index].fd)
  {
    int VAR_7, VAR_8, VAR_9;


    int VAR_10 = VAR_2.volume;


    int VAR_11 = VAR_3.regs[0x34>>1].w >> 4;
    {



      uint8 *VAR_12 = VAR_1.ram;

      FUNC_3(VAR_1.ram, 1, VAR_4 * 4, VAR_2.toc.tracks[VAR_2.index].fd);


      for (VAR_7=0; VAR_7<VAR_4; VAR_7++)
      {


        VAR_8 = (VAR_10 & 0x7fc) ? (VAR_10 & 0x7fc) : (VAR_10 & 0x03);






        VAR_9 = (((int16)((VAR_12[0] + VAR_12[1]*256)) * VAR_8) / 1024) - VAR_5;
        VAR_12 += 2;

        VAR_5 += VAR_9;
        FUNC_0(VAR_0[0], VAR_7, VAR_9);






        VAR_9 = (((int16)((VAR_12[0] + VAR_12[1]*256)) * VAR_8) / 1024) - VAR_6;
        VAR_12 += 2;

        VAR_6 += VAR_9;
        FUNC_0(VAR_0[1], VAR_7, VAR_9);


        if (VAR_10 < VAR_11)
        {

          VAR_10++;
        }
        else if (VAR_10 > VAR_11)
        {

          VAR_10--;
        }
        else if (!VAR_10)
        {

          break;
        }
      }
    }


    VAR_2.volume = VAR_10;


    VAR_2.audio[0] = VAR_5;
    VAR_2.audio[1] = VAR_6;
  }
  else
  {

    if (VAR_5) FUNC_0(VAR_0[0], 0, -VAR_5);
    if (VAR_6) FUNC_0(VAR_0[1], 0, -VAR_6);


    VAR_2.audio[0] = 0;
    VAR_2.audio[1] = 0;
  }


  FUNC_2(VAR_0[0], VAR_4);
  FUNC_2(VAR_0[1], VAR_4);
}
