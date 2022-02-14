
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int suseconds_t ;
struct timeval {scalar_t__ tv_usec; int tv_sec; } ;
struct hp_sdc_mlc_priv_s {scalar_t__ emtestmode; } ;
struct TYPE_4__ {int tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_5__ {int* ipacket; int opacket; int icount; scalar_t__ intimeout; int isem; TYPE_1__ instart; struct hp_sdc_mlc_priv_s* priv; } ;
typedef TYPE_2__ hil_mlc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct timeval*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(hil_mlc *VAR_5, suseconds_t VAR_6)
{
 struct hp_sdc_mlc_priv_s *VAR_7;
 int VAR_8 = 2;

 VAR_7 = VAR_5->priv;


 if (FUNC_1(&VAR_5->isem)) {
  struct timeval VAR_9;
  if (VAR_7->emtestmode) {
   VAR_5->ipacket[0] =
    VAR_0 | (VAR_5->opacket &
            (VAR_2 |
      VAR_1 |
      VAR_3));
   VAR_5->icount = 14;

   goto wasup;
  }
  FUNC_0(&VAR_9);
  VAR_9.tv_usec += VAR_4 * (VAR_9.tv_sec - VAR_5->instart.tv_sec);
  if (VAR_9.tv_usec - VAR_5->instart.tv_usec > VAR_5->intimeout) {




   VAR_8 = 1;
   FUNC_2(&VAR_5->isem);
  }
  goto done;
 }
 wasup:
 FUNC_2(&VAR_5->isem);
 VAR_8 = 0;
 done:
 return VAR_8;
}
