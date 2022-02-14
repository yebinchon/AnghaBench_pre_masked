
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ gp2x_soc_t ;
struct TYPE_4__ {int frame_count; } ;
struct TYPE_6__ {TYPE_1__ m; } ;
struct TYPE_5__ {int volume; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_0 (char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int*,int) ;
 scalar_t__ FUNC_2 () ;

void FUNC_3(int VAR_9, int VAR_10)
{
 static int VAR_11 = 0, VAR_12 = 0;
 int VAR_13 = 0;
 int VAR_14 = VAR_5.volume;
 gp2x_soc_t VAR_15;

 VAR_15 = FUNC_2();
 if ((VAR_2 & VAR_0) && VAR_15 == VAR_4)
  VAR_13 = 1;

 if (VAR_9)
 {
  if (VAR_13 && VAR_14 < 5 && VAR_11 == VAR_1.m.frame_count - 1 && VAR_12 < 12)
   VAR_12++;
  else {
   VAR_12 = 0;
   FUNC_1(&VAR_5.volume, VAR_10 ? 1 : -1);
   VAR_14 = VAR_5.volume;
  }
  FUNC_0("VOL: %02i", VAR_14);
  VAR_11 = VAR_1.m.frame_count;
 }

 if (!VAR_13)
  return;


 if (VAR_14 >= 5)
  VAR_3 = VAR_7;
 else {
  VAR_6 = 5 - VAR_14;
  VAR_3 = VAR_8;
 }
}
