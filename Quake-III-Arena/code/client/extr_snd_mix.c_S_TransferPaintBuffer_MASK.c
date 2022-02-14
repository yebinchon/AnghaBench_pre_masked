
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int samplebits; int channels; int samples; scalar_t__ buffer; } ;
struct TYPE_5__ {int left; int right; } ;
struct TYPE_4__ {scalar_t__ integer; } ;


 int FUNC_0 (unsigned long*,int) ;
 TYPE_3__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int) ;

void FUNC_2(int VAR_4)
{
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int *VAR_8;
 int VAR_9;
 int VAR_10;
 unsigned long *VAR_11;

 VAR_11 = (unsigned long *)VAR_0.buffer;


 if ( VAR_3->integer ) {
  int VAR_12;
  int VAR_13;


  VAR_13 = (VAR_4 - VAR_2);
  for (VAR_12=0 ; VAR_12<VAR_13 ; VAR_12++)
   VAR_1[VAR_12].left = VAR_1[VAR_12].right = FUNC_1((VAR_2+VAR_12)*0.1)*20000*256;
 }


 if (VAR_0.samplebits == 16 && VAR_0.channels == 2)
 {
  FUNC_0 (VAR_11, VAR_4);
 }
 else
 {
  VAR_8 = (int *) VAR_1;
  VAR_6 = (VAR_4 - VAR_2) * VAR_0.channels;
  VAR_7 = VAR_0.samples - 1;
  VAR_5 = VAR_2 * VAR_0.channels & VAR_7;
  VAR_9 = 3 - VAR_0.channels;

  if (VAR_0.samplebits == 16)
  {
   short *VAR_14 = (short *) VAR_11;
   while (VAR_6--)
   {
    VAR_10 = *VAR_8 >> 8;
    VAR_8+= VAR_9;
    if (VAR_10 > 0x7fff)
     VAR_10 = 0x7fff;
    else if (VAR_10 < -32768)
     VAR_10 = -32768;
    VAR_14[VAR_5] = VAR_10;
    VAR_5 = (VAR_5 + 1) & VAR_7;
   }
  }
  else if (VAR_0.samplebits == 8)
  {
   unsigned char *VAR_15 = (unsigned char *) VAR_11;
   while (VAR_6--)
   {
    VAR_10 = *VAR_8 >> 8;
    VAR_8+= VAR_9;
    if (VAR_10 > 0x7fff)
     VAR_10 = 0x7fff;
    else if (VAR_10 < -32768)
     VAR_10 = -32768;
    VAR_15[VAR_5] = (VAR_10>>8) + 128;
    VAR_5 = (VAR_5 + 1) & VAR_7;
   }
  }
 }
}
