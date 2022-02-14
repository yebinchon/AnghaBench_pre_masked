
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* z_streamp ;
typedef int ush ;
struct TYPE_7__ {int bi_valid; int bi_buf; int * pending_out; scalar_t__ d_buf; } ;
typedef TYPE_2__ deflate_state ;
struct TYPE_6__ {struct TYPE_6__* state; } ;
typedef int Bytef ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;

int FUNC_1 (z_streamp VAR_5, int VAR_6, int VAR_7)
{
   deflate_state *VAR_8;
   int VAR_9;

   if (VAR_5 == VAR_2 || VAR_5->state == VAR_2) return VAR_4;
   VAR_8 = (deflate_state*)VAR_5->state;
   if ((Bytef *)(VAR_8->d_buf) < VAR_8->pending_out + ((VAR_0 + 7) >> 3))
      return VAR_1;
   do {
      VAR_9 = VAR_0 - VAR_8->bi_valid;
      if (VAR_9 > VAR_6)
         VAR_9 = VAR_6;
      VAR_8->bi_buf |= (ush)((VAR_7 & ((1 << VAR_9) - 1)) << VAR_8->bi_valid);
      VAR_8->bi_valid += VAR_9;
      FUNC_0(VAR_8);
      VAR_7 >>= VAR_9;
      VAR_6 -= VAR_9;
   } while (VAR_6);
   return VAR_3;
}
