
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int target_y; int tgt_stride; int target_x; int con_xres; scalar_t__ con_yres; scalar_t__* destbuffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* FUNC_0 () ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;

void FUNC_1(u32 VAR_5)
{
 u32 VAR_6,VAR_7, VAR_8;
 u32 *VAR_9,*VAR_10;

 VAR_4 = VAR_1;

 VAR_10 = VAR_3->destbuffer;
 VAR_9 = FUNC_0()+(VAR_3->target_y*VAR_3->tgt_stride) + VAR_3->target_x*VAR_2;
 VAR_8 = VAR_3->tgt_stride/4 - (VAR_3->con_xres/VAR_2);

 for(VAR_6=VAR_3->con_yres;VAR_6>0;VAR_6--)
 {
  for(VAR_7=VAR_3->con_xres;VAR_7>0;VAR_7-=VAR_2)
  {
   *VAR_9++ = *VAR_10++;
  }
  VAR_9 += VAR_8;
 }

 VAR_4 = VAR_0;
}
