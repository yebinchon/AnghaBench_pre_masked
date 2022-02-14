
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ gp2x_soc_t ;
struct TYPE_4__ {scalar_t__ frame_count; } ;
struct TYPE_6__ {TYPE_1__ m; } ;
struct TYPE_5__ {int EmuOpt; int volume; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;

void FUNC_5(void)
{
 gp2x_soc_t VAR_5;

 FUNC_1();

 if (VAR_4.EmuOpt & VAR_0)
 {
  VAR_5 = FUNC_4();
  if (VAR_5 == VAR_3) {
   VAR_2 = FUNC_3(VAR_2);
   FUNC_0(VAR_1.m.frame_count ? 1 : 0);
  }

  FUNC_2(&VAR_4.volume, 0);
 }
}
