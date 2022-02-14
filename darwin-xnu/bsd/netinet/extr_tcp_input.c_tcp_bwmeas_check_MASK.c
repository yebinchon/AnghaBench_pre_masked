
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct tcpcb {scalar_t__ snd_una; int t_flagsext; TYPE_1__* t_bwmeas; } ;
typedef scalar_t__ int32_t ;
struct TYPE_2__ {scalar_t__ bw_start; int bw_ts; int bw_sndbw; int bw_sndbw_max; scalar_t__ bw_size; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct tcpcb *VAR_2)
{
 int32_t VAR_3;
 uint32_t VAR_4, VAR_5, VAR_6;

 if (FUNC_0(VAR_2->snd_una, VAR_2->t_bwmeas->bw_start))
  return;

 VAR_3 = VAR_2->snd_una - VAR_2->t_bwmeas->bw_start;
 if ((VAR_2->t_flagsext & VAR_0) &&
     VAR_3 >= (int32_t)(VAR_2->t_bwmeas->bw_size)) {
  VAR_5 = VAR_3;
  VAR_6 = VAR_1 - VAR_2->t_bwmeas->bw_ts;
  if (VAR_6 > 0) {
   VAR_4 = VAR_5 / VAR_6;
   if ( VAR_4 > 0) {
    if (VAR_2->t_bwmeas->bw_sndbw > 0) {
     VAR_2->t_bwmeas->bw_sndbw =
         (((VAR_2->t_bwmeas->bw_sndbw << 3)
         - VAR_2->t_bwmeas->bw_sndbw)
         + VAR_4) >> 3;
    } else {
     VAR_2->t_bwmeas->bw_sndbw = VAR_4;
    }


    if (VAR_2->t_bwmeas->bw_sndbw_max == 0) {
     VAR_2->t_bwmeas->bw_sndbw_max =
         VAR_2->t_bwmeas->bw_sndbw;
    } else {
     VAR_2->t_bwmeas->bw_sndbw_max =
         FUNC_1(VAR_2->t_bwmeas->bw_sndbw,
         VAR_2->t_bwmeas->bw_sndbw_max);
    }
   }
  }
  VAR_2->t_flagsext &= ~(VAR_0);
 }
}
