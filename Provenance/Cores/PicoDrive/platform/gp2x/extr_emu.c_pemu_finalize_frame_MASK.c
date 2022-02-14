
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ dirtyPal; } ;
struct TYPE_5__ {int* reg; } ;
struct TYPE_8__ {TYPE_2__ m; TYPE_1__ video; } ;
struct TYPE_7__ {int EmuOpt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_4__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 TYPE_3__ VAR_13 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_14 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,int) ;
 int VAR_15 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int*,int,int) ;
 int VAR_16 ;
 int FUNC_6 (int,int ,char const*) ;
 int VAR_17 ;
 int FUNC_7 (int ,scalar_t__,int,int) ;

void FUNC_8(const char *VAR_18, const char *VAR_19)
{
 int VAR_20 = VAR_13.EmuOpt;
 int VAR_21;

 if (VAR_8 & VAR_2)
  ;
 else if (FUNC_2() == VAR_12)
 {

  if (VAR_7.m.dirtyPal) {
   VAR_7.m.dirtyPal = 0;
   VAR_21 = FUNC_4(1);

   FUNC_3(VAR_15, VAR_21);
  }

  if (VAR_8 & VAR_5)
   FUNC_5((int *)(VAR_9+328*8+328*223), 0xe0e0e0e0, 328);

  FUNC_7(VAR_14, VAR_9+328*8,
   !(VAR_7.video.reg[12] & 1), !(VAR_10 & VAR_6));
 }
 else if (FUNC_2() == VAR_11)
 {

  if (VAR_7.m.dirtyPal)
  {
   VAR_7.m.dirtyPal = 0;
   VAR_21 = FUNC_4(0);
   FUNC_3(VAR_15, VAR_21);
  }
 }

 if (VAR_19)
  FUNC_6(4, VAR_17, VAR_19);
 if (VAR_20 & VAR_1)
  FUNC_6(VAR_16, VAR_17, VAR_18);
 if ((VAR_8 & VAR_3) && (VAR_20 & VAR_0))
  FUNC_0();
 if (VAR_8 & VAR_4)
  FUNC_1();
}
